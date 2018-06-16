USE TestDB
GO

SELECT ListPrice
FROM Production.Product
WHERE ProductID = 713
GO

UPDATE Production.Product
SET ListPrice = ListPrice * 1.1
WHERE ProductID = 713


