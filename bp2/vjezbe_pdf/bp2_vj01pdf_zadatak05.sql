/*
	Vjezbe 01 Zadatak 05 NORTHWIND

	Prikazati prozivode ciji naziv pocinje slovima 'C' ili 'G', drugo slovo moze biti bilo koje,
	a trece slovo u nazivu je 'A' ili 'O'
*/

USE NORTHWND

SELECT *
FROM Products AS P
WHERE P.ProductName LIKE '[CG]_[ao]%'