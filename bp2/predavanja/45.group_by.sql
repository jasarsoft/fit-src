USE AdventureWorks2014
GO
SELECT ProductID, COUNT(ProductID) AS ProductSale,
				  SUM(LineTotal) AS Proft
FROM Purchasing.PurchaseOrderDetail
GROUP BY ProductID
ORDER BY ProductID