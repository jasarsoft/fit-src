USE AdventureWorks2014

SELECT Name, ISNULL(Color, 'N/A')
FROM Production.Product