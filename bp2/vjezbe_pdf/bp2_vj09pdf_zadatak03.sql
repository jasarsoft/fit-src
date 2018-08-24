/*
	Vjezbe 9 Zadatak 3

	Kreirati stored proceduru za brisanje zapisa iz tabele Kandidati. Izvrsiti proceduru, tj. obrisati 
	prethodno dodanog kandidata.
*/

USE Edin

CREATE PROCEDURE prKandidatBrisanje @Ime NVARCHAR(30),
									@Prezime NVARCHAR(30)
AS
BEGIN
	DELETE FROM Kandidati
	WHERE @Ime = Ime AND @Prezime = Prezime
END

EXEC prKandidatBrisanje @Ime = 'TestProc1¸', 
						@Prezime = 'TestProc1'