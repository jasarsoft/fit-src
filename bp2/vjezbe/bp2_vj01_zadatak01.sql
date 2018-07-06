
USE AdventureWorks2014

-- Zadatak 1
/*
	Napisati upit koji prikazuje broj, naziv, boju i cijenu proizvoda [ListPrice].
	Uslovi su da naziv proizvoda pocinje karakterima 'S' i 'T',
	boja proizvoda je plava ili crna, a
	cijena proizvoda izmedju 100 i 1000.
	Podatke je potrebno soritirati po cijeni opadajucim redosljedom.
	Upit napisati na dva nacina.
*/

--prvi nacin
SELECT ProductNumber, Name, Color, ListPrice
FROM Production.Product
WHERE Name LIKE '[ST]%' AND Color IN ('Blue', 'Black') AND ListPrice BETWEEN 100 AND 1000
ORDER BY ListPrice DESC

--drugi nacin
SELECT ProductNumber, Name, Color, ListPrice
FROM Production.Product
WHERE (Name LIKE 'S%' OR Name LIKE 'T%') AND 
	  (Color = 'Blue' OR Color = 'Black') AND 
	  (ListPrice >= 100 AND ListPrice <= 1000)
ORDER BY ListPrice DESC