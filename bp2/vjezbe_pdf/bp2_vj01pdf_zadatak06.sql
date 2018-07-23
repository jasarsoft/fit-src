/*
	Vjezbe 01 Zadatak 06 NORTHWIND

	Prikazati listu proizvoda ciji naziv pocinje slovima 'L' ili 'T', ili je 
	ID proizvoda = 46. Lista treba da sadrzi samo one proizvode cija se cijena
	po komadu krece izmedju 10 i 50.
	Upit napisati na dva nacina.
*/

USE NORTHWND

SELECT *
FROM Products AS P
WHERE (P.ProductName LIKE '[LT]%' OR P.ProductID = 46) AND
	  P.UnitPrice BETWEEN 10 AND 50
ORDER BY P.ProductName

--drugi nacin
SELECT *
FROM Products AS P
WHERE (P.ProductName LIKE '[LT]%' OR P.ProductID = 46) AND
	  (P.UnitPrice >= 10 AND P.UnitPrice <= 50)
ORDER BY P.ProductName