/*
	Vjezbe Predavanja 2, Zadatak 4

	Prikazati minimalnu, prosjecnu i maksimalnu cijenu proizvoda.
	(AdventureWorksLT)
*/

USE AdventureWorksLT2014

SELECT MIN(ListPrice) AS 'Minimalna cijena',
	   AVG(ListPrice) AS 'Prosjecna cijena',
	   MAX(ListPrice) AS 'Maksimalna cijena'
FROM [SalesLT].[Product]