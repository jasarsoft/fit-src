USE AdventureWorks2014
GO
SELECT LastName, FirstName
FROM Person.Person
WHERE Title IN ('Sr.', 'Mrs.', 'Sra.', 'Ms.', 'Ms', 'Mr.')
ORDER BY LastName