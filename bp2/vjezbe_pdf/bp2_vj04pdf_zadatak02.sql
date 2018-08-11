/*
	Vjezbe 4 Zadatak 2 AdventureWorks2014

	Kreirati upit koji prikazuje 10 najskupljih stavki prodaje (detalji narudzbe) i to sljedece kolone: 
	naziv proizvoda, kolicina, cijena, iznos. Cijenu i iznos zaokruziti na dvije decimale. Takodjer, 
	kolicinu prikazati u formatu „10 kom.“, a cijenu i iznos u formatu „1000 KM“.
*/

USE AdventureWorks2014

SELECT TOP 10 P.Name AS 'Naziv proizvoda',
	CONVERT(varchar, SOD.OrderQty) + ' kom' AS 'Kolicina',
	CONVERT(varchar, ROUND(SOD.UnitPrice, 2)) + ' KM'  AS 'Cijena',
	CONVERT(varchar, ROUND(SOD.OrderQty * SOD.UnitPrice, 2)) + ' KM' AS 'Iznos'
FROM Sales.SalesOrderDetail AS SOD INNER JOIN Production.Product AS P
	ON SOD.ProductID = P.ProductID
ORDER BY SOD.UnitPrice DESC