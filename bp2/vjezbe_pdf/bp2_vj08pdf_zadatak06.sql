/*
	Vjezbe 8 Zadatak 6

	Kreirati kompozitni non-clustered indeks nad tabelom Komisija (npr. polja Ime i Prezime) i upitima 
	testirati primjenu indeksa, provjeravajuci aktualni plan izvrsenja. 
*/

USE Edin

SELECT Ime FROM Komisija

CREATE NONCLUSTERED INDEX NC_ImeTitula
ON Komisija(Ime ASC, Titula)

ALTER INDEX NC_ImeTitula
ON Komisija DISABLE

ALTER INDEX NC_ImeTitula
ON Komisija REBUILD