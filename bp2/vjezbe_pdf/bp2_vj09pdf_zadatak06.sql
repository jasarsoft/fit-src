/*
	Vjezbe 9 Zadatak 6

	Kreirati stored proceduru koja ce na osnovu proslijedenih parametara @OznakaTesta i 
	@JMBG prikazivati rezultate testiranja. Kao izvor podataka koristiti prethodno kreirani view. 
	Izvrsiti proceduru, tj.prikazati rezultate testiranja za odredenog kandidata. 
*/

USE Edin

CREATE PROCEDURE pRezultatiTesta @OznakaTesta NVARCHAR(10),
								 @JMBG NVARCHAR(13)
AS
BEGIN
	SELECT * 
	FROM vKandidatTest AS KT
	WHERE KT.[JMBG kandidata] = @JMBG AND
		  KT.[Oznaka testa] = @OznakaTesta
END	

EXEC pRezultatiTesta @OznakaTesta = 'PR1',
						@JMBG = '0000000000000' 