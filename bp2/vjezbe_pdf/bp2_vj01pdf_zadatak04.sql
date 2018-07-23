/*
	Vjezbe 01 Zadatak 04 NORTHWIND
	
	Prikazati ime kompanije kupca i kontakt telefon i to samo onih koji u svome imenu
	posjeduju rijec 'Restaurant'. Ukoliko naziv kompanije sadrzi karakter '-',
	kupce izbaciti iz rezultata upita.
*/

USE NORTHWND

SELECT C.CompanyName, C.Phone
FROM Customers AS C
WHERE C.CompanyName LIKE '%Restaurant%' AND C.CompanyName NOT LIKE '%-%'