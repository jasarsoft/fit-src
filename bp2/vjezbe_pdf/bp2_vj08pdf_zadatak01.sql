/*
	Vjezbe 8 Zadatak 1

	 Unutar baze podataka kreirane u vjezbi 7 dodati novu tabelu Komisija sa sljedecim poljima: 
		- Ime, polje za unos 30 karaktera (obavezan unos) 
		- Prezime, polje za unos 30 karaktera (obavezan unos) 
		- Titula, polje za unos 15 karaktera, 
		- Telefon, polje za unos 20 karaktera, 
		- Email, polje za unos 50 karaktera. 
 
		Napomena: Tabelu kreirati bez primarnog kljuca. 
*/

USE Edin

CREATE TABLE Komisija
(
	Ime NVARCHAR(30) NOT NULL,
	Prezime NVARCHAR(30) NOT NULL,
	Titula NVARCHAR(15),
	Telefon NVARCHAR(20),
	Email NVARCHAR(50)
);