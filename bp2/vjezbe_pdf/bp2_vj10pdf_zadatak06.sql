/*
	Vjezbe 10 Zadatak 6

	Prethodno kreiranom korisniku dozvoliti citanje podataka i izvrsavanje procedura nad semom 
	Ispiti. Primjenom objekata kreiranih u prethodnim vjezbama testirati dodijeljene permisije!
*/

USE Edin

GRANT SELECT ON SCHEMA::Ispiti TO uEdin

GRANT EXECUTE ON OBJECT::Ispiti.pRezultatiTesta TO uEdin

GRANT EXECUTE ON OBJECT::Ispiti.pTestovi TO uEdin