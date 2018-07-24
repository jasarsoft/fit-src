--DML AFTER UPDATE trigger
USE Test

CREATE TRIGGER tr_Kupci_Update
ON Kupci AFTER UPDATE AS
	INSERT INTO KupciAudit
		(KupciID, Ime, Prezime, Adresa, Komanda, Korisnik, Datum)
		SELECT d.KupacID,
			   d.Ime,
			   d.Prezime,
			   d.Adresa,
			   'Update',
			   SYSTEM_USER,
			   GETDATE()	
		FROM deleted AS d

UPDATE Kupci SET Ime = 'Neko4' WHERE KupacID = 2

SELECT * FROM Kupci
SELECT * FROM KupciAudit