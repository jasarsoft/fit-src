USE TestDB
GO

SELECT *
FROM Production.ProductReview
GO

INSERT INTO Production.ProductReview
	(ProductID, ReviewerName, ReviewDate, EmailAddress, Rating, Comments, ModifiedDate)
VALUES
	(937, 'Mattias', GETDATE(), 'mattias@mvp-press.com', 4, 'Yeah it is cool', GETDATE()),
	(937, 'Denis', GETDATE(), 'denis@mvp-press.com', 4, 'It is best', GETDATE())

SELECT *
FROM Production.ProductReview
WHERE ProductID = 937