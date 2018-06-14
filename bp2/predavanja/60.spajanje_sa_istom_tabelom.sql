USE AdventureWorks2014
GO
SELECT P1.Name, P1.ListPrice
FROM Production.Product AS P1
	INNER JOIN Production.Product AS P2
	ON P1.ProductSubcategoryID = P2.ProductSubcategoryID
GROUP BY P1.Name, P1.ListPrice
HAVING P1.ListPrice > AVG(P2.ListPrice)