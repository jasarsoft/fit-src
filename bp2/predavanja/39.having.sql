USE AdventureWorks2014
GO
SELECT SUM(OrderQty) AS TotalOrderQty
FROM Purchasing.PurchaseOrderDetail
HAVING SUM(OrderQty) > 1000