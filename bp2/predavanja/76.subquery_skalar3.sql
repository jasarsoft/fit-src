USE AdventureWorks2014
GO
SELECT LastName
FROM Person.Person
WHERE Title = (SELECT Title
				  FROM Person.Person
				  WHERE LastName = 'Abbas')
ORDER BY LastName