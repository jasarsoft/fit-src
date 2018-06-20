--kreiranje tabele

USE TestDB;

CREATE TABLE Kupci
( KupacID int IDENTITY(1,1) PRIMARY KEY,
  Prezime nvarchar(30) NOT NULL,
  Ime nvarchar(30) NOT NULL,
  Telefon nvarchar(30) NULL,
  DatumRodjenja date NOT NULL,
  GodinaRodjenja AS DATEPART(year, DatumRodjenja) PERSISTED
);