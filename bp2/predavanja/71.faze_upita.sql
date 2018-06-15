USE AdventureWorks2014
GO
SELECT Name, ListPrice
FROM Production.Product AS P1
WHERE 3500 > (SELECT AVG(ListPrice)
			  FROM Production.Product AS P2
			  WHERE P1.ProductID = P2.ProductID)