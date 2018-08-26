/*
	Vjezbe 10 Zadatak 5

	Nad bazom podataka kreirati novog korisnika, mapirati ga sa prethodno kreiranim loginom te 
	mu kao default semu postaviti semu Ispiti. 
*/

USE Edin

CREATE USER uEdin FOR LOGIN lEdin
WITH DEFAULT_SCHEMA = Ispiti
