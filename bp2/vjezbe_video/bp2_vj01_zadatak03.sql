/*
	Zadatak 3

	Napisati upit koji prikazuje titulu te spojeno ime i prezime osoba koje nemaju
	uneseno srednje ime. Ukoliko titula nije unesena
*/

USE AdventureWorks2014

SELECT FirstName + ' ' + LastName AS 'Ime i prezime',
	   ISNULL(Title, 'N/A') AS 'Titula'
FROM Person.Person
WHERE MiddleName IS NULL