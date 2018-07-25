/*
	U bazi podataka kreirati sljedece tabele i osigurnati referencijalni integritet

	Edukatori
		- EdukatorID (automatski generator vrijednosti i primarni kljuc),
		- Ime (polje za unos 35 karaktera, obeavezan unos),
		- Prezime (polje za unos 35 karaktera, obavezan unos),
		- Titula (polje za unos 10 karaktera, nije obavezno),
		- Status (polje u koje ce se pohraniti status edukatora - aktivan/nije aktivan, default je 1),
		- Slika (polje za pohranu slike)

	Predmeti (Naziv, Oznaka, ECTS (int))
		- PredmetID (automatski generator vrijednosti i primarni kljuc),
		- Naziv (polje za unos 30 karaktera, obavezan unos),
		- Oznaka (polje za unos 5 karaktera, obavezan unos),
		- ECTS (polje za unos cijelog broja, obavezan unos)

	EdukatoriPredmeti (Edukator, Predmet, Zvanje, BrojSati, Syllabus)
		- EdukatorID (soljni kljuc prema tabeli Edukatori),
		- PredmetID (spoljni kljuc prema tabeli Predmeti),
		- Prethodna dva kljuca cine kompozitni primarni kljuc tabele
		- BrojSati (polje za unos cijelog broja, obavezan unos)
*/

USE StudentskaSluzba

CREATE TABLE Edukatori
(
	EdukatorID INT NOT NULL IDENTITY(1,1) PRIMARY KEY,
	Ime NVARCHAR(35) NOT NULL,
	Prezime NVARCHAR(35) NOT NULL,
	Titula NVARCHAR(10) NULL,
	Status BIT DEFAULT 1,
	Slika VARBINARY(MAX)
)

CREATE TABLE Predmeti
(
	PredmetID INT NOT NULL IDENTITY(1,1) PRIMARY KEY,
	Naziv NVARCHAR(30) NOT NULL,
	Oznaka NVARCHAR(5) NOT NULL,
	ECTS INT NOT NULL
)

CREATE TABLE EdukatoriPredmeti
(
	EdukatorID INT NOT NULL FOREIGN KEY(EdukatorID) REFERENCES Edukatori(EdukatorID),
	PredmetID INT NOT NULL FOREIGN KEY(PredmetID) REFERENCES Predmeti(PredmetID),
	PRIMARY KEY (EdukatorID, PredmetID),
	BrojSati INT NOT NULL
)