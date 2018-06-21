--brisanje i izmjena indeksa

USE TestDB;

ALTER INDEX IX_BookPublisher ON dbo.Book
	DISABLE;
GO

ALTER INDEX IX_BookPublisher ON dbo.Book
	REBUILD WITH ONLINE = ON;
GO

DROP INDEX IX_BookPublisher ON dbo.Book;
GO