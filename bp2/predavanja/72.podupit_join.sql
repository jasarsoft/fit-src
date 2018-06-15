USE AdventureWorks2014
GO
SELECT Name
FROM Production.ProductSubcategory
WHERE ProductCategoryID IN (SELECT ProductCategoryID
							FROM Production.ProductCategory
							WHERE Name = 'Bikes')

USE AdventureWorks2014
GO
SELECT PS.Name
FROM Production.ProductSubcategory AS PS
	INNER JOIN Production.ProductCategory AS PC
	ON PC.ProductCategoryID = PS.ProductCategoryID
WHERE PC.Name = 'Bikes'