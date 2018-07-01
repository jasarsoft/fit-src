--create new table for encryption process

USE CryptoDB
GO

CREATE TABLE EncryptedCustomer
(
	CustomerID		int NOT NULL PRIMARY KEY,
	FirstName		nvarchar(200),
	MiddleName		nvarchar(200),
	LastName		nvarchar(200),
	EmailAddress	varbinary(200),
	Phone			varbinary(150)
);