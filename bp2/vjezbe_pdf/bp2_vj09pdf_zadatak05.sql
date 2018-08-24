/*
	Vjezbe 9 Zadatak 5

	Kreirati view (pogled) nad podacima koji ce sadrzavati sljedeca polja: ime i prezime, jmbg, 
	telefon i email kandidata, zatim datum, naziv, oznaku, oblast i max. broj bodova na testu, te 
	polje polozio, osvojene bodove i procentualni rezultat testa.
*/

USE Edin

CREATE VIEW vKandidatTest
AS
SELECT	K.Ime + ' ' + K.Prezime AS 'Ime prezime',
		K.JMBG AS 'JMBG kandidata',
		K.Telefon AS 'Telefon kandidata',
		K.Email AS 'Email kandidata',
		T.Datum AS 'Datum testa',
		T.Naziv AS 'Naziv testa',
		T.Oznaka AS 'Oznaka testa',
		T.Oblast AS 'Oblast testa',
		T.MaxBrojBodova AS 'MaxBroj Bodova testa',
		RT.Polozio AS 'Polozio rezultat',
		RT.OsvojeniBodovi AS 'Osvojeni bodovi',
		CONVERT(NVARCHAR, CONVERT(decimal(5, 2), (RT.OsvojeniBodovi/T.MaxBrojBodova)*100)) + '%' AS 'Postotak bodova'
FROM Kandidati AS K
	INNER JOIN RezultatiTesta AS RT
		ON K.KandidatID = RT.KandidatID
	INNER JOIN Testovi AS T
		ON T.TestID = RT.TestID

SELECT * FROM vKandidatTest