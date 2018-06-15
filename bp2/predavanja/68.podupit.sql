USE AdventureWorks2014
GO
SELECT LastName, FirstName --vanjski upit
FROM Person.Person
WHERE Title IN
	(SELECT DISTINCT Title --unutarnji upit
	FROM Person.Person
	WHERE Title IS NOT NULL)
ORDER BY LastName