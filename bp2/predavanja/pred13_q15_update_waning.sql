USE TestDB
GO

--waning
UPDATE Person.Person
SET FirstName = 'New Ken'

SELECT FirstName
FROM Person.Person