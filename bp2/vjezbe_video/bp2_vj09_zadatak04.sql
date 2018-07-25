/*
	Uraditi INSERT podataka u tabele Fakulteti i Predmeti.
	Dodati 3 fakulteta i 3 predmeta
*/

INSERT INTO Fakulteti (Naziv) VALUES ('FIT')
INSERT INTO Fakulteti (Naziv) VALUES ('Masinski fakultet')
INSERT INTO Fakulteti (Naziv) VALUES ('Elektrotehnicki fakultet')

SELECT * FROM Fakulteti

INSERT INTO Predmeti (Naziv, Oznaka, ECTS) VALUES ('Uvod u baze podataka', 'UBP', 5)
INSERT INTO Predmeti (Naziv, Oznaka, ECTS) VALUES ('Sistemi za upravljanje bazama', 'DBMS', 8)
INSERT INTO Predmeti (Naziv, Oznaka, ECTS) VALUES ('Programiranje 2', 'PR2', 8.5)

SELECT * FROM Predmeti