--nonclustered index

USE TestDB;

CREATE NONCLUSTERED INDEX IX_BookPublisher
	ON dbo.Book (PublisherID, ReleaseDate DESC);
GO