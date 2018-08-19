/*
	Vjezbe 7 Zadatak 6

	U tabelu RezultatiTesta unijeti minimalno 10 zapisa sa proizvoljnim podacima. 
*/

USE Edin

INSERT INTO RezultatiTesta(KandidatID, TestID, Polozio, OsvojeniBodovi)
VALUES	((select K.KandidatID from Kandidati AS K where K.Ime = 'Jon' AND K.Prezime = 'Yang'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 1'), 1, 90),
		((select K.KandidatID from Kandidati AS K where K.Ime = 'Jon' AND K.Prezime = 'Yang'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 2'), 1, 60),
		((select K.KandidatID from Kandidati AS K where K.Ime = 'Jon' AND K.Prezime = 'Yang'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 3'), 0, 20),
		
		((select K.KandidatID from Kandidati AS K where K.Ime = 'Eugene' AND K.Prezime = 'Huang'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 1'), 1, 80),
		((select K.KandidatID from Kandidati AS K where K.Ime = 'Eugene' AND K.Prezime = 'Huang'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 2'), 0, 45),
		((select K.KandidatID from Kandidati AS K where K.Ime = 'Eugene' AND K.Prezime = 'Huang'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 3'), 1, 60),

		((select K.KandidatID from Kandidati AS K where K.Ime = 'Ruben' AND K.Prezime = 'Torres'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 1'), 1, 80),
		((select K.KandidatID from Kandidati AS K where K.Ime = 'Ruben' AND K.Prezime = 'Torres'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 2'), 0, 45),
		((select K.KandidatID from Kandidati AS K where K.Ime = 'Ruben' AND K.Prezime = 'Torres'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 3'), 1, 60),

		((select K.KandidatID from Kandidati AS K where K.Ime = 'Christy' AND K.Prezime = 'Zhu'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 1'), 1, 80),
		((select K.KandidatID from Kandidati AS K where K.Ime = 'Christy' AND K.Prezime = 'Zhu'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 2'), 0, 45),
		((select K.KandidatID from Kandidati AS K where K.Ime = 'Christy' AND K.Prezime = 'Zhu'), 
		 (select T.TestID from Testovi AS T where T.Naziv = 'Programiranje 3'), 1, 60)


SELECT *
FROM RezultatiTesta