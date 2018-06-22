--index include column

USE TestDB;

CREATE NONCLUSTERED INDEX IX_BookPublisher
	ON dbo.Book (PublisherID, ReleaseDate DESC)
	INCLUDE (Title);
GO

--primjer za upit
SELECT PublisherID, Title, ReleaseDate
FROM dbo.Book
WHERE ReleaseDate > DATEADD(year, -1, SYSDATETIME())
ORDER BY PublisherID, ReleaseDate DESC;
GO