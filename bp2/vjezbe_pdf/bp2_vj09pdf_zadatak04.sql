/*
	Vjezbe 9 Zadatak 4

	Modifikovati stored proceduru kreiranu u zadatku 1. U istoj proceduri omoguciti dodavanje 
	kandidata te mu pridruziti rezultate testiranja za dva postojeca testa (koristiti podupit za 
	preuzimanje neophodnih podataka o testovima). U proceduri koristiti dvije INSERT komande 
	(tabele: Kandidati, RezultatiTesta). Izvrsiti proceduru, tj. dodati novog kandidata sa rezultatima 
	testiranja.
*/

USE Edin

ALTER PROCEDURE PROC_KandidatUpis	@Ime NVARCHAR(30),
									@Prezime NVARCHAR(30),
									@JMBG NVARCHAR(13),
									@DatumRodjenja DATE,
									@Email NVARCHAR(50),
									@Test1Naziv NVARCHAR(50),
									@Test1Polozio TINYINT,
									@Test1OsvojeniBodovi DECIMAL,
									@Test2Naziv NVARCHAR(50),
									@Test2Polozio TINYINT,
									@Test2OsvojeniBodovi DECIMAL

AS
BEGIN
	INSERT INTO Kandidati(Ime, Prezime, JMBG, DatumRodjenja, Email)
	VALUES (@Ime, @Prezime, @JMBG, @DatumRodjenja, @Email)
	
	INSERT INTO RezultatiTesta(KandidatID, TestID, Polozio, OsvojeniBodovi)
	VALUES ((select K.KandidatID from Kandidati AS K where K.Ime = @Ime AND K.Prezime = @Prezime /*AND K.JMBG = @JMBG AND K.DatumRodjenja = @DatumRodjenja*/), 
			(select TestID from Testovi AS T where T.Naziv = @Test1Naziv), 
			@Test1Polozio, 
			@Test1OsvojeniBodovi),

			((select K.KandidatID from Kandidati AS K where K.Ime = @Ime AND K.Prezime = @Prezime /*AND K.JMBG = @JMBG AND K.DatumRodjenja = @DatumRodjenja*/), 
			(select TestID from Testovi AS T where T.Naziv = @Test2Naziv), 
			@Test2Polozio, 
			@Test2OsvojeniBodovi)	
END


EXEC PROC_KandidatUpis	@Ime = 'ImeTest3',
						@Prezime = 'PrezimeTest3',
						@JMBG = '0000000000000',
						@DatumRodjenja = '19890505',
						@Email = 'test3meil@test.com',
						@Test1Naziv = 'Programiranje 1',
						@Test1Polozio = 1,
						@Test1OsvojeniBodovi = 68,
						@Test2Naziv = 'Programiranje 2',
						@Test2Polozio = 0,
						@Test2OsvojeniBodovi = 48;