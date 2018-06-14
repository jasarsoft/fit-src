USE AdventureWorks2014
GO
SELECT P.ProductNumber, R.Comments
FROM Production.Product P
FULL OUTER JOIN Production.ProductReview R
ON P.ProductID = R.ProductID