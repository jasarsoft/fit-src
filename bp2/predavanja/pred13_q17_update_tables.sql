USE TestDB
GO

UPDATE Production.Product
SET ListPrice = ListPrice * 1.1
	FROM Production.ProductCategory AS PC
	INNER JOIN Production.ProductSubcategory AS PS
	ON PC.ProductCategoryID = PS.ProductCategoryID
	INNER JOIN  Production.Product AS P
	ON PS.ProductSubcategoryID = P.ProductSubcategoryID
	WHERE PC.Name = 'Bikes'
