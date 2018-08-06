/*
	Vjezbe 3 Zadatak 5 AdventureWorks2014

	Kreirati upit koji prikazuje 10 najprodavanijih proizvoda. Lista treba da sadrzi ID proizvoda i 
	ukupnu kolicinu prodaje. Provjeriti da li ima proizvoda sa istom kolicinom prodaje kao zapis pod 
	rednim brojem 10?
*/

USE AdventureWorks2014

SELECT TOP 10 WITH TIES POD.ProductID AS 'ID Proizvoda',
	SUM(POD.OrderQty) AS 'Ukupna kolicina prodaje'
FROM Purchasing.PurchaseOrderDetail AS POD
GROUP BY POD.ProductID
ORDER BY SUM(POD.OrderQty) DESC

--JOIN operator
SELECT TOP 10 WITH TIES POD.ProductID AS 'ID Proizvoda',
	SUM(POD.OrderQty) AS 'Ukupna kolicina prodaje'
FROM Purchasing.PurchaseOrderDetail AS POD INNER JOIN Production.Product P
	ON POD.ProductID = P.ProductID
GROUP BY POD.ProductID
ORDER BY SUM(POD.OrderQty) DESC