/*
	Vjezbe Predavanje 2, Zadatak 1

	Prikazati ime kompanije kupca, grad i fax. Uslov je da kupci u svome imenu posjeduju rijec
	'Resturant' ili dolaze iz Madrida. Takodjer uslov je da kupci imaju unesen fax.
	Listu sortirati abecedno po imenu kompanije (Northwind - 5 zapisa)
*/

USE NORTHWND;

SELECT CompanyName AS 'Ime kompanije', 
	   City Grad, 
	   Fax
FROM Customers
WHERE (CompanyName LIKE '%Restaurant%' OR City = 'Madrid') AND
	  Fax IS NOT NULL