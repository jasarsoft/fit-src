USE AdventureWorks2014
GO
SELECT	ProductID, COUNT(ProductID) AS ProductSales,
		SUM(LineTotal) AS Profit
FROM	Purchasing.PurchaseOrderDetail
GROUP BY ProductID