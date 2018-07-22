/*
	Vjezbe 4, Zadatak 3

	Iz baze podataka Pubs prikazati prodaju knjiga po prodavnicama. Izlaz treba da sadrzi
	sljedece kolone: naziv izdavaca, naziv prodavnice, naziv knjige i zaradu od prodaje.
	Potrebno je prikazati prodaju knjige izdavaca sa imenom 'New Moon Books'
*/

USE pubs

SELECT P.pub_name AS 'Izadavac',
	ST.stor_name AS 'Prodavnica',
	T.title AS 'Knjiga',
	SUM(S.qty  * T.price) AS 'Zarada'
FROM publishers AS P INNER JOIN titles AS T
	ON P.pub_id = T.pub_id INNER JOIN  sales AS S
	ON T.title_id = S.title_id INNER JOIN stores AS ST
	ON S.stor_id = ST.stor_id
WHERE P.pub_name = 'New Moon Books'
GROUP BY P.pub_name, ST.stor_name, T.title
ORDER BY Prodavnica, Knjiga