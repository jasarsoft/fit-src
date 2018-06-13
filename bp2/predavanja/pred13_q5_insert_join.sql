USE TestDB
GO

INSERT INTO Osobe
	SELECT AP.LastName, AP.FirstName, APP.PhoneNumber, AEA.EmailAddress
	FROM AdventureWorks2014.Person.Person AS AP
		INNER JOIN AdventureWorks2014.Person.PersonPhone AS APP
			ON AP.BusinessEntityID = APP.BusinessEntityID
		INNER JOIN AdventureWorks2014.Person.EmailAddress AS AEA
			ON APP.BusinessEntityID = AEA.BusinessEntityID


SELECT COUNT(*)
FROM Osobe