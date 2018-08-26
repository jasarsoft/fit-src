/*
	Vjezbe 10 Zadatak 2

	Tabele Kandidati i Komisija pridruziti semi Osobe, a tabele Testovi i RezultatiTesta pridruziti 
	semi Ispiti. Takoder, view kreiran u vjezbi 9 (zadatak 5) pridruziti semi Ispiti. 
*/

USE Edin


ALTER SCHEMA Osobe TRANSFER Kandidati

ALTER SCHEMA Osobe TRANSFER Komisija

ALTER SCHEMA Ispiti TRANSFER Testovi

ALTER SCHEMA Ispiti TRANSFER RezultatiTesta

ALTER SCHEMA Ispiti TRANSFER KomisijaTestovi

ALTER SCHEMA Ispiti TRANSFER vKandidatTest