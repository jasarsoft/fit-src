/*
	Vjezbe 7 Zadatak 7

	Kreirati upit koji prikazuje rezultate testiranja za odabrani test (oznaka testa kao filter). Kao rezultat 
	upita prikazati sljedece kolone: ime i prezime, jmbg, telefon i email kandidata, zatim datum, naziv, oznaku, 
	oblast i maksimalan broj bodova na testu, te polje polozio, osvojene bodove i procentualni rezultat testa. 
*/

USE Edin

SELECT K.Ime + ' ' + K.Prezime AS 'Ime prezime kandidata',
	K.JMBG AS 'JMBG kandidata',
	K.Telefon AS 'Telefon kandidata',
	K.Email AS 'Email kanidata',
	CONVERT(varchar, T.Datum, 104) AS 'Datum testa',
	T.Naziv AS 'Naziv testa',
	T.Oznaka AS 'Oznaka testa',
	T.Oblast AS 'Oblast testa',
	T.MaxBrojBodova AS 'Makimalni broj bodava testa',
	RT.Polozio AS 'Polozen test',
	RT.OsvojeniBodovi AS 'Osvojeni bodovi testa',
	CONVERT(decimal(4, 2), (RT.OsvojeniBodovi / T.MaxBrojBodova) * 100) AS 'Procenutalni postotak bodova'
FROM RezultatiTesta AS RT INNER JOIN Kandidati AS K 
		ON K.KandidatID = RT.KandidatID INNER JOIN Testovi AS T
		ON T.TestID = RT.TestID
WHERE T.Naziv = 'Programiranje 1'