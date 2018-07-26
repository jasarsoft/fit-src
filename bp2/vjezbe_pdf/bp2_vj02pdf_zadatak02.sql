/*
	Vjezba 2 Zadatak 2 PUBS

	Prikazati sve tipove knjiga bez duplikata.
	Listu sortirati po tipu.
*/

USE pubs

SELECT DISTINCT T.type
FROM titles AS T
ORDER BY T.type