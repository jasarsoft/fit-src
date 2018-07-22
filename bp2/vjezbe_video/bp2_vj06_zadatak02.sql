/*
	Vjezbe 6, Zadatak 2

	Koristeci bazu podataka Norhwind prikaziat nazivk kompanije, ime i prezime, grad
	i teelfon kupa, ali samo onih koji su utrosili vise od 10 000KM
*/

USE NORTHWND

SELECT C.CompanyName,
	C.ContactName,
	C.City,
	C.Phone
FROM Customers AS C
WHERE (SELECT SUM(OD.UnitPrice * OD.Quantity)
	FROM Orders AS O JOIN [Order Details] AS OD
	ON O.OrderID = OD.OrderID
	WHERE C.CustomerID = O.CustomerID) > 10000