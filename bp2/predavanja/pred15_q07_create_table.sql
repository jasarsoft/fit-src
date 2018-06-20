--kreiranje tabele

USE TestDB

CREATE TABLE Kupci --tabela je na gomili (heap)
( KupacID int IDENTITY(1,1), 
  Prezime nvarchar(30) NOT NULL,
  Ime nvarchar(30) NOT NULL,
  Telefon nvarchar(30) NULL
);