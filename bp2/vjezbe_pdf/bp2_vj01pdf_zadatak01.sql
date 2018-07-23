/*
	Vjezbe 01 Zadatak 01 NORTHWIND
	
	Prikazati listu zaposlenika sa sljedecim atributima:
	ID, ime, prezime, drzava i titula, gdje je 
	ID = 9 ili dolaze iz USA
*/

USE NORTHWND

SELECT E.EmployeeID, E.FirstName, E.LastName, E.Country, E.Title
FROM Employees AS E
WHERE E.EmployeeID = 9 OR E.Country = 'USA'