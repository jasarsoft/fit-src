--view encrypted binary data

USE CryptoDB
GO

SELECT * FROM [dbo].[EncryptedCustomer]
GO

--view encrypted character data
OPEN SYMMETRIC KEY CustomerSymKey
DECRYPTION BY CERTIFICATE Cert4SymKey
WITH PASSWORD = 'pGFD4bb925DGvbd2439587y';
GO

SELECT
	CustomerID,
	FirstName,
	LastName,
	CAST(DECRYPTBYKEY(EmailAddress) AS nvarchar(100)) AS DecrpytedEmailAddress
FROM EncryptedCustomer;