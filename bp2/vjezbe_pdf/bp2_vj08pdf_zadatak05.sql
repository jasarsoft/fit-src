/*
	Vjezbe 8 Zadatak 5

	Kreirati jednostavan non-clustered indeks nad tabelom Komisija (npr. polje Prezime) i upitima testirati 
	primjenu indeksa, provjeravajuci aktualni plan izvrsenja.
*/

USE Edin

CREATE NONCLUSTERED INDEX NC_KomisijaPrezime
ON Komisija(Prezime)