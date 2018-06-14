USE AdventureWorks2014
GO
SELECT P.Name AS Product, V.Name AS Vendor, M.Name AS Measure
FROM Production.Product P
	INNER JOIN Purchasing.ProductVendor PV
ON P.ProductID = PV.ProductID
	INNER JOIN Purchasing.Vendor V
ON PV.BusinessEntityID = V.BusinessEntityID
	INNER JOIN Production.UnitMeasure M
ON M.UnitMeasureCode = PV.UnitMeasureCode