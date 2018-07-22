/*
	Vjezbe 3, Zadatak 1, AdvenureWorks2014

	Kreirati upit koji prikazuje ukupan broj kupaca po teritoriji. Lista treba da sadrzi
	sljedece kolone: ID teritorije, ukupan broj kupaca. Uzeti u obzir samo teritorije 
	gdje ima vise od 1000 kupaca.
*/

USE AdventureWorks2014

SELECT TerritoryID, 
	   COUNT(CustomerID) AS 'Ukupan broj kupaca'
FROM Sales.Customer
GROUP BY TerritoryID
HAVING COUNT(CustomerID) > 1000