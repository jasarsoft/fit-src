--ogranicanja
--unique constraint

USE TestDB;
GO

CREATE TABLE Kupci
( KupacID int IDENTITY(1,1) CONSTRAINT PK_Kupac PRIMARY KEY,
  Prezime nvarchar(30) NOT NULL,
  Ime nvarchar(30) NOT NULL,
  Telefon nvarchar(30) NULL,
  Email nvarchar(100) NOT NULL CONSTRAINT UQ_Email UNIQUE,
  DatumRodjenja date NOT NULL,
  GodinaRodjanja AS DATEPART(YEAR, DatumRodjenja) PERSISTED
);