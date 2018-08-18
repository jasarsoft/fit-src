/*
	Vjezbe 6 Zadatak 4 Northwind

	Dodati novu narudzbu. Kao vrijednost polja OrderDate postaviti trenutno vrijeme, jednog od kupaca 
	koji je dodan u zadatku 1, te jednog od zaposlenika koji je dodan u zadatku 3. Za ostale kolone unijeti 
	testne podatke. 
*/

USE NORTHWND

INSERT INTO Orders(CustomerID, EmployeeID, OrderDate)
	VALUES((select top 1 C.CustomerID from Customers AS C where C.CustomerID = 'Test'), 
		   (select top 1 E.EmployeeID from Employees AS E where E.TitleOfCourtesy IS NULL),
		   GETDATE()) 

SELECT COUNT(*)
FROM Orders AS O