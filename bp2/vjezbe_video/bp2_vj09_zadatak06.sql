/*
	Uraditi INSERT testnih podataka u teblue EdukatoriPredmeti a zatim 
	kreirati VIEW nad istom tabelom (prikazazi ime i prezime edukatora
	i predmete koje predaje)
*/

USE StudentskaSluzba

SELECT * FROM Predmeti

INSERT INTO EdukatoriPredmeti (EdukatorID, PredmetID, BrojSati, FakultetID) VALUES (2, 1, 30, 1)
INSERT INTO EdukatoriPredmeti (EdukatorID, PredmetID, BrojSati, FakultetID) VALUES (2, 4, 60, 1)

SELECT * FROM EdukatoriPredmeti

CREATE VIEW view_Edukatori_Predmeti
AS
SELECT E.Ime, E.Prezime, P.Naziv, EP.BrojSati
FROM Edukatori AS E INNER JOIN EdukatoriPredmeti AS EP
	ON E.EdukatorID = EP.EdukatorID INNER JOIN Predmeti AS P
	ON EP.PredmetID = P.PredmetID

SELECT * FROM view_Edukatori_Predmeti