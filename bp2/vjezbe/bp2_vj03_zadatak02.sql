/*
	Vjezbe 3, Zadatak 2, AdvenureWorks2014

	Prikazati ukupan broj proizvoda po modelu. Lista treba da sadrzi ID modela proizvoda
	i ukupan broj proizvoda. Uslov je da proizvod pripada nekom modelu i da je ukupan
	broj proizvoda po modelu veci od 1. Takode, prebrojati samo proizvode ciji naziv
	pocinje slovom 'S'
*/

USE AdventureWorks2014

SELECT ProductModelID,
	   COUNT(ProductID) AS 'Ukupan broj prozivoda'
FROM Production.Product
WHERE Name LIKE 'S%'
GROUP BY ProductModelID
HAVING COUNT(ProductID) > 1 AND ProductModelID IS NOT NULL