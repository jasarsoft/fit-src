/*
	Vjezbe 8 Zadatak 4

	Tabelu Komisija povezati sa tabelom Testovi many-to-many relacijom, te importovati testne podatke 
	kao clanove komisije za odredene testove.
*/

USE Edin

CREATE TABLE KomisijaTestovi
(
	KomisijaID INT NOT NULL CONSTRAINT FK_Komisija FOREIGN KEY REFERENCES Komisija(ClanKomisijeID),
	TestID INT NOT NULL CONSTRAINT FK_Testovi FOREIGN KEY REFERENCES Testovi(TestID)
	CONSTRAINT PK_KomisijaTestovi PRIMARY KEY(KomisijaID, TestID)
);

INSERT INTO KomisijaTestovi(KomisijaID, TestID)
VALUES	(1, 4),
		(2, 4),
		(3, 5),
		(4, 5)