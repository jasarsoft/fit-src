/*
	Vjezba 2 Zadatak 5 PUBS
	
	Prikazati 10 kolicinski najvecih stavki prodaje. Lista treba da sadrzi broj narudzbe, datum 
	narudzbe i kolicinu. Provjeriti da li ima vise stavki sa kolicinom kao posljednja u listi. 
*/

USE pubs

SELECT TOP 10 WITH TIES ord_num AS 'Broj narudzbe',
	   ord_date AS 'Datum narudzbe',
	   qty AS 'Kolicina'
FROM sales AS S
ORDER BY qty DESC
