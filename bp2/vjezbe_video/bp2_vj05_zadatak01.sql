/*
	Vjezbe 5, Zadatak 1

	Primjer se radi na Northwind bazi podataka. Menadzment firme zeli da nagradi kupca
	koji je utrosio najvise novca u februaru mjesecu. Zbog ograniceni sredstava ovaj
	put ce biti nagradjen samo kupac koji dolazi iz Londona. Prikazati kupca sa sljedecim
	podacima: ime i prezime (ContactName), adresa, telefon i ukupno utroseno.
	Kolonu ukupno utroseno formairati na sljedeci nacin 1000 KM.
*/

USE NORTHWND

SELECT TOP 1 C.ContactName, C.Address, C.Phone,
	SUM(OD.UnitPrice * OD.Quantity) AS 'Ukupno utroseno'
FROM Customers AS C JOIN Orders AS O
	ON C.CustomerID = O.CustomerID JOIN [Order Details] AS OD
	ON O.OrderID = OD.OrderID
WHERE DATEPART(MONTH, O.OrderDate) = 2 AND C.City LIKE 'London'
GROUP BY C.ContactName, C.Address, C.Phone
ORDER BY [Ukupno utroseno] DESC