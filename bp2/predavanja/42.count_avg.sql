USE AdventureWorks2014
GO
SELECT	COUNT(Weight) AS CountOfWeights,
		AVG(Weight) AS Avarage
FROM Production.Product