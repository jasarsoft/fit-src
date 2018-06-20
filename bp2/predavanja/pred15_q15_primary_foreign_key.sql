--veza primarnog i vanjskog kljuca
--primary-foreign key

USE TestDB;

CREATE TABLE Gradovi
( GradID int IDENTITY(1,1) CONSTRAINT PK_Grad PRIMARY KEY,
  Naziv nvarchar(30)
);

CREATE TABLE Kupci
( KupacID int IDENTITY(1,1) CONSTRAINT PK_Kupac PRIMARY KEY,
  Prezime nvarchar(30) NOT NULL,
  Ime nvarchar(30) NOT NULL,
  Telefon nvarchar(30) NULL,
  Email nvarchar(100) NOT NULL CONSTRAINT UQ_Email UNIQUE,
  DatumRodjenja date NOT NULL,
  GradID int NOT NULL CONSTRAINT FK_KupacGrad FOREIGN KEY REFERENCES Gradovi(GradID),
  GodinaRodjenja AS DATEPART(year, DatumRodjenja) PERSISTED
);
