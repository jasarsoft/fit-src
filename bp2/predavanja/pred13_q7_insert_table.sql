USE TestDB
GO

SELECT Title + ', ' + FirstName + ' ' + LastName AS Customer
INTO OsobeTitule
FROM AdventureWorks2014.Person.Person
WHERE Title IS NOT NULL
GO