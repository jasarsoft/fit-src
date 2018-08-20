/*
	Vjezbe 8 Zadatak 2

	U prethodno kreiranu tabelu, primjenom podupita, importovati 10000 osoba iz baze podataka 
	AdventureWorks2014, a zatim testirati rad upita (testni upiti) provjeravajuci aktualni plan izvrsenja. 
*/

USE Edin

INSERT INTO Komisija(Ime, Prezime, Titula, Telefon, Email)
SELECT TOP 10000 P.FirstName, P.LastName, P.Title, PP.PhoneNumber, EA.EmailAddress
FROM AdventureWorks2014.Person.Person AS P 
	INNER JOIN AdventureWorks2014.Person.PersonPhone AS PP
		ON P.BusinessEntityID = PP.BusinessEntityID
	INNER JOIN AdventureWorks2014.Person.EmailAddress AS EA
		ON P.BusinessEntityID = EA.BusinessEntityID

SELECT * FROM Komisija