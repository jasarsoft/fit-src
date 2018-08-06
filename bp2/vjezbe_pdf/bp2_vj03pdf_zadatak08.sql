/*
	Vjezbe 3 Zadatak 8 AdventureWorks2014

	Kreirati upit koji prikazuje minimalnu, maksimalnu, prosjecnu te ukupnu zaradu po 
	mjesecima u 2013. godini. 
*/

USE AdventureWorks2014

SELECT MONTH(SOH.DueDate) AS 'Mjesec',
	MIN(SubTotal) AS 'Minimalna zarada',
	MAX(SubTotal) AS 'Maksimalna zarada',
	AVG(SubTotal) AS 'Prosjecna zarada'
FROM Sales.SalesOrderHeader AS SOH
WHERE YEAR(DueDate) = 2013
GROUP BY MONTH(SOH.DueDate)
ORDER BY MONTH(SOH.DueDate)