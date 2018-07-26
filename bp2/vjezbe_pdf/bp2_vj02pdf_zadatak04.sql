/*
	Vjezba 2 Zadatak 4 PUBS
	
	Prikazati listu knjiga sa sljedecim kolonama: naslov, tip djela i cijenu. Kao novu kolonu dodati 
	20% od prikazane cijene (npr. Ako je cijena 19.99 u novoj koloni treba da pise 3,998). Naziv 
	kolone se treba zvati „20% od cijene“. Listu sortirati abecedno po tipu djela i po cijeni 
	opadajucim redoslijedom. Sa liste eliminisati one vrijednosti koje u polju cijena imaju nepoznatu 
	vrijednost.
	
	Modifikovati upit tako da prikaze cijenu umanjenu za 20%. Naziv kolone treba da se zove 
	„Cijena umanjena za 20%“.
*/

USE pubs

SELECT T.title AS 'Naslov',
	   T.type AS 'Tip djela',
	   T.price AS 'Cijena',
	   CONVERT(decimal(10, 2), T.price * 0.2) AS '20% od cijene',
	   CONVERT(decimal(10, 2), T.price - (T.price * 0.2)) AS 'Cijena umanje za 20%'
FROM titles AS T
WHERE T.price IS NOT NULL
ORDER BY T.type, T.price DESC
