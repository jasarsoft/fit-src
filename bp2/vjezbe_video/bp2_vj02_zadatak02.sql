/*
	Vjezbe Predavanje 2, Zadatak 2

	Prikazati dobavljace koji dolaze iz Njemacke ili Francuske a njihovo ime
	komapnije pocinje slovima A, E ili P. Upit napisati na dva nacina. 
	(Northwind - 3 zapisa)
*/

USE NORTHWND;

SELECT CompanyName, Country
FROM Suppliers
WHERE (Country = 'Germany' OR Country = 'France') AND
	  (CompanyName LIKE 'A%' OR CompanyName LIKE 'E%' OR CompanyName LIKE 'P%')

--drugi nacin
SELECT CompanyName, Country
FROM Suppliers
WHERE Country IN ('Germany', 'France') AND
	  CompanyName LIKE '[AEP]%'
	  