--sva tri trigera u jednom
CREATE TRIGGER tr_Kupci_IUD
ON Kupci AFTER INSERT, UPDATE, DELETE
AS
--INSERT
IF EXISTS (SELECT * FROM inserted) AND NOT EXISTS (SELECT * FROM deleted)
BEGIN
	INSERT INTO KupciAudit
	(KupciID, Ime, Prezime, Adresa, Komanda, Korisnik, Datum)
	SELECT i.KupacID,
		   i.Ime,
		   i.Prezime,
		   i.Adresa,
		   'INSERT',
		   SYSTEM_USER,
		   GETDATE()
	FROM inserted AS i
END
--UPDATE
IF EXISTS (select * from inserted) AND EXISTS (select * from deleted)
BEGIN
	INSERT INTO KupciAudit
	(KupciID, Ime, Prezime, Adresa, Komanda, Korisnik, Datum)
	SELECT d.KupacID,
		   d.Ime,
		   d.Prezime,
		   d.Adresa,
		   'UPDATE',
		   SYSTEM_USER,
		   GETDATE()	
	FROM deleted AS d
END
--DELETE
IF EXISTS (select * from deleted) AND NOT EXISTS (select * from inserted)
BEGIN
	INSERT INTO KupciAudit
	(KupciID, Ime, Prezime, Adresa, Komanda, Korisnik, Datum)
	SELECT d.KupacID,
		   d.Ime,
		   d.Prezime,
		   d.Adresa,
		   'DELETE',
		   SYSTEM_USER,
		   GETDATE()	
	FROM deleted AS d
END

--praznjenje tabele
DELETE FROM KupciAudit

SELECT * FROM Kupci
SELECT * FROM KupciAudit

INSERT INTO Kupci (Ime, Prezime, Adresa) VALUES ('Jasmin', 'Azemovic', 'FIT')

UPDATE Kupci SET Ime = 'Neko' WHERE KupacID = 3

DELETE FROM Kupci WHERE KupacID = 3