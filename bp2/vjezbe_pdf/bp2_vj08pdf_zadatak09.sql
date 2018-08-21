/*
	Vjezbe 8 Zadatak 9

	Nad bazom podataka kreirati minimalno 5 kompleksnijih upita primjenom razlicitih elemenata SELECT 
	komande. Za svaki upit provjeriti plan izvrsenja i zapisati komentare. Takoder, primjenom alata SQL Server 
	Profiler kreirati novi trace, izvrsiti sve kreirane upite te rezultat dobiven alatom pohraniti na file system. 
*/

USE Edin

SELECT	K.Ime AS 'Ime', 
		K.Prezime AS 'Prezime',
		K.Telefon AS ' Telefon',
		K.Email AS 'Email',
		T.Naziv AS 'Nazi testa',
		T.Datum AS 'Datum testa',
		RT.Polozio AS 'Polozio'
FROM Kandidati AS K 
	INNER JOIN RezultatiTesta AS RT
		ON K.KandidatID = RT.KandidatID
	INNER JOIN Testovi AS T
		ON T.TestID = RT.TestID


SELECT	K.Ime AS 'Ime', 
		K.Prezime AS 'Prezime',
		K.Telefon AS ' Telefon',
		K.Email AS 'Email',
		T.Naziv AS 'Nazi testa',
		T.Datum AS 'Datum testa'
FROM Komisija AS K 
	INNER JOIN KomisijaTestovi AS KT
		ON K.ClanKomisijeID = KT.KomisijaID
	INNER JOIN Testovi AS T
		ON T.TestID = KT.TestID