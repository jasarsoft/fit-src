USE AdventureWorks2014
GO
SELECT	COUNT(*), COUNT(Weight),
		AVG(Weight), AVG(ISNULL(Weight, 0))
FROM Production.Product