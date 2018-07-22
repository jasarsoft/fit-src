/*
	Zadatak 4

	Napisati upit koji prikazuje korisnicko ime uposlenika [sve iza znaka '\' u koloni LoginID]
	titula, datum zaposlenja, starost istaz zaposlenja.
	Uslov je da se prikazu 10 najstariji zaposlenika koji obavljaju bilo koju ulogu menadzera.
*/

USE AdventureWorks2014

SELECT TOP 10 SUBSTRING(LoginID, CHARINDEX('\', LoginID) + 1,50) AS 'Korisnicko ime',
	   JobTitle,
	   HireDate,
	   DATEDIFF(year, BirthDate, GETDATE()) AS 'Starost',
	   DATEDIFF(year, HireDate, GETDATE()) AS 'Staz'
FROM HumanResources.Employee
WHERE JobTitle LIKE '%Manager%'
ORDER BY Starost DESC