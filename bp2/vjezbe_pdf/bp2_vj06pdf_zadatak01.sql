/*
	Vjezbe 6 Zadatak 1 Northwind

	U tabelu Customers dodati jednog kupca (testni podaci). Takoðer, u istu tabelu dodati 5  kupaca iz 
	baze podataka AdventureWorks2014 (sluèajnim odabirom). Voditi raèuna o kompatibilnosti podataka. 
*/

USE NORTHWND

--ubacivanje testnog podatka
INSERT INTO Customers(CustomerID, CompanyName, ContactName, ContactTitle, Address, City, Region, PostalCode, Country, Phone, Fax)
	VALUES('TEST', 'Test Inc.', 'TestName TestSubname', 'TestOwner', 'Neka adresa bb', 'Mostar', NULL, 0000, 'BiH', '061-111-222', NULL)

--provjera unosa podataka
SELECT *
FROM Customers
WHERE CustomerID = 'TEST'

--ubacivanje slucanji 5 kupaca iz druge baze
INSERT INTO Customers(CustomerID, CompanyName, ContactName, Address, City, PostalCode, Phone)
	select TOP 5 UPPER(SUBSTRING(P.FirstName, 1, 2) + SUBSTRING(P.LastName, 1, 2)) AS CustomerID,
		P.FirstName + P.LastName + ' Inc.' AS CompanyName,
		P.FirstName + ' ' + P.LastName AS ContactName,
		A.AddressLine1 AS Address,
		A.City AS City,
		A.PostalCode AS PostalCode,
		PP.PhoneNumber AS Phone
	from AdventureWorks2014.Sales.Customer AS C INNER JOIN AdventureWorks2014.Person.Person AS P
		ON C.PersonID = P.BusinessEntityID INNER JOIN AdventureWorks2014.Person.PersonPhone AS PP
		ON P.BusinessEntityID = PP.BusinessEntityID INNER JOIN AdventureWorks2014.Person.BusinessEntityAddress AS BEA
		ON P.BusinessEntityID = BEA.BusinessEntityID INNER JOIN AdventureWorks2014.Person.Address AS A
		ON BEA.AddressID = A.AddressID

SELECT COUNT(*)
FROM Customers