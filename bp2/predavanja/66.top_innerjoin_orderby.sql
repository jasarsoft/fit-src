USE AdventureWorks2014
GO
SELECT TOP 10 P.Name AS Product, L.Name AS Location, I.Quantity
FROM Production.Product P
	INNER JOIN Production.ProductInventory I
ON P.ProductID = I.ProductID
	INNER JOIN Production.Location L
ON L.LocationID = I.LocationID
ORDER BY I.Quantity ASC