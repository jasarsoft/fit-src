--encrypt the data

USE CryptoDB
GO

INSERT INTO EncryptedCustomer
(
	CustomerID,
	FirstName,
	MiddleName,
	LastName,
	EmailAddress,
	Phone
)
SELECT
	P.BusinessEntityID,
	FirstName,
	MiddleName,
	LastName,
	EncryptByKey(KEY_GUID('CustomerSymKey'), EA.EmailAddress),
	ENCRYPTBYKEY(KEY_GUID('CustomerSymKey'), PP.PhoneNumber)
FROM AdventureWorks2014.Person.Person AS P
INNER JOIN AdventureWorks2014.Person.EmailAddress AS EA
ON P.BusinessEntityID = EA.BusinessEntityID
INNER JOIN AdventureWorks2014.Person.PersonPhone AS PP
ON P.BusinessEntityID = PP.BusinessEntityID
GO