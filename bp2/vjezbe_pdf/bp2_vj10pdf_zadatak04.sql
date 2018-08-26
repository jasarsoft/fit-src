/*
	Vjezbe 10 Zadatak 4

	Kreirati novi SQL Server login te mu kao default bazu podataka postaviti bazu podataka 
	kreiranu u vjezbi 7. 
*/

CREATE LOGIN lEdin
WITH PASSWORD = 'Pa$$w0rd1',
DEFAULT_DATABASE = Edin
