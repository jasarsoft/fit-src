/*
	Vjezbe 4 Zadatak 1 AdventureWorks2014

	Kreirati upit koji prikazuje ime i prezime, korisnicko ime (sve iza znaka „\“ u koloni LoginID), 
	duzinu  korisnickog  imena,  titulu,  datum  zaposlenja  (dd.MM.yyyy),  starost  i  staz  zaposlenika. 
	Uslov je da se prikaze 10 najstarijih zaposlenika koji obavljaju bilo koju ulogu menadzera. 
*/

USE AdventureWorks2014

SELECT TOP 10 P.FirstName + ' ' + P.LastName AS 'Ime i prezime',
	SUBSTRING(E.LoginID, 17, 10) AS 'Korisnicko ime',
	LEN(SUBSTRING(E.LoginID, 17, 10)) AS 'Duzina korisnickog imena',
	E.JobTitle AS 'Titula',
	CONVERT(varchar, E.HireDate, 104) AS 'Datum zaposlenja',
	DATEDIFF(year, E.BirthDate, GETDATE()) AS ' Starost godine',
	DATEDIFF(year, E.HireDate, GETDATE()) AS 'Staz godine'
FROM Person.Person AS P INNER JOIN HumanResources.Employee AS E
	ON P.BusinessEntityID = E.BusinessEntityID
WHERE LOWER(E.JobTitle) LIKE '%manager%'
ORDER BY 6 DESC