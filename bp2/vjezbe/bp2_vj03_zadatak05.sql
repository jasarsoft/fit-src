/*
	Vjezbe 3, Zadatak 5, AdvenureWorks2014

	Kreirati upit koji prikazuje minimalnu, maksimalnu, prosjecnu te ukupnu zaradu
	po mjesecima u 2013. godini.
*/

USE AdventureWorks2014

SELECT MONTH(OrderDate) AS 'Mjesec',
	MIN(TotalDue) AS 'Minimalna zarada',
	MAX(TotalDue) AS 'Maksimalna zarada',
	AVG(TotalDue) AS 'Prosjecna zarada',
	SUM(TotalDue) AS 'Ukupna zarada'
FROM Sales.SalesOrderHeader
WHERE YEAR(OrderDate) = 2013
GROUP BY MONTH(OrderDate)
ORDER BY 1