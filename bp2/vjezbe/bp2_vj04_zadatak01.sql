/*
	Vjezbe 4, Zadatak 1

	Iz baze podataka Northwind prikazati ime i prezime zaposlenika (spojeno) sa ukupnim brojem
	narudzbi koje je uradio. Listu sortirati od zaposlenika sa najvecim brojem uradjenih narudzbi.

	Modifikovati predhodni upit tako da se prikaze broj narudzbi koje su uradjene u 7 mjesecu
	1997 godine, a prikazati samo one zaposlenike koji su napravili 5 ili vise narudzbi.
*/

USE NORTHWND

SELECT E.FirstName + ' ' + E.LastName AS 'Ime i Prezime',
	COUNT(O.EmployeeID) AS 'Broj narudzbi'
FROM Employees AS E 
	INNER JOIN Orders AS O
	ON E.EmployeeID = O.EmployeeID
GROUP BY E.FirstName, E.LastName
ORDER BY [Broj narudzbi] DESC

--drugi
SELECT E.FirstName + ' ' + E.LastName AS 'Ime i Prezime',
	COUNT(O.EmployeeID) AS 'Broj narudzbi'
FROM Employees AS E 
	INNER JOIN Orders AS O
	ON E.EmployeeID = O.EmployeeID
WHERE DATEPART(MONTH, O.OrderDate) = 7 AND DATEPART(YEAR, O.OrderDate) = 1997
GROUP BY E.FirstName, E.LastName
HAVING COUNT(O.EmployeeID) >= 5
ORDER BY [Broj narudzbi] DESC