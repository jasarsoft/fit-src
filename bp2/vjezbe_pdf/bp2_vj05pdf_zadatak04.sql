/*
	Vjezbe 5 Zadatak 4 AdventureWorks2014

	Kreirati upit koji prikazuje zaposlenike koji su uradili vise od 200 narudzbi. U listu ukljuciti ime 
	i prezime zaposlenika te ukupan broj uradenih narudzbi. Izlaz sortirati prema broju narudzbi 
	opadajucim redoslijedom.
*/

USE AdventureWorks2014

--join
SELECT C.CustomerID AS 'ID zapolenika', 
	P.FirstName + ' ' + P.LastName AS 'Ime prezime',
	SUM(SOD.OrderQty) AS 'Broj narudbi'
FROM Sales.Customer AS C INNER JOIN Sales.SalesOrderHeader AS SOH
	ON C.CustomerID = SOH.CustomerID INNER JOIN Sales.SalesOrderDetail AS SOD
	ON SOH.SalesOrderID = SOD.SalesOrderID LEFT JOIN Person.Person AS P
	ON C.PersonID = P.BusinessEntityID
GROUP BY C.CustomerID, P.FirstName, P.LastName
HAVING SUM(SOD.OrderQty) > 200
ORDER BY SUM(SOD.OrderQty) DESC

--subquery
SELECT C.CustomerID AS 'ID zaposlenika',
	(select P.FirstName + ' ' + P.LastName 
	 from Person.Person AS P
	 where C.PersonID = P.BusinessEntityID AND C.CustomerID = (select SOH.CustomerID
															   from Sales.SalesOrderHeader AS SOH
															   where C.CustomerID = SOH.CustomerID AND SOH.SalesOrderID = (select SOD.SalesOrderID
																														 from Sales.SalesOrderDetail AS SOD
																														 where SOH.SalesOrderID = SOD.SalesOrderID AND C.CustomerID = SOH.CustomerID))) AS 'Ime prezime',
	(select SUM(SOD.OrderQty)
	 from Sales.SalesOrderDetail AS SOD
	 WHERE SOD.SalesOrderID = (select SOH.SalesOrderID
							   from Sales.SalesOrderHeader AS SOH
							   where SOD.SalesOrderID = SOH.SalesOrderID AND C.CustomerID = SOH.CustomerID)) AS 'Broj narudzbi'
FROM Sales.Customer AS C
WHERE 200 < (select sum(SOD.OrderQty)
			 from Sales.SalesOrderDetail AS SOD
			 where SOD.SalesOrderID = (select SOH.SalesOrderID
									   from Sales.SalesOrderHeader AS SOH
									   where SOH.SalesOrderID = SOD.SalesOrderID AND C.CustomerID = SOH.CustomerID))
ORDER BY (select sum(SOD.OrderQty)
			 from Sales.SalesOrderDetail AS SOD
			 where SOD.SalesOrderID = (select SOH.SalesOrderID
									   from Sales.SalesOrderHeader AS SOH
									   where SOH.SalesOrderID = SOD.SalesOrderID AND C.CustomerID = SOH.CustomerID)) DESC






SELECT (SELECT p.FirstName + ' ' + p.LastName FROM Person.Person as p
			WHERE p.BusinessEntityID = c.PersonID) as Name, 
				(SELECT SUM(sod.OrderQty) FROM Sales.SalesOrderDetail as sod
					INNER JOIN Sales.SalesOrderHeader as soh ON sod.SalesOrderID = soh.SalesOrderID
					WHERE soh.CustomerID = c.CustomerID) as [Total order quantity]	
									
FROM Sales.Customer as c
WHERE c.PersonID IS NOT NULL AND 200 < (SELECT SUM(sod.OrderQty) FROM Sales.SalesOrderDetail as sod
											WHERE sod.SalesOrderID = 
											(SELECT soh.SalesOrderID FROM Sales.SalesOrderHeader as soh
												WHERE soh.CustomerID = c.CustomerID AND soh.SalesOrderID =													sod.SalesOrderID))

ORDER BY (SELECT SUM(sod.OrderQty) FROM Sales.SalesOrderDetail as sod
					INNER JOIN Sales.SalesOrderHeader as soh ON sod.SalesOrderID = soh.SalesOrderID
					WHERE soh.CustomerID = c.CustomerID) DESC