/*
	Vjezbe 4 Zadatak 5 AdventureWorks2014

	Kreirati upit koji prikazuje ukupno ostvarenu zaradu po zaposleniku, na podrucju Evrope, u 
	januaru mjesecu 2014. godine. Lista treba da sadrzi ime i prezime zaposlenika, datum 
	zaposlenja (dd.MM.yyyy), mail adresu, te ukupnu ostvarenu zaradu zaokruzenu na dvije 
	decimale. Izlaz sortirati po zaradi u opadajucem redoslijedu.
*/

USE AdventureWorks2014

SELECT P.FirstName + ' ' + P.LastName AS 'Zaposlenik',
	ST.[Group] AS 'Podrucje',
	CONVERT(varchar, E.HireDate, 104) AS 'Datum zaposlenja',
	EA.EmailAddress AS 'Meil adresa',
	ROUND(SP.SalesYTD, 2) AS 'Ukupna zarada'
FROM Person.Person AS P INNER JOIN HumanResources.Employee AS E
	ON P.BusinessEntityID = E.BusinessEntityID INNER JOIN Person.EmailAddress AS EA
	ON P.BusinessEntityID = EA.BusinessEntityID INNER JOIN Sales.SalesPerson AS SP
	ON E.BusinessEntityID = SP.BusinessEntityID INNER JOIN Sales.SalesTerritory AS ST
	ON SP.TerritoryID = ST.TerritoryID
WHERE ST.[Group] = 'Europe'
--GROUP BY P.FirstName, P.LastName, EA.EmailAddress, ST.[Group], E.HireDate, SP.SalesYTD
ORDER BY 5 DESC