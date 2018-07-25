/*
	Kreirati tabelu Fakulteti i povezati je sa tabelama Edukatori i EdukatoriPredmeti.
	Tabela ima sljedeca polja:
		- FakultetID (automatski generator vrijednosti i primarni kljuc)
		- Naziv (polje za unos 30 karaktera, obeavezan unos, jedinstvena vrijednost)

	Takodje u tabeli predmeti za polje ECTS promijeniti tip podataka u DECIMAL.
*/

CREATE TABLE Fakulteti
(
	FakultetID INT NOT NULL IDENTITY(1,1) PRIMARY KEY,
	Naziv NVARCHAR(30) NOT NULL UNIQUE NONCLUSTERED
)

ALTER TABLE Edukatori
ADD FakultetID INT NOT NULL FOREIGN KEY(FakultetID) REFERENCES Fakulteti(FakultetID)

ALTER TABLE EdukatoriPredmeti
ADD FakultetID INT NOT NULL FOREIGN KEY(FakultetID) REFERENCES Fakulteti(FakultetID)

ALTER TABLE Predmeti
ALTER COLUMN ECTS DECIMAL(18, 2)