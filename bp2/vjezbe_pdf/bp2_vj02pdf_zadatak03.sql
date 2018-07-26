/*
	Vjezba 2 Zadatak 3 PUBS
	
	Prikazati listu prodaje knjiga sa sljedecim kolonama: ID prodavnice, broj narudzbe i kolicinu, 
	ali samo gdje je kolicina izmedju 10 i 50, ukljucujuci i granicne vrijednosti. 
	Rezultat upita sortirati po kolicini opadajucim redoslijedom. Upit napisati na dva nacina. 
*/

USE pubs

--prvi nacin
SELECT S.stor_id AS 'Prodavnica ID',
	   S.ord_num AS 'Broj narudzbe',
	   S.qty AS 'Kolicina'
FROM sales AS S
WHERE S.qty BETWEEN 10 AND 50
ORDER BY S.qty DESC

--drugi nacin
SELECT S.stor_id AS 'Prodavnica ID',
	   S.ord_num AS 'Broj narudzbe',
	   S.qty AS 'Kolicina'
FROM sales AS S
WHERE S.qty >= 10 AND S.qty <= 50
ORDER BY S.qty DESC