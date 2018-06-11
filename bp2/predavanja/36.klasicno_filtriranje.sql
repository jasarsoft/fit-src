USE AdventureWorks2014
GO
SELECT SUM(OrderQty) AS TotalOrderQty
FROM Purchasing.PurchaseOrderDetail
WHERE ProductID = 512 AND DueDate = '2005-06-14'