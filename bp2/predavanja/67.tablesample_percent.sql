USE AdventureWorks2014
GO
SELECT Name AS Product
FROM Production.Product TABLESAMPLE (40 PERCENT)