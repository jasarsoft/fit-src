/*
	Kreirati INSERT, UPDATE i DELETE procedure za tabelu Edukatori,
	proslijediti sve parametre.
*/
USE StudentskaSluzba

CREATE PROCEDURE proc_Edukatori_Insert
(
	@Ime NVARCHAR(35),
	@Prezime NVARCHAR(35),
	@Titula NVARCHAR(10),
	@Status BIT = 1,
	@Slika VARBINARY(MAX) = NULL,
	@FakultetID INT
)
AS
BEGIN
	INSERT INTO Edukatori (Ime, Prezime, Titula, Status, Slika, FakultetID)
	VALUES (@Ime, @Prezime, @Titula, @Status, @Slika, @FakultetID)
END

SELECT * FROM Edukatori

EXEC proc_Edukatori_Insert 'Jasmin', 'Azemovic', 'profesor', 1, NULL, 1
EXEC proc_Edukatori_Insert 
	@Ime = 'Test',
	@Prezime = 'Test',
	@Titula = 'Test',
	@FakultetID = 2

-- UPDATE PROCEDURE
CREATE PROCEDURE proc_Edukatori_Update
(
	@EdukatorID INT,
	@Ime NVARCHAR(35),
	@Prezime NVARCHAR(35),
	@Titula NVARCHAR(10),
	@Status BIT = 1,
	@Slika VARBINARY(MAX) = NULL,
	@FakultetID INT
)
AS
BEGIN
	UPDATE Edukatori SET Ime = @Ime,
						 Prezime = @Prezime,
						 Titula = @Titula,
						 Status = @Status,
						 Slika = @Slika,
						 FakultetID = @FakultetID
	WHERE EdukatorID = @EdukatorID
END

SELECT * FROM Edukatori
EXEC proc_Edukatori_Update 1, 'Admir', 'Sehidic', 'asist.', 0, NULL, 1


--DELETE PROCEDURE
CREATE PROCEDURE proc_Edukatori_Delete
(
	@EdukatorID INT
)
AS
DELETE FROM Edukatori
WHERE EdukatorID = @EdukatorID

SELECT * FROM Edukatori
EXEC proc_Edukatori_Delete 1