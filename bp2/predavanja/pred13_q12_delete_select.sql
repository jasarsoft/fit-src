USE TestDB
GO

SELECT * FROM Production.ProductReview

DELETE FROM Production.ProductReview
WHERE ReviewerName = 'Jasmin'

DELETE FROM Production.ProductReview
WHERE ReviewerName IN (SELECT ReviewerName
					   FROM Production.ProductReview
					   WHERE ReviewerName = 'Denis'
						  OR ReviewerName = 'Mattias')