/*
	Vjezbe 3 Zadatak 4 AdventureWorks2014

	Prikazati ukupan broj proizvoda po modelu. Lista treba da sadrzi ID modela proizvoda i 
	ukupan broj proizvoda. Uslov je da proizvod pripada nekom modelu i da je ukupan broj 
	proizvoda po modelu veci od 1. Takodjer, prebrojati samo proizvode ciji naziv pocinje slovom 'S'. 
*/

USE AdventureWorks2014

SELECT P.ProductModelID AS 'Model proizvoda',
	COUNT(P.ProductID) AS 'Ukupan broj proizvoda'
FROM Production.Product AS P
WHERE P.ProductModelID IS NOT NULL AND P.Name LIKE '[S]%'
GROUP BY P.ProductModelID
HAVING COUNT(P.ProductID) > 1


--JOIN operator
SELECT P.ProductModelID AS 'Model proizvoda',
	COUNT(P.ProductID) AS 'Ukupan broj proizvoda'
FROM Production.Product AS P INNER JOIN Production.ProductModel AS PM
	ON P.ProductModelID = PM.ProductModelID
WHERE P.ProductModelID IS NOT NULL AND P.Name LIKE '[S]%'
GROUP BY P.ProductModelID
HAVING COUNT(P.ProductID) > 1