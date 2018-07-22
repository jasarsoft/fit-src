/*
	Vjezbe 4, Zadatak 4

	Vasa firma zeli da sazna neke informacije o svojim kupcima. Svake godine se
	analizira drugi region. Ove godine je dosao red na kupce iz United States.
	Izlaz treba da sadrzi: ime i prezime kupca, ukupan broj narudzbi za
	prikazanog kupca, ukupnu kolicinu svih kupljeni proizvoda, region i grad
	iz kojeg dolazi kupac. Usloci su:
	- pored oni kupaca koji su nesto kupili, lista treba da sadrzi i one koji nisu
	uradili niti jednu narudzbu
	- ukoliko u izlazu postoji kolona u kojoj se pojavljuju NULL vrijednosti iste
	je potrebno zamjeniti brojem 0
	- pored toga sto se traze kupci iz US, na listu je potrebno dodati i one koji
	dolaze iz grada Montreal
*/

USE AdventureWorksLT2014

SELECT C.FirstName + ' ' + C.LastName AS Kupac,
		COUNT(SOH.CustomerID) AS 'Broj narudzbi',
		ISNULL(SUM(SOD.OrderQty), 0) AS 'Narucena kolicina',
		A.CountryRegion AS Region,
		A.City AS Grad
FROM SalesLT.Customer AS C LEFT JOIN SalesLT.SalesOrderHeader AS SOH
	ON C.CustomerID = SOH.CustomerID LEFT JOIN SalesLT.SalesOrderDetail AS SOD
	ON SOH.SalesOrderID = SOD.SalesOrderID INNER JOIN SalesLT.CustomerAddress AS CA
	ON C.CustomerID = CA.CustomerID INNER JOIN SalesLT.Address AS A
	ON CA.AddressID = A.AddressID
WHERE A.CountryRegion = 'United States' OR A.City = 'Montreal'
GROUP BY C.FirstName, C.LastName, A.CountryRegion, A.City
