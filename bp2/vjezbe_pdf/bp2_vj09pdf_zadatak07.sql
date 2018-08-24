/*
	Vjezbe 9 Zadatak 7

	Kreirati trigger koji ce sprijeciti brisanje rezultata testiranja. Ukoliko se pokusa obrisati zapis u 
	tabeli RezultatiTesta ispisati odgovarajucu poruku. 
*/

USE Edin

CREATE TRIGGER trRezultatiDelete
ON RezultatiTesta
FOR DELETE AS
	PRINT 'Nije dozvoljeno brisanje'
	ROLLBACK


DELETE FROM RezultatiTesta WHERE KandidatID = 1013