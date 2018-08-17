/*
	Vjezbe 5 Zadatak 3 AdventureWorks2014

	Kreirati upit koji prikazuje kupce koji su u 7. mjesecu utrosili vise od 200.000 KM. U listu 
	ukljuciti ime i prezime kupca te ukupni utrosak. Izlaz sortirati prema utrosku opadajucim 
	redoslijedom. 
*/

USE AdventureWorks2014

--JOIN operator
SELECT P.FirstName + ' ' + P.LastName AS 'Ime prezime',
	CONVERT(varchar, ROUND(SUM(SOH.TotalDue), 2)) + ' KM' AS 'Utrosak'
FROM Person.Person AS P RIGHT JOIN Sales.Customer AS C
	ON P.BusinessEntityID = C.PersonID INNER JOIN Sales.SalesOrderHeader AS SOH
	ON C.CustomerID = SOH.CustomerID
WHERE MONTH(SOH.OrderDate) = 7
GROUP BY P.FirstName, P.LastName
HAVING SUM(SOH.TotalDue) > 200000
ORDER BY SUM(SOH.TotalDue) DESC

--subquery
SELECT (select P.FirstName + ' ' + P.LastName
		from Person.Person AS P
		where C.PersonID = P.BusinessEntityID) AS 'Ime prezime',
		CONVERT(varchar, ROUND((select SUM(SOH.TotalDue)
								from Sales.SalesOrderHeader AS SOH
								where C.CustomerID = SOH.CustomerID AND MONTH(SOH.OrderDate) = 7), 2)) + ' KM' AS 'Utrosak'
FROM Sales.Customer AS C
WHERE 200000 < (select SUM(SOH.TotalDue)
		   from Sales.SalesOrderHeader AS SOH
		   where C.CustomerID = SOH.CustomerID AND MONTH(SOH.OrderDate) = 7)
ORDER BY (select SUM(SOH.TotalDue)
		  from Sales.SalesOrderHeader AS SOH
		  where C.CustomerID = SOH.CustomerID AND MONTH(SOH.OrderDate) = 7) DESC