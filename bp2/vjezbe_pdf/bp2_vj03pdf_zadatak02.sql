/*
	Vjezbe 3 Zadatak 2 AdventureWorks2014

	Prikazati minimalnu, maksimalnu i prosjecnu cijenu proizvoda ali samo onih gdje je cijena 
	veca od 0 KM. 
*/

USE AdventureWorks2014

SELECT MIN(P.ListPrice) AS 'Minimalna cijena',
	   MAX(P.ListPrice) AS 'Maksimalan cijena',
	   AVG(P.ListPrice) AS 'Prosjecna cijena'
FROM Production.Product AS P
WHERE P.ListPrice > 0
