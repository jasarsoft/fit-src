USE AdventureWorks2014
GO
SELECT P.Name, PR.Comments
FROM Production.Product AS P
INNER JOIN Production.ProductReview AS PR
ON P.ProductID = PR.ProductID