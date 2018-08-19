/*
	Vjezbe 7 Zadatak 8

	Izmijeniti rezultate testiranja svim kandidatima koji su polagali odabrani test (oznaka testa kao filter). 
	Svim kandidatima broj osvojenih bodova uvecati za 5. 
*/

USE Edin

UPDATE RezultatiTesta
SET OsvojeniBodovi = OsvojeniBodovi + 5
WHERE TestID = (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 1') AND
	  OsvojeniBodovi <= 95

SELECT *
FROM RezultatiTesta