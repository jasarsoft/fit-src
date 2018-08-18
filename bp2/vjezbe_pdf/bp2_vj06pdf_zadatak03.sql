/*
	Vjezbe 6 Zadatak 3 Northwind

	U tabelu Employees dodati 2 zaposlenika iz baze podataka AdventureWorks2014 (slucajnim 
	odabirom). Voditi racuna o kompatibilnosti podataka.
*/

USE NORTHWND

INSERT INTO Employees(LastName, FirstName, Title, BirthDate, HireDate, Address, PostalCode, HomePhone, Region, Country)
	SELECT TOP 2 P.LastName, P.FirstName, SUBSTRING(E.JobTitle, 1, 29), E.BirthDate, E.HireDate, A.AddressLine1, A.PostalCode, PP.PhoneNumber, CR.CountryRegionCode, SUBSTRING(CR.Name, 1, 15)
	FROM AdventureWorks2014.HumanResources.Employee AS E
		INNER JOIN AdventureWorks2014.Person.Person AS P
			ON E.BusinessEntityID = P.BusinessEntityID
		INNER JOIN AdventureWorks2014.Person.BusinessEntityAddress AS BEA
			ON P.BusinessEntityID = BEA.BusinessEntityID
		INNER JOIN AdventureWorks2014.Person.Address AS A
			ON BEA.AddressID = A.AddressID
		INNER JOIN AdventureWorks2014.Person.PersonPhone AS PP
			ON P.BusinessEntityID = PP.BusinessEntityID
		INNER JOIN AdventureWorks2014.Person.StateProvince AS SP
			ON A.StateProvinceID = SP.StateProvinceID
		INNER JOIN AdventureWorks2014.Person.CountryRegion AS CR
			ON SP.CountryRegionCode = CR.CountryRegionCode

SELECT COUNT(*)
FROM Employees