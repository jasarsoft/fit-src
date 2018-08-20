/*
	Vjezbe 8 Zadatak 8

	Kreirati unique non-clustered indeks nad tabelom Komisija, polje Email. INSERT komandom testirati 
	funkcionalnost prethodno kreiranog indeksa. 
*/

USE Edin

INSERT INTO Komisija(Ime, Prezime, Email)
VALUES ('Test1', 'Test1', 'test1@gamil.com')

CREATE UNIQUE NONCLUSTERED INDEX UQNC_Email
ON Komisija(Email)

INSERT INTO Komisija(Ime, Prezime, Email)
VALUES ('Test2', 'Test2', 'test2@gamil.com')