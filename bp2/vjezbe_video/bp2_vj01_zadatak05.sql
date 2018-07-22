/*
	Zadatak 5

	Napisati upit koji prikazuje 50 najskuplji stavki prodaje (detalji narudzbe) i to sljedece kolone
	ID proizvoda, kolicina, cijena, iznos. Cijenu i iznos zaokruziti na dvije decimale.
	Takoder, kolicinu prikazati u formatu 50kom, a cijenu i iznos u formatu 1000 KM.
*/

USE AdventureWorks2014

SELECT TOP 10 ProductID, 
	   CONVERT(nvarchar, OrderQty) + ' kom' AS 'Kolicina',
	   CONVERT(nvarchar, ROUND(UnitPrice, 2)) + ' KM' AS 'Cijena', 
	   CONVERT(nvarchar, ROUND(OrderQty * UnitPrice, 2)) + ' KM' AS 'Iznos'
FROM Sales.SalesOrderDetail
ORDER BY ROUND(OrderQty * UnitPrice, 2) DESC