USE AdventureWorks2014

SELECT	Name, ProductNumber, ListPrice AS 'Stara Cijena',
		(ListPrice * 1.1) AS 'Nova cijena'
FROM	Production.Product
WHERE	ListPrice > 0