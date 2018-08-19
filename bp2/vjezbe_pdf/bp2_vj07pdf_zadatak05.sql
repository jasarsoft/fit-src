/*
	Vjezbe 7 Zadatak 5

	 U tabelu Testovi unijeti minimalno 3 zapisa sa proizvoljnim podacima. 
*/

USE Edin

INSERT INTO Testovi(Datum, Naziv, Oznaka, Oblast, MaxBrojBodova)
VALUES	(DATEFROMPARTS(2017, 1, 1), 'Programiranje 1', 'PR1', 'IT', 100),
		(DATEFROMPARTS(2017, 2, 2), 'Programiranje 2', 'PR2', 'IT', 100),
		(DATEFROMPARTS(2017, 3, 3), 'Programiranje 3', 'PR3', 'IT', 100);


SELECT *
FROM Testovi