-- book cluster index

USE TestDB;

CREATE TABLE dbo.Book
( ISBN nvarchar(20) PRIMARY KEY,
  PublisherID int NOT NULL,
  Title nvarchar(50) NOT NULL,
  ReleaseDate date NOT NULL
);