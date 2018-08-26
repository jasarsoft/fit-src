/*
	Vjezbe 10 Zadatak 7

	Kreirati view koji vraca podatke o svim osobama u bazi podataka (kandidati i clanovi komisije) 
	i to: ime, prezime, telefon i email, te ga dodijeliti semi Osobe. 
*/

USE Edin

CREATE VIEW vOsobe 
AS
	SELECT	KAN.Ime + KAN.Prezime AS 'Ime prezime',
			KAN.Telefon AS 'Telefon',
			KAN.Email AS 'Email'
	FROM Osobe.Kandidati AS KAN
	UNION
	SELECT	K.Ime + ' ' + K.Prezime AS 'Ime prezime',
			K.Telefon AS 'Telefon',
			K.Email AS 'Email'
	FROM Osobe.Komisija AS K
		

ALTER SCHEMA Osobe TRANSFER vOsobe