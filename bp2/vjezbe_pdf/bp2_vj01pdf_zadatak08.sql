/*
	Vjezbe 01 Zadatak 08 NORTHWIND

	Prikazati dobavljace koji dolaze iz Spanije ili Njemacke, a nemaju
	unesen broj faxa. Formirati izlaz NULL vrijednosti.
	Upit napisati na dva nacina.
*/

USE NORTHWND

--prvi nacin
SELECT S.CompanyName, S.ContactName, S.Country, ISNULL(S.Fax, 'N/A') AS 'Fax' 
FROM Suppliers AS S
WHERE S.Country IN ('Spain', 'Germany') AND S.Fax IS NULL

--drugi nacin
SELECT S.CompanyName, S.ContactName, S.Country, ISNULL(S.Fax, 'N/A') AS 'Fax' 
FROM Suppliers AS S
WHERE (S.Country = 'Spain' OR S.Country = 'Germany') AND S.Fax IS NULL