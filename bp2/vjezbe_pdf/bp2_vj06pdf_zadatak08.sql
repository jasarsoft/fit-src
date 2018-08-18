/*
	Vjezbe 6 Zadatak 8 Northwind

	Obrisati sve zaposlenike koji nisu uradili niti jednu narudzbu. 
*/

USE NORTHWND

DELETE FROM Employees
WHERE EmployeeID NOT IN (select O.EmployeeID from Orders AS O)

SELECT COUNT(*)
FROM Employees