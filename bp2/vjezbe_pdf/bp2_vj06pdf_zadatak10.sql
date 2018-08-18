/*
	Vjezbe 6 Zadatak 9 Northwind

	Obrisati narudzbu koja je dodana u zadatku 4 sa detaljima.
*/

USE NORTHWND

DELETE OD
FROM [Order Details] OD
WHERE OD.OrderID = (select O.OrderID from Orders AS O where O.CustomerID = 'Test') 

DELETE O
FROM Orders AS O
WHERE O.OrderID = (select O.OrderID from Orders AS O where O.CustomerID = 'Test') 

--provjera za narudzbu
SELECT *
FROM Orders AS O INNER JOIN [Order Details] AS OD
	ON O.OrderID = OD.OrderID
WHERE O.CustomerID = 'Test'
