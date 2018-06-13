USE TestDB
GO

SELECT * FROM Firma

SET IDENTITY_INSERT Firma ON;
GO
INSERT INTO Firma(FirmaID, Naziv)
VALUES(99, 'Firma sa posebnim ID')

SET IDENTITY_INSERT Firma OFF;

INSERT INTO Firma(Naziv, Telefon)
VALUES ('New Pujdo Inc.', DEFAULT)