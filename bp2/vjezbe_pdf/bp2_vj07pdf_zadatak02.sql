/*
	Vjezbe 7 Zadatak 1

	 U bazi podataka kreirati sljedece tabele: 
	- Kandidati 
		Ime, polje za unos 30 karaktera (obavezan unos), 
		Prezime, polje za unos 30 karaktera (obavezan unos), 
		JMBG, polje za unos 13 karaktera (obavezan unos i jedinstvena vrijednost), 
		DatumRodjenja, polje za unos datuma (obavezan unos), 
		MjestoRodjenja, polje za unos 30 karaktera, 
		Telefon, polje za unos 20 karaktera, 
		Email, polje za unos 50 karaktera (jedinstvena vrijednost). 
	- Testovi 
		Datum, polje za unos datuma i vremena (obavezan unos), 
		Naziv, polje za unos 50 karaktera (obavezan unos), 
		Oznaka, polje za unos 10 karaktera (obavezan unos i jedinstvena vrijednost), 
		Oblast, polje za unos 50 karaktera (obavezan unos), 
		MaxBrojBodova, polje za unos cijelog broja (obavezan unos), 
		Opis, polje za unos 250 karaktera. 
	- RezultatiTesta 
		Polozio, polje za unos ishoda testiranja – DA/NE (obavezan unos) 
		OsvojeniBodovi, polje za unos decimalnog broja (obavezan unos), 
		Napomena, polje za unos duzeg niza karaktera. 

	Napomena: Kandidat moze da polaze vise testova i za svaki test ostvari odredene rezultate, pri cemu 
	kandidat ne moze dva puta polagati isti test. Takoder, isti test moze polagati vise kandidata.  
*/

USE Edin

CREATE TABLE Kandidati
(
	KandidatID INT NOT NULL IDENTITY(1,1) CONSTRAINT PK_Kandidati PRIMARY KEY,
	Ime NVARCHAR(30) NOT NULL,
	Prezime NVARCHAR(30) NOT NULL,
	JMBG NVARCHAR(13) NOT NULL CONSTRAINT UQ_JMBG UNIQUE,
	DatumRodjenja DATE NOT NULL,
	MjestoRodjenja NVARCHAR(30),
	Telefon NVARCHAR(20),
	Email NVARCHAR(50) CONSTRAINT UQ_Email UNIQUE
);

CREATE TABLE Testovi
(
	TestID INT NOT NULL IDENTITY(1,1) CONSTRAINT PK_Testovi PRIMARY KEY,
	Datum DATETIME NOT NULL,
	Naziv NVARCHAR(50) NOT NULL,
	Oznaka NVARCHAR(10) NOT NULL CONSTRAINT UQ_Oznaka UNIQUE,
	Oblast NVARCHAR(50) NOT NULL,
	MaxBrojBodova SMALLINT NOT NULL,
	Opis NVARCHAR(250)
);

CREATE TABLE RezultatiTesta
(
	KandidatID INT NOT NULL CONSTRAINT FK_KandidatRezultati FOREIGN KEY(KandidatID) REFERENCES Kandidati(KandidatID),
	TestID INT NOT NULL CONSTRAINT FK_TestRezultati FOREIGN KEY(TestID) REFERENCES Testovi(TestID),
	CONSTRAINT PK_RezultatiTesta PRIMARY KEY(KandidatID, TestID),
	Polozio TINYINT NOT NULL,
	OsvojeniBodovi DECIMAL NOT NULL,
	Napomena NTEXT
);