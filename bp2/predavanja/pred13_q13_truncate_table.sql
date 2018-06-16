USE TestDB
GO

SELECT Count(*)
FROM Production.TransactionHistoryArchive

TRUNCATE TABLE Production.TransactionHistoryArchive
