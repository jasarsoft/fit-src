/*
	Vjezbe 6 Zadatak 9 Northwind

	Obrisati sve kupce koji nisu uradili niti jednu narudzbu. 
*/

--preko podupita
DELETE C FROM Customers C
WHERE CustomerID NOT IN (select O.CustomerID from Orders AS O)

SELECT COUNT(*)
FROM Customers

--preko join-a
DELETE C
FROM Customers C LEFT JOIN Orders O 
	ON C.CustomerID = O.CustomerID
WHERE O.CustomerID IS NULL