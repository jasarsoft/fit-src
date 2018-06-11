USE AdventureWorks2014
GO
SELECT ProductID, LocationID, SUM(Quantity) AS TotalQuantity
FROM Production.ProductInventory
GROUP BY ProductID, LocationID
ORDER BY ProductID, LocationID DESC