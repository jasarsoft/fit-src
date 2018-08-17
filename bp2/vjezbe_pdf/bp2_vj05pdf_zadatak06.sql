/*
	Vjezbe 5 Zadatak 6 AdventureWorks2014

	Kreirati upit koji prikazuje podatke o zaposlenicima. Lista treba da sadrzi sljedece kolone: ime 
	i prezime zaposlenika (spojeno), korisnicko ime, novu lozinku, starost i staz zaposlenika. Uslovi 
	su sljedeci: 
	- Za korisnicko ime potrebno je koristiti kolonu LoginID (tabela Employees). Npr. 
	LoginID zaposlenika sa imenom i prezimenom 'Mary Gibson' je adventure-works\mary0. 
	Korisnicko ime zaposlenika je sve sto se nalazi iza znaka \(backslash) sto je u 
	ovom primjeru mary0, 
	- Nova lozinka se formira koristeci hesovanu lozinku zaposlenika na sljedeci nacin: 
		* Hesovanu lozinku potrebno je okrenuti obrnuto (npr. dbms2015  -> 5102smbd) 
		* Nakon toga preskaèemo prvih 5 i uzimamo narednih 8 karaktera 
		* Sljedeci korak jeste da iz dobivenog stringa pocevsi od drugog karaktera 
		naredna dva zamijenimo sa X# (npr. ako je dobiveni string dbms2015 izlaz ce 
		biti dX#s2015)
		* Starost i staz se formiraju na osnovu kolona BirthDate i HireDate 
	Prikazati podatke samo za zaposlenike zenskog spola koji imaju vise od 50 godina i vise od 5 
	godina staza
*/

USE AdventureWorks2014

SELECT P.FirstName + ' ' + P.LastName AS 'Ime prezime',
	SUBSTRING(E.LoginID, 17, 10) AS 'Korisnicko ime',
	REPLACE(SUBSTRING(REVERSE(PASS.PasswordHash), 5, 8), SUBSTRING(SUBSTRING(REVERSE(PASS.PasswordHash), 5, 8), 2, 2), 'X#') AS 'Lozinka',
	DATEDIFF(year, E.BirthDate, GETDATE()) AS 'Starost godine',
	DATEDIFF(year, E.HireDate, GETDATE()) AS 'Staz godine'
FROM HumanResources.Employee AS E INNER JOIN Person.Person AS P
	ON E.BusinessEntityID = P.BusinessEntityID INNER JOIN Person.Password AS PASS
	ON P.BusinessEntityID = PASS.BusinessEntityID
WHERE DATEDIFF(year, E.BirthDate, GETDATE()) > 50 AND
	DATEDIFF(year, E.HireDate, GETDATE()) > 5 AND
	E.Gender = 'F'