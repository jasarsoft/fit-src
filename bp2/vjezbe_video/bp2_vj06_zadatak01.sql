/*
	Vjezbe 6, Zadatak 1

	Koristeci bazu podataka Northwind napisati upit koji prikazuje listu proizvoda
	ukljucujuci najvecu kolicinu narudzbe za svaki proizvod.
*/

USE NORTHWND

SELECT P.ProductName,
	(SELECT MAX(OD.Quantity)
	FROM [Order Details] AS OD
	WHERE OD.ProductID = P.ProductID)
FROM Products AS P
ORDER BY P.ProductName

-- koristeci JOIN
SELECT P.ProductName,
	MAX(OD.Quantity) AS 'Maksimalna kolicina prodaje'
FROM Products AS P JOIN [Order Details] AS OD
	ON P.ProductID = OD.ProductID
GROUP BY P.ProductName
ORDER BY P.ProductName