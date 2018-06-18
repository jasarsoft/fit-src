--pravljenje tabele

USE TestDB;

CREATE TABLE Kupci
( KupacID int IDENTITY(1,1),
  Prezime nvarchar(30) NOT NULL,
  Ime nvarchar(30) NOT NULL,
  Telefon nvarchar(30) NULL
);