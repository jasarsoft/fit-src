/*
	Vjezbe 4 Zadatak 4 AdventureWorks2014

	Kreirati upit koji prikazuje broj, naziv i cijenu proizvoda, te stanje zaliha po lokacijama. Uzeti u 
	obzir samo proizvode koji pripadaju kategoriji „Bikes“. Izlaz sortirati po stanju zaliha u 
	opadajucem redoslijedu.
*/

USE AdventureWorks2014

SELECT P.ProductNumber AS 'Broj proizvoda',
	P.Name AS 'Naziv proizvoda',
	P.ListPrice AS 'Cijena proizvoda',
	L.Name AS 'Naziv lokacije',
	SUM(PI.Quantity) AS 'Stanje zaliha'
FROM Production.Product AS P INNER JOIN Production.ProductSubcategory AS PS
	ON P.ProductSubcategoryID = PS.ProductSubcategoryID INNER JOIN Production.ProductCategory AS PC
	ON PS.ProductCategoryID = PC.ProductCategoryID INNER JOIN Production.ProductInventory AS PI
	ON P.ProductID = PI.ProductID INNER JOIN Production.Location AS L
	ON PI.LocationID = L.LocationID
WHERE LOWER(PC.Name) LIKE '%bikes%'
GROUP BY P.ProductNumber, P.Name, P.ListPrice, L.Name
ORDER BY SUM(PI.Quantity) DESC