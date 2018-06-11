USE AdventureWorks2014
GO
SELECT SUM(OrderQty) AS TotalOrderQty
FROM Purchasing.PurchaseOrderDetail
WHERE SUM(OrderQty) > 1000 --gresa