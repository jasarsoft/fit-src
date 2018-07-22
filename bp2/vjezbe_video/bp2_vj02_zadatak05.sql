/*
	Vjezbe Predavanje 2, Zadatak 5

	Prikazati 10 najprodavanijih proizvoda i zaradu od prodaje proizvoda.
	(AdventureWorksLT)

	Modifikovati predhodni upit tako da se prikaze samo zarada po proizvodu 
	ali gdje je zarada veca od 30.000 (4 zapisa)
*/

USE AdventureWorksLT2014

SELECT TOP 10 ProductID,
			  SUM(OrderQty) AS 'Kolicina',
			  SUM(OrderQty * UnitPrice) AS 'Zarada'
FROM SalesLT.SalesOrderDetail
GROUP BY ProductID
ORDER BY Kolicina DESC

--modifikacija
USE AdventureWorksLT2014

SELECT TOP 10 ProductID,
			  SUM(OrderQty * UnitPrice) AS 'Zarada'
FROM SalesLT.SalesOrderDetail
WHERE ProductID IN (782, 783)
GROUP BY ProductID
HAVING SUM(OrderQty * UnitPrice) > 30000