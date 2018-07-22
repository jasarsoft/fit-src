/*
	Vjezbe 3, Zadatak 3, AdvenureWorks2014

	Kreirati upit koji prikazuje 10 najprodavanijih proizvoda. Lista treba da sadrzi ID proizvoda
	i ukupnu kolicinu prodaje. Provjeriti da li ima proizvoda sa istom kolicinom prodaje kao
	zapis pod rednim brojem 10?
*/

USE AdventureWorks2014

SELECT TOP 10 WITH TIES ProductID,
	SUM(OrderQty) AS 'Ukupna kolicina prodaje'
FROM Sales.SalesOrderDetail
GROUP BY ProductID
ORDER BY 2 DESC