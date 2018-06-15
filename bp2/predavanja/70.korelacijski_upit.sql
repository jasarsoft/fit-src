USE AdventureWorks2014
GO
SELECT SalesOrderID, CustomerID
FROM Sales.SalesOrderHeader AS SOH
WHERE 10 > (SELECT OrderQty
			FROM Sales.SalesOrderDetail AS SOD
			WHERE SOH.SalesOrderID = SOD.SalesOrderID
				AND SOD.ProductID = 778)