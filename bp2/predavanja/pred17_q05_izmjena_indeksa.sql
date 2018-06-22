--izmjena indexa
USE TestDB;

ALTER INDEX IX_BookPublisher ON dbo.Book
	DISABLE;
GO

ALTER INDEX IX_BookPublisher ON dbo.Book
	REBUILD;
GO

DROP INDEX IX_BookPublisher ON dbo.Book
GO