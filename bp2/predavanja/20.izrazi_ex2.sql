USE AdventureWorks2014

SELECT	Name, ProductNumber, ListPrice AS 'Stara Cijena',
		(ListPrice * 1.1) AS 'Nova Cijena',
		SellEndDate
FROM	Production.Product
WHERE	SellEndDate < GETDATE()