/*
	Vjezbe 6, Zadatak 3

	Koristeci bazu podataka AdventureWorks2014 prikazati cetvrtu najvecu platu u preduzecu
	(po visini primanja) Tabela EmployeePayHistory
*/

USE AdventureWorks2014

SELECT TOP 1 Rate
FROM (SELECT TOP 4 Rate
	FROM HumanResources.EmployeePayHistory
	ORDER BY Rate DESC) AS Plate
ORDER BY Rate ASC