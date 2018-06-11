USE AdventureWorks2014
GO
SELECT	MAX(ListPrice) AS MaxListPrice,
		MIN(ListPrice) AS MinListPrice,
		AVG(CONVERT(int, Size)) AS AvgProductSize,
		SUM(DaysToManufacture) AS TotalDaysToManifacture
FROM	Production.Product
WHERE	ISNUMERIC(Size) = 1