USE AdventureWorks2014
GO
SELECT P.ProductNumber, R.Comments
FROM Production.Product P
CROSS JOIN Production.ProductReview R