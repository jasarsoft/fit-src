USE AdventureWorks2014
GO
SELECT P.ProductNumber, R.Comments
FROM Production.Product P
INNER JOIN Production.ProductReview R
ON P.ProductID = R.ProductID