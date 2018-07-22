/*
	Vjezbe Predavanje 2, Zadatak 6

	Prikazati broj proizvoda po kategoriji. Listu sortirati opadajucim redosljedom po
	broju proizvoda. Prikazati samo 10 kategorija. Takodjer, provjeriti da li ima
	kategorija koji imaju isti broj proizvoda kao ona na 10 mjestu.
	(AdventureWorksLT)
*/

USE AdventureWorksLT2014

SELECT TOP 10 WITH TIES ProductCategoryID, 
			  COUNT(ProductID) AS 'Broj proizvoda'
FROM [SalesLT].[Product]
GROUP BY ProductCategoryID
ORDER BY 2 DESC