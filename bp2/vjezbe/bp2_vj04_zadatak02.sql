/*
	Vjezbe 4, Zadatak 2
	
	Iz baze podataka Norhtwind prikazati listu proizvoda koji nema na zalihama. Takodje, izlaz
	treba sad sadrzi naziv dobavljaca, broj telefona dobavljaca, broj proizvoda na zalihama
	te koliko je komada prodano.
*/

USE NORTHWND

SELECT S.CompanyName AS 'Dobavljac',
	S.Phone AS 'Telefon',
	P.ProductName AS 'Proizvod',
	P.UnitsInStock AS 'Zalihe',
	SUM(OD.Quantity) AS 'Prodano'
FROM Suppliers AS S INNER JOIN Products AS P
	ON S.SupplierID = P.SupplierID
	INNER JOIN [Order Details] AS OD
	ON P.ProductID = OD.ProductID
WHERE P.UnitsInStock = 0
GROUP BY S.CompanyName, S.Phone, P.ProductName, P.UnitsInStock