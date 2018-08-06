/*
	Vjezbe 3 Zadatak 6 AdventureWorks2014

	Kreirati upit koji prikazuje zaradu od prodaje proizvoda. Lista treba da sadrzi ID proizvoda, 
	ukupnu zaradu bez uracunatog popusta i ukupnu zaradu sa uracunatim popustom. Iznos zarade 
	zaokruziti na dvije decimale. Uslov je da se prikaze zarada samo za stavke gdje je bilo popusta. 
	Listu sortirati po zaradi opadajucim redoslijedom. 
*/

USE AdventureWorks2014

SELECT SOD.ProductID AS 'ID proizvoda',
	ROUND(SUM(SOD.OrderQty * SOD.UnitPrice), 2) AS 'Ukupna zarada bez popusta',
	ROUND(SUM(SOD.OrderQty * SOD.UnitPrice * SOD.UnitPriceDiscount), 2) AS 'Popust',
	ROUND(SUM(SOD.OrderQty * SOD.UnitPrice) - SUM(SOD.OrderQty * SOD.UnitPrice * SOD.UnitPriceDiscount), 2) AS 'Ukupna zarada sa popustom',
	CONVERT(decimal(10, 2), SUM(SOD.LineTotal)) AS 'Zarada sa popustom izracunata'
FROM Sales.SalesOrderDetail AS SOD
WHERE SOD.UnitPriceDiscount > 0.0
GROUP BY SOD.ProductID
ORDER BY SUM(SOD.UnitPrice) DESC

--JOIN operator
SELECT SOD.ProductID AS 'ID proizvoda',
	ROUND(SUM(SOD.OrderQty * SOD.UnitPrice), 2) AS 'Ukupna zarada bez popusta',
	ROUND(SUM(SOD.OrderQty * SOD.UnitPrice * SOD.UnitPriceDiscount), 2) AS 'Popust',
	ROUND(SUM(SOD.OrderQty * SOD.UnitPrice) - SUM(SOD.OrderQty * SOD.UnitPrice * SOD.UnitPriceDiscount), 2) AS 'Ukupna zarada sa popustom',
	CONVERT(decimal(10, 2), SUM(SOD.LineTotal)) AS 'Zarada sa popustom izracunata'
FROM Sales.SalesOrderDetail AS SOD INNER JOIN  Production.Product AS P
	ON SOD.ProductID = P.ProductID
WHERE SOD.UnitPriceDiscount > 0.0
GROUP BY SOD.ProductID
ORDER BY SUM(SOD.UnitPrice) DESC