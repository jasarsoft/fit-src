/*
	Vjezbe 3 Zadatak 1 AdventureWorks2014

	Za sve osobe koje imaju unesenu titulu kreirati poruku dobrodoslice u sljedecem formatu: 
	Dobrodosli [titula] [ime i prezime], trenutno je [trenutno vrijeme] sati 
	Upit napisati minimalno na 3 nacina kombinirajuci razlicite T-SQL funkcije! 
*/

USE AdventureWorks2014

--prvi nacin
SELECT 'Dobrodosli ' + P.Title + ' ' + 
        P.FirstName + ' ' + P.LastName + ', trenutno je ' + 
		CONVERT(varchar, GETDATE(), 108) + ' sati.'
FROM Person.Person AS P
WHERE P.Title IS NOT NULL

--drugi nacin
SELECT 'Dobrodosli ' + P.Title + ' ' + 
        P.FirstName + ' ' + P.LastName + ', trenutno je ' + 
		RIGHT(CONVERT(varchar, GETDATE()), 7) + ' sati.'
FROM Person.Person AS P
WHERE P.Title IS NOT NULL

--treci nacin
SELECT 'Dobrodosli ' + P.Title + ' ' + 
        P.FirstName + ' ' + P.LastName + ', trenutno je ' + 
		SUBSTRING(CONVERT(varchar, GETDATE()), 13, 5) + ' sati.'
FROM Person.Person AS P
WHERE P.Title IS NOT NULL