/*
	Vjezbe 8 Zadatak 7

	Kreirati kompozitni non-clustered indeks sa ukljucenim dodatnim kolonama nad tabelom Komisija i 
	upitima testirati primjenu indeksa, provjeravajuci aktualni plan izvrsenja. 
*/

USE Edin

DROP INDEX NC_ImeTitula ON Komisija
DROP INDEX NC_KomisijaPrezime ON Komisija


SELECT Ime, Prezime, Titula
FROM Komisija


CREATE NONCLUSTERED INDEX IN_ImePrezime_Titula
ON Komisija(Ime ASC, Prezime ASC)
INCLUDE (Titula)