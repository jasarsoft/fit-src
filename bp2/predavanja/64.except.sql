USE AdventureWorks2014
GO
SELECT	ProductModelID AS [Product ID],
		ModifiedDate AS [Date of modification]
	FROM Production.ProductModelProductDescriptionCulture
EXCEPT
SELECT	ProductModelID AS [Product ID],
		ModifiedDate AS [Date of modification]
	FROM Production.ProductModel