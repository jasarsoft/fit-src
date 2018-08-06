/*
	Vjezbe 3 Zadatak 7 AdventureWorks2014

	Prikazati broj narudzbe, datum narudzbe i datum isporuke za narudzbe koje su isporucene u 
	Kanadu u 7. mjesecu 2014. godine. Uzeti u obzir samo narudzbe koje nisu placene kreditnom 
	karticom. Datume formatirati u sljedecem obliku: dd.mm.yyyy 
*/

USE AdventureWorks2014

SELECT SOH.SalesOrderNumber AS 'Broj narudzbe',
	CONVERT(varchar, SOH.OrderDate, 104) AS 'Datum narudzbe',
	CONVERT(varchar, SOH.ShipDate, 104) AS 'Datum isporuke'
FROM Sales.SalesOrderHeader AS SOH
WHERE SOH.CreditCardID IS NULL AND 
	(SOH.TerritoryID = 6 AND MONTH(SOH.ShipDate) = 7 AND YEAR(SOH.ShipDate) = 2014)

--JOIN operator
SELECT SOH.SalesOrderNumber AS 'Broj narudzbe',
	CONVERT(varchar, SOH.OrderDate, 104) AS 'Datum narudzbe',
	CONVERT(varchar, SOH.ShipDate, 104) AS 'Datum isporuke'
FROM Sales.SalesOrderHeader AS SOH INNER JOIN Sales.SalesTerritory AS ST
	ON SOH.TerritoryID = ST.TerritoryID
WHERE SOH.CreditCardID IS NULL AND 
	(ST.Name = 'Canada' AND MONTH(SOH.ShipDate) = 7 AND YEAR(SOH.ShipDate) = 2014)