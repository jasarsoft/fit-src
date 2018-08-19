/*
	Vjezbe 7 Zadatak 9

	Obrisati jedan test i sve ostvarene rezultate na odabranom testu (oznaka testa kao filter).
*/

USE Edin

DELETE RT
FROM RezultatiTesta RT
WHERE RT.TestID = (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 3')

DELETE T
FROM Testovi T
WHERE T.Naziv = 'Programiranje 3'