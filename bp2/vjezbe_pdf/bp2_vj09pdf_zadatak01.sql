/*
	Vjezbe 9 Zadatak 1

	Kreirati stored proceduru za upis podataka u tabelu Kandidati. Izvrsiti proceduru, tj. dodati 
	novog kandidata sa testnim podacima.
*/

USE Edin

CREATE PROCEDURE PROC_KandidatUpis AS
BEGIN
	INSERT INTO Kandidati(Ime, Prezime, JMBG, DatumRodjenja, MjestoRodjenja, Telefon, Email)
	VALUES ('TestProc1¸', 'TestProc1', '0000000000000', GETDATE(), 'MjestoTest1', '000111222', 'meiltest1@kandidat.com')
END

EXECUTE PROC_KandidatUpis