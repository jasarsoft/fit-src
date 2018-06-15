USE AdventureWorks2014
GO
SELECT LastName, FirstName
FROM Person.Person
WHERE Title = (SELECT DISTINCT Title
			   FROM Person.Person
			   WHERE Title = 'Ms.')
ORDER BY LastName