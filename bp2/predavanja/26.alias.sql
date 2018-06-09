USE AdventureWorks2014
GO
SELECT	('Proizvod ' + ProductNumber) AS Broj,
		ListPrice AS [Stara Cijena],
		(ListPrice * 1.17) AS 'Nova Cijena'
FROM Production.Product
WHERE ListPrice > 0