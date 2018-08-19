/*
	Vjezbe 7 Zadatak 3

	Kreirati referentnu tabelu Gradovi i vezati je sa tabelom Kandidati. Takoder, u tabelu Kandidati dodati 
	polja Adresa i PostanskiBroj.
*/

USE Edin

CREATE TABLE Gradovi
(
	GradID INT NOT NULL IDENTITY(1,1) CONSTRAINT PK_Gradovi PRIMARY KEY,
	Naziv NVARCHAR(30) NOT NULL
);

ALTER TABLE Kandidati
ADD GradID INT CONSTRAINT FK_Gradovi FOREIGN KEY(GradID) REFERENCES Gradovi(GradID),
	Adresa NVARCHAR(30),
	PostanskiBroj NVARCHAR(10);