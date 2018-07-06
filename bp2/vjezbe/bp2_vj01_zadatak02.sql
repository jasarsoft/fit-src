/*
	Zadatak 2

	Napisati upit koji prikazuje narudzbe obavljene u periodu od 01.07.2011 - 31.12.2011 god.
	Uslov je da se prikazu narudzbe gdje ukupan iznos veci od 100.000
*/

USE AdventureWorks2014

SELECT [SalesOrderNumber], CONVERT(nvarchar, [OrderDate], 104) AS 'Datum prodaje', [TotalDue]
FROM Sales.SalesOrderHeader
WHERE OrderDate BETWEEN '07.01.2011' AND '12.31.2011' AND TotalDue > 100000