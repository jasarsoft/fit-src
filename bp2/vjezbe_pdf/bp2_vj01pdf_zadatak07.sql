/*
	Vjezbe 01 Zadatak 07 NORTHWIND

	Prikazati naziv proizvoda i cijenu gdje je stanje na zalihama manje od narucene kolicine.
	Takodjer, u rezultate upita ukljuciti razliku izmedju narucene kolicine i stanja zaliha.
*/

USE NORTHWND

SELECT P.ProductName, P.UnitPrice,
		P.UnitsOnOrder - P.UnitsInStock AS 'Razlika'
	   /*, P.UnitsInStock, P.UnitsOnOrder */
FROM Products AS P
WHERE P.UnitsInStock < P.UnitsOnOrder