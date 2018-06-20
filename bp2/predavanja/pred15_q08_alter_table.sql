--dodavanje kolone

USE TestDB;

ALTER TABLE Kupci
ADD Email nvarchar(100) NOT NULL;
GO