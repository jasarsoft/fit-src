/*
	Vjezbe Predavanje 2, Zadatak 7

	Kreirati poruku dobrodoslice za kupce u sljedecem formatu
	Dobrodosli, Ime Prezime trenutno vrijeme je 09:45
	(AdventureWorksLT)
*/

USE AdventureWorksLT2014

SELECT 'Dobrodosli, ' + FirstName + ' ' + LastName + ' trenutno vrijeme je: ' + 
		RIGHT(CONVERT(nvarchar(20), GETDATE()), 7)
FROM SalesLT.Customer

--drugi nacin
USE AdventureWorksLT2014
 
SELECT 'Dobrodosli, ' + FirstName + ' ' + LastName + ' trenutno vrijeme je: ' + 
		CONVERT(nvarchar(2), DATEPART(HOUR ,GETDATE())) + ':' +
		CONVERT(nvarchar(2), DATEPART(MINUTE ,GETDATE()))
FROM SalesLT.Customer