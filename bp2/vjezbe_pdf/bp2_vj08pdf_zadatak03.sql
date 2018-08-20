/*
	Vjezbe 8 Zadatak 3

	U tabelu Komisija dodati primarni kljuc pod nazivom ClanKomisijeID, automatski generator vrijednosti, 
	a zatim testirati izvrsenje prethodno kreiranih upita, te provjeriti aktualni plan izvrsenja. U komentaru 
	zapisati razlike uoèene u planu izvrsenja upita!
*/

USE Edin

ALTER TABLE Komisija
	ADD ClanKomisijeID INT NOT NULL IDENTITY(1,1) CONSTRAINT PK_Komisija PRIMARY KEY

SELECT * FROM Komisija