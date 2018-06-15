USE AdventureWorks2014
GO
SELECT Name, Weight,
	(SELECT AVG(Weight) FROM Production.Product) AS 'Prosjek',
	Weight - (SELECT AVG(Weight) FROM Production.Product) AS 'Razlika'
FROM Production.Product
WHERE Weight IS NOT NULL AND Weight > 800
ORDER BY Weight DESC