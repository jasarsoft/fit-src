/*
	Vjezbe 01 Zadatak 03 NORTHWIND
	
	Prikazati stavke narudzbe gdje je kolicina narudzbe bila veca od 100 komada 
	uz odobreni pospust
*/

USE NORTHWND

SELECT *
FROM [Order Details] AS OD
WHERE OD.Quantity > 100 AND OD.Discount > 0.0