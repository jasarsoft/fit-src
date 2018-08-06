/*
	Vjezbe 3 Zadatak 3 AdventureWorks2014

	Kreirati upit koji prikazuje ukupan broj kupaca po teritoriji. Lista treba da sadrzi sljedece 
	kolone: ID teritorije, ukupan broj kupaca. Uzeti u obzir samo teritorije gdje ima vise od 1000 
	kupaca.
*/

USE AdventureWorks2014

SELECT C.TerritoryID AS 'ID Teritorije',
	   COUNT(C.CustomerID) AS 'Ukupan broj kupaca'
FROM Sales.Customer AS C
GROUP BY C.TerritoryID
HAVING COUNT(C.CustomerID) > 1000


--JOIN operator
SELECT C.TerritoryID AS 'ID Teritorije',
	   COUNT(C.CustomerID) AS 'Ukupan broj kupaca'
FROM Sales.Customer AS C INNER JOIN Sales.SalesTerritory AS ST
	ON C.TerritoryID = ST.TerritoryID
GROUP BY C.TerritoryID
HAVING COUNT(C.CustomerID) > 1000
