USE TestDB
GO

INSERT INTO Firma(Naziv)
VALUES ('Pujdo Inc.')

SELECT * FROM Firma
WHERE Naziv = 'Pujdo Inc.'