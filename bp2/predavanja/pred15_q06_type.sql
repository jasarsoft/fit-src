--tip

USE TestDB;

CREATE TYPE BrojProizvoda
FROM nvarchar(20) NOT NULL;
GO

CREATE TABLE Proizvod
(	ProizvodID int IDENTITY(1,1),
	Naziv BrojProizvoda
);