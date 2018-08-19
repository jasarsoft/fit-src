/*
	Vjezbe 7 Zadatak 10

	Obrisati tabelu Gradovi i ukloniti polja Adresa i PostanskiBroj. 
*/

USE Edin

ALTER TABLE Kandidati
DROP CONSTRAINT FK_Gradovi

ALTER TABLE Kandidati
DROP COLUMN GradID, Adresa, PostanskiBroj

DROP TABLE Gradovi