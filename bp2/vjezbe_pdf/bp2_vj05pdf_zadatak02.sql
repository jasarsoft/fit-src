/*
	Vjezbe 5 Zadatak 2 AdventureWorks2014

	Kreirati upit koji prikazuje kupce koji su u maju mjesecu 2014. godine narucili proizvod „Front 
	Brakes“ u kolicini veæoj od 5 komada. 
*/

USE AdventureWorks2014

--join
SELECT C.CustomerID AS 'ID Kupca',
	ISNULL(P.FirstName + ' ' + P.LastName, 'N/A') AS 'Ime prezime',
	CONVERT(varchar, SOH.OrderDate, 104) AS 'Datum narudzbe',
	CONVERT(varchar, SOD.OrderQty) + ' kom' AS 'Kolicina'
FROM Person.Person AS P RIGHT JOIN Sales.Customer AS C
	ON P.BusinessEntityID = C.CustomerID LEFT JOIN Sales.SalesOrderHeader AS SOH
	ON C.CustomerID = SOH.CustomerID LEFT JOIN Sales.SalesOrderDetail AS SOD
	ON SOH.SalesOrderID = SOD.SalesOrderID RIGHT JOIN Production.Product AS PR
	ON SOD.ProductID = PR.ProductID
WHERE YEAR(SOH.OrderDate) = 2014 AND 
	MONTH(SOH.OrderDate) = 5 AND
	SOD.OrderQty > 5 AND
	PR.Name = 'Front Brakes'
ORDER BY SOD.OrderQty DESC

--subquery
SELECT (select C.CustomerID 
		from Sales.Customer AS C 
		where SOH.CustomerID = C.CustomerID) AS 'ID Kupca',
	   (select P.FirstName + ' ' + P.LastName
		from Person.Person AS P
		where P.BusinessEntityID = (select C.PersonID
									from Sales.Customer AS C
									where P.BusinessEntityID = C.PersonID) AND
			  SOH.CustomerID = (select C.CustomerID
								from Sales.Customer AS C
								where P.BusinessEntityID = C.PersonID)) AS 'Ime prezime',
		CONVERT(varchar, SOH.OrderDate, 104) AS 'Datum narudzbe',
		CONVERT(varchar, (select SOD.OrderQty 
						  from Sales.SalesOrderDetail AS SOD
						  where SOH.SalesOrderID = SOD.SalesOrderID AND
								SOD.ProductID = (select PR.ProductID
												 from Production.Product AS PR
												 WHERE SOD.ProductID = PR.ProductID AND
													   PR.Name = 'Front Brakes' AND
													   SOH.SalesOrderID = SOD.SalesOrderID))) + ' kom' AS 'Kolicina'
FROM Sales.SalesOrderHeader AS SOH
WHERE SOH.CustomerID = (select C.CustomerID
						from Sales.Customer AS C
						where SOH.CustomerID = C.CustomerID) AND
	  YEAR(SOH.OrderDate) = 2014 AND
	  MONTH(SOH.OrderDate) = 5 AND
	  5 < (select SOD.OrderQty
		   from Sales.SalesOrderDetail AS SOD
		   where SOH.SalesOrderID = SOD.SalesOrderID AND
			     SOD.ProductID = (select PR.ProductID
								  from Production.Product AS PR
								  WHERE SOD.ProductID = PR.ProductID AND
										PR.Name = 'Front Brakes' AND
										SOH.SalesOrderID = SOD.SalesOrderID))

	

--test name
SELECT C.CustomerID, P.FirstName, P.LastName
FROM Sales.Customer AS C LEFT JOIN Person.Person AS P
	ON C.PersonID = P.BusinessEntityID
WHERE C.CustomerID = 29550