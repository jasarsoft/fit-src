USE AdventureWorks2014
GO
SELECT Name, ListPrice
FROM Production.Product
WHERE Name LIKE '[^AB]_[CD]%' AND ListPrice BETWEEN 5 AND 10