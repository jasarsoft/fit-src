/*
	Kreirati proceduru koja ce na osnovu proslijedjenog parametra @Prezime
	vratiti edukatore kojima prezime pocinje tekstom koji je proslijedjen u parametru.
*/

USE StudentskaSluzba

CREATE PROCEDURE proc_Edukatori_SelectByPrezime
(
	@Prezime NVARCHAR(35)
)
AS
BEGIN
	SELECT * FROM Edukatori
	WHERE Prezime LIKE @Prezime + '%'
END

EXEC proc_Edukatori_SelectByPrezime 'A'