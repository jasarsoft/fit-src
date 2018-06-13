USE TestDB
GO

SELECT * FROM Person.CountryRegion

INSERT INTO Person.CountryRegion
VALUES('BiH', 'Bosna i Hercegovina', GETDATE())

SELECT *
FROM Person.CountryRegion
WHERE CountryRegionCode = 'BiH'