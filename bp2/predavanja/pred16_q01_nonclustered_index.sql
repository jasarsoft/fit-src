-- nonclustered indeks

USE TestDB;

CREATE TABLE dbo.Book
( ISBN nvarchar(20) PRIMARY KEY,
  PublisherID int NOT NULL,
  Title nvarchar(50) NOT NULL,
  ReleaseDate date NOT NULL
);
GO

CREATE NONCLUSTERED INDEX IX_BookPublisher
	ON dbo.Book (PublisherID, ReleaseDate DESC);
GO