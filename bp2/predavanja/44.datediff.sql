USE AdventureWorks2014
GO
SELECT	COUNT(EmployeeID) AS NumberOfOrders,
		SUM(SubTotal) AS TotalProfit,
		AVG(Freight) AS AvarageFreigt,
		MAX(TaxAmt) AS MaxTax
FROM Purchasing.PurchaseOrderHeader
WHERE EmployeeID = 255 AND DATEDIFF(DAY, OrderDate, ShipDate) < 10