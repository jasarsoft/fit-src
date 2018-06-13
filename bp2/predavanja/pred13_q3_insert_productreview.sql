USE TestDB
GO

SELECT *
FROM Production.ProductReview
GO

INSERT INTO Production.ProductReview
	(ProductID, ReviewerName, ReviewDate, EmailAddress, 
	 Rating, Comments, ModifiedDate)
VALUES
	(937, 'Jasmin', GETDATE(), 'jasmin@mvp-press.com', 
	 4, 'This is same cool TSQL book', GETDATE())

SELECT *
FROM Production.ProductReview
WHERE ProductID = 937