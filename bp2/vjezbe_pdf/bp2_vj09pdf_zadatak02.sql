/*
	Vjezbe 9 Zadatak 2

	Kreirati stored proceduru za izmjenu podataka u tabeli Kandidati. Izvrsiti proceduru, tj. 
	izmijeniti odredene podatke za prethodno dodanog kandidata. 
*/

USE Edin

CREATE PROC prKandidatiIzmjena	@ID INT,
								@Ime NVARCHAR(30), 
								@Prezime NVARCHAR(30),
								@JMBG NVARCHAR(13),
								@DatumRodjenja DATE,
								@MjestoRodjenja NVARCHAR(30) = NULL,
								@Telefon NVARCHAR(20) = '000-000-000',
								@Email NVARCHAR(50) = NULL
AS
BEGIN
	UPDATE Kandidati
	SET Ime = @Ime,
		Prezime = @Prezime,
		JMBG = @JMBG,
		DatumRodjenja = @DatumRodjenja,
		MjestoRodjenja = @MjestoRodjenja,
		Telefon = @Telefon,
		Email = @Email
	WHERE KandidatID = @ID
END

EXEC prKandidatiIzmjena @ID = 2,
						@Ime = 'ImeTest2',
						@Prezime = 'PrezimeTest2',
						@JMBG = 'JMBGTest22222',
						@DatumRodjenja = '19890505'