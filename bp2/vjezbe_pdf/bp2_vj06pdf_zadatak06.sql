/*
	Vjezbe 6 Zadatak 6 Northwind

	Nekom od kupaca dodanih u zadatku 1 izmijeniti broj telefona i fax.
*/

USE NORTHWND

UPDATE Customers
SET Phone = '000-000-000',
	Fax = '111-111-111'
WHERE CustomerID = 'TEST'

SELECT *
FROM Customers AS C
WHERE C.CustomerID = 'TEST'
