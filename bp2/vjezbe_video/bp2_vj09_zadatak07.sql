/*
	Importovati 10 zapisa iz tabele Customers (baza Northwind) u tabelu Edukatori
	Uraditi na tri nacina:
		- SELECT kao podupit u INSERT komandi
		- SELECT INTO (koristeci temp tabelu)
		- Koristeci Import/Export wizard
*/

INSERT INTO Edukatori (Ime, Prezime, Titula, FakultetID)
SELECT TOP 10 SUBSTRING(ContactName, 1, CHARINDEX(' ', ContactName)),
	   SUBSTRING(ContactName, CHARINDEX(' ', ContactName) + 1, 50),
	   LEFT(SUBSTRING(ContactTitle, 1, CHARINDEX(' ', ContactTitle)), 10),
	   1
FROM [NORTHWND].[dbo].[Customers]
WHERE CHARINDEX(' ', ContactName) <> 0 AND
	  SUBSTRING(ContactTitle, 1, CHARINDEX(' ', ContactTitle)) NOT LIKE ''
ORDER BY ContactTitle DESC

DELETE FROM Edukatori
WHERE EdukatorID > 3

SELECT * FROM Edukatori

--2 nacin
SELECT TOP 10 SUBSTRING(ContactName, 1, CHARINDEX(' ', ContactName)) AS 'Ime',
	   SUBSTRING(ContactName, CHARINDEX(' ', ContactName), 50) AS 'Prezime',
	   LEFT(SUBSTRING(ContactTitle, 1, CHARINDEX(' ', ContactTitle)), 10) AS 'Titula',
	   1 AS 'FakultetID'
INTO #EdukatoriTemp
FROM [NORTHWND].[dbo].[Customers]
WHERE CHARINDEX(' ', ContactName) <> 0 AND
	  SUBSTRING(ContactTitle, 1, CHARINDEX(' ', ContactTitle)) NOT LIKE ''
ORDER BY ContactName DESC

SELECT * FROM #EdukatoriTemp

INSERT INTO Edukatori (Ime, Prezime, Titula, FakultetID)
SELECT * FROM #EdukatoriTemp

DROP TABLE #EdukatoriTemp