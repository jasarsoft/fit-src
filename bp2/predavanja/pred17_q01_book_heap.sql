-- book heap

USE TestDB;

CREATE TABLE dbo.BookHeap
( ISBN nvarchar(20),
  PublisherID int NOT NULL,
  Title nvarchar(50) NOT NULL,
  ReleaseDate date NOT NULL
);