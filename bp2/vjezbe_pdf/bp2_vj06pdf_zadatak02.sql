/*
	Vjezbe 6 Zadatak 2 Northwind

	Dodati novu kategoriju proizvoda i dobavljaca, te 3 nova proizvoda (testni podaci). Proizvode 
	pridruziti prethodno dodanoj kategoriji i dobavljacu.
*/

USE NORTHWND

--nova kategorija
INSERT INTO Categories(CategoryName, Description, Picture)
	VALUES('Nova kategorija', 'Opis kategorije', NULL)

--provjera kategorije
SELECT *
FROM Categories

--novi dobavljac
INSERT INTO Suppliers(CompanyName)
	VALUES('Test')

--provjera dobavljaca
SELECT *
FROM Suppliers
WHERE CompanyName = 'Test'

--nova 3 proizvoda
INSERT INTO Products(ProductName, SupplierID, CategoryID, Discontinued)
	VALUES('Test 2', (select top 1 SupplierID from Suppliers where CompanyName = 'Test'), 
					 (select top 1 CategoryID from Categories where CategoryName = 'Nova kategorija'), 0), 
		  ('Test 3', (select top 1 SupplierID from Suppliers where CompanyName = 'Test'), 
					 (select top 1 CategoryID from Categories where CategoryName = 'Nova kategorija'), 0),
		  ('Test 4', (select top 1 SupplierID from Suppliers where CompanyName = 'Test'), 
					 (select top 1 CategoryID from Categories where CategoryName = 'Nova kategorija'), 0)

--provjera prizvoda
SELECT *
FROM Products AS P INNER JOIN Suppliers AS S
	ON P.SupplierID = S.SupplierID
WHERE S.CompanyName = 'Test'