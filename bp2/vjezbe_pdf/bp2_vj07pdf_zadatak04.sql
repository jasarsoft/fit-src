/*
	Vjezbe 7 Zadatak 4

	U tabelu Kandidati importovati 10 kupaca iz baze podataka AdventureWorks2014 i to sljedeæe kolone: 
	- FirstName (Person) -> Ime, 
	- LastName (Person) -> Prezime, 
	- Zadnjih 13 karaktera kolone rowguid iz tabele Customer (Crticu zamijeniti brojem 0) -> JMBG, 
	- ModifiedDate (Customer) -> DatumRodjenja, 
	- City (Address) -> MjestoRodjenja, 
	- PhoneNumber (PersonPhone) -> Telefon, 
	- EmailAddress (EmailAddress) -> Email. 
*/

USE Edin


INSERT INTO Kandidati(Ime, Prezime, JMBG, DatumRodjenja, MjestoRodjenja, Telefon, Email)
SELECT TOP 10 P.FirstName, 
			  P.LastName,
			  REPLACE(RIGHT(C.rowguid, 13), '-', '0'), 
			  C.ModifiedDate, 
			  A.City, 
			  PN.PhoneNumber, 
			  EA.EmailAddress
FROM AdventureWorks2014.Person.Person AS P 
	INNER JOIN AdventureWorks2014.Sales.Customer AS C
		ON P.BusinessEntityID = C.PersonID 
	INNER JOIN AdventureWorks2014.Person.BusinessEntityAddress AS BEA
		ON P.BusinessEntityID = BEA.BusinessEntityID 
	INNER JOIN AdventureWorks2014.Person.Address AS A
		ON BEA.AddressID = A.AddressID 
	INNER JOIN AdventureWorks2014.Person.PersonPhone AS PN
		ON P.BusinessEntityID = PN.BusinessEntityID 
		INNER JOIN AdventureWorks2014.Person.EmailAddress AS EA
	ON P.BusinessEntityID = EA.BusinessEntityID

SELECT *
FROM Kandidati