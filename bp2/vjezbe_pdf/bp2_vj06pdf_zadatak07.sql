/*
	Vjezbe 6 Zadatak 7 Northwind

	Izmijeniti cijenu za nova 3 proizvoda (dodana u zadatku 2). Cijenu umanjiti za 10%. Takoder, u svim 
	detaljima narudzbe gdje su se pojavili proizvodi izvrsiti umanjenje cijene.
*/

USE NORTHWND

--postavljanje jedinicne cijene proizvoda
UPDATE Products
SET UnitPrice = 10.0
WHERE ProductName IN ('Test 1', 'Test 2', 'Test 3')

--smanjivanje cijena za 10%
UPDATE Products
SET UnitPrice = UnitPrice - UnitPrice * 0.1
WHERE ProductName IN ('Test 1', 'Test 2', 'Test 3')

--provjera proizovda
SELECT *
FROM Products AS P
WHERE P.ProductName IN ('Test 1', 'Test 2', 'Test 3')

--azuriranje svih datelja narudzbe od dodani prozivoda
UPDATE [Order Details]
SET UnitPrice = UnitPrice - UnitPrice * 0.1, Discount = 0.1
WHERE [Order Details].ProductID IN (select P.ProductID from Products AS P where P.ProductName IN ('Test 1', 'Test 2', 'Test 3'))

--provjera izmjene cijena za proivode
SELECT *
FROM [Order Details] AS OD
WHERE OD.ProductID IN (select P.ProductID from Products AS P where P.ProductName IN ('Test 1', 'Test 2', 'Test 3'))