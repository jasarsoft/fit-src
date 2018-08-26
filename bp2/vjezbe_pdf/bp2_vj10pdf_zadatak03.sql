/*
	Vjezbe 10 Zadatak 3

	Sve stored procedure kreirane u vjezbi 9 pridruziti odgovarajucim semama, a u zavisnosti od 
	seme kojoj pripada tabela nad kojom se procedura izvrsava. 
*/

USE Edin

ALTER SCHEMA Osobe TRANSFER dbo.PROC_KandidatUpis

ALTER SCHEMA Osobe TRANSFER dbo.prKandidatiIzmjena

ALTER SCHEMA Osobe TRANSFER dbo.prKandidatBrisanje


ALTER SCHEMA Ispiti TRANSFER dbo.pRezultatiTesta

ALTER SCHEMA Ispiti TRANSFER dbo.pTestovi
