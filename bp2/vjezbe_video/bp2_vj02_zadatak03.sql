/*
	Vjezbe Predavanje 2, Zadatak 3

	Prikazati naslov djela, tip djela i cijenu. Kao novu kolonu dodati cijenu 
	sa popustom od 20%. Uslov je da nova cijena (sa popustom) bude izmedju 10 i 20.
	Listu sortirani abecedno po tipu djela, te po novoj cijeni opadajucim redosljedom.
	(Pubs - 9 zapisa)
*/

USE pubs

SELECT title AS [Naslov], 
	   type AS 'Tip djela', 
	   Price AS Cijena, 
	   price - (price * 0.2) AS 'Cijena sa popustom'
FROM [dbo].[titles]
WHERE price - (price * 0.2) BETWEEN 10 AND 20
ORDER BY [Tip djela], [Cijena sa popustom] DESC