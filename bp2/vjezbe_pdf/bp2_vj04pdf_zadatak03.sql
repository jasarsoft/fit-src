/*
	Vjezbe 4 Zadatak 3 AdventureWorks2014

	Kreirati upit koji prikazuje naziv modela i opis modela proizvoda. Uslov je da naziv modela 
	sadrzi rijec „Mountain“, dok je opis potrebno prikazati samo na engleskom jeziku.
*/

USE AdventureWorks2014

SELECT PM.Name AS 'Nazi modela',
	PD.Description AS 'Opis modela'
FROM Production.ProductModel AS PM INNER JOIN Production.ProductModelProductDescriptionCulture AS PMPDC
	ON PM.ProductModelID = PMPDC.ProductModelID INNER JOIN Production.ProductDescription AS PD
	ON PMPDC.ProductDescriptionID = PD.ProductDescriptionID
WHERE LOWER(PM.Name) LIKE '%mountain%' AND PMPDC.CultureID = 'en'
GROUP BY PM.Name, PD.Description
