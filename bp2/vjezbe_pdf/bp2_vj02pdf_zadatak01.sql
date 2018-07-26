/*
	Vjezba 2 Zadatak 1 PUBS

	Prikazati listu autora sa sljedeæim kolonama: ID, ime i prezime (spojeno), grad i to samo one 
	autore ciji ID pocinje brojem 8 ili dolaze iz grada „Salt Lake City“. Takoðer autorima status 
	ugovora treba biti 1. Koristiti aliase nad kolonama. 
*/

USE pubs

SELECT A.au_id AS AuthorID, 
	   A.au_fname + ' ' + A.au_lname AS [Ime Prezime], 
	   A.city AS 'Grad'
FROM authors AS A
WHERE (A.au_id LIKE '8%' OR A.city LIKE 'Salt Lake City') AND A.contract > 0