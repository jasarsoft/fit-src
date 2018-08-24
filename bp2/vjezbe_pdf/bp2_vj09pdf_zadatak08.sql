/*
	Vjezbe 9 Zadatak 8

	Kreirati stored proceduru za brisanje zapisa u tabeli Testovi ukljucujuci sve rezultate 
	testiranja. Trigger kreiran u zadatku 7 treba da sprijeci izvrsavanje ove procedure ukoliko za 
	odabrani test postoje rezultati testiranja.
*/

USE Edin

CREATE PROCEDURE pTestovi @TestID INT AS 
BEGIN
	DELETE RT FROM RezultatiTesta AS RT
	WHERE RT.TestID = @TestID
	
	DELETE T FROM Testovi AS T 
	WHERE T.TestID = @TestID
END

pTestovi 5
