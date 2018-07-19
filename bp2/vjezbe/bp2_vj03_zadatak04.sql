/*
	Vjezbe 3, Zadatak 4, AdvenureWorks2014

	Kreirati upit koji prikazuje zaradu od prodaje proizvoda. Lista treba da sadrzi
	ID Proizvoda, ukupnu zaradu bez popusta, te ukupnu zaradu sa popustom.
	Iznos zarade zaokruziti na dvije decimale. Uslov je da se prikaze zarada
	samo za stavke gdje je bilo popusta. Listu sortirati po zaradi opadajucim redosljedom.
*/

USE AdventureWorks2014

SELECT ProductID,
	ROUND(SUM(OrderQty * UnitPrice), 2) AS 'Zarada bez popusta',
	ROUND(SUM(OrderQty * UnitPrice * UnitPriceDiscount), 2) AS 'Popust',
	ROUND(SUM(OrderQty * UnitPrice) - SUM(OrderQty * UnitPrice * UnitPriceDiscount), 2) AS 'Zarada sa popustom',
	SUM(LineTotal) AS 'Zarada sa popustom 2'
FROM Sales.SalesOrderDetail
WHERE UnitPriceDiscount > 0 
GROUP BY ProductID
ORDER BY 4