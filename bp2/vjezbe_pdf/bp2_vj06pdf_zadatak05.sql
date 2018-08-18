/*
	Vjezbe 6 Zadatak 5 Northwind

	Za prethodno dodanu narudzbu dodati detalje (Order Details) ukljucujuci sve proizvode koji su dodani 
	u zadatku 2. Cijenu, kolicinu i popust postaviti proizvoljno. 
*/

USE NORTHWND

INSERT INTO [Order Details](OrderID, ProductID, UnitPrice, Quantity, Discount)
	VALUES((select top 1 O.OrderID from Orders AS O where O.CustomerID = 'Test'),
		   (select top 1 P.ProductID from Products AS P where P.ProductName = 'Test 1'),
		   100,
		   1,
		   0.1)

SELECT COUNT(*)
FROM [Order Details]