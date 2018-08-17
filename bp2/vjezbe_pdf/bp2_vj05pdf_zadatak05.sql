/*
	Vjezbe 5 Zadatak 5 AdventureWorks2014

	Kreirati upit koji prikazuje proizvode kojih na skladistu ima u kolicini manjoj od 30 komada. 
	Lista treba da sadrzi naziv proizvoda, naziv skladista (lokaciju), stanje na skladistu i ukupnu 
	prodanu kolicinu. U rezultate upita ukljuciti i one proizvode koji nikad nisu prodavani. Ukoliko je 
	ukupna prodana kolicina prikazana kao NULL vrijednost, izlaz formatirati brojem 0.
*/

USE AdventureWorks2014

--join
SELECT P.Name AS 'Naziv proizvoda',
	L.Name AS 'Naziv skladista',
	PI.Quantity AS 'Stanje na skladistu',
	ISNULL(SUM(SOD.OrderQty), 0) AS 'Prodana kolicina'
FROM Production.Product AS P LEFT JOIN Sales.SalesOrderDetail AS SOD
	ON P.ProductID = SOD.ProductID INNER JOIN Production.ProductInventory AS PI
	ON P.ProductID = PI.ProductID INNER JOIN Production.Location AS L
	ON PI.LocationID = L.LocationID
WHERE PI.Quantity < 30
GROUP BY P.Name, L.Name, PI.Quantity

--subquery
SELECT P.Name AS 'Naziv proizvoda',
	(select	L.Name
	 from Production.Location AS L
	 where L.LocationID = (select PI.LocationID
						   from Production.ProductInventory AS PI
						   where PI.LocationID = L.LocationID AND PI.ProductID = P.ProductID) ) AS 'Naziv skladista'
FROM Production.Product AS P
WHERE P.ProductID = (select PI.ProductID
					 from Production.ProductInventory AS PI
					 where P.ProductiD = PI.ProductID)