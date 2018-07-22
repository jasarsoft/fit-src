/*
	Vjezbe 5, Zadatak 2

	Koristeci bazu podataka pubs prikazati listu zaposlenika (ime i prezime) sa sljedecim
	podacima za svakog zaposlenika, minimalna, maksimalna, srednja i ukupna kolicina
	podatih arikala (knjige). Uslovi su, ukupna poradaja treba biti veca od 100 a
	srednja izmedju 20 i 25 ukljucujuci granicne vrijednosti.
*/

USE pubs

SELECT E.fname + ' ' + E.lname AS 'Ime i prezime',
	MIN(S.qty) AS 'Minimalno',
	MAX(S.qty) AS 'Maksimalno',
	AVG(S.qty) AS 'Prosjek',
	SUM(S.qty) AS 'Ukupno'
FROM employee AS E JOIN publishers AS P
	ON P.pub_id = E.pub_id JOIN titles AS T
	ON P.pub_id = T.pub_id JOIN sales AS S
	ON T.title_id = S.title_id
GROUP BY E.fname, E.lname
HAVING SUM(S.qty) > 100 AND AVG(S.qty) BETWEEN 20 AND 25