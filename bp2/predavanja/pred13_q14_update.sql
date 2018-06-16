USE TestDB
GO

SELECT * FROM Person.Person
WHERE BusinessEntityID = 1

UPDATE Person.Person
SET FirstName = 'New Ken', LastName = 'New Sanchez'
WHERE BusinessEntityID = 1