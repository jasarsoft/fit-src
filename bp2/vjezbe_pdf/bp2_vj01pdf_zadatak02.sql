/*
	Vjezbe 01 Zadatak 02 NORTHWIND
	
	Prikazati podatake o narudzbama koje su napravljene prije 19.07.1996. godine.
	Izlaz treba da sadrzi sljedece kolone: ID narudzbe, datum narudzbe, ID kupca
	te grad.
*/

USE NORTHWND

SELECT O.OrderID, O.OrderDate, O.CustomerID, O.ShipCity
FROM Orders AS O
WHERE O.OrderDate < DATETIMEFROMPARTS(1996,7,19,0,0,0,0) /* O.OrderDate < '07/19/1996' */