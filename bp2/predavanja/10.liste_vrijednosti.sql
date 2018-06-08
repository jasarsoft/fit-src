USE AdventureWorks2014
SELECT ProductNumber, ListPrice
FROM Production.Product
WHERE ListPrice IN (52.64, 74.99, 147.14)