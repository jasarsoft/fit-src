--DML AFTER DELETE trigger
USE Test

CREATE TRIGGER tr_Kupci_Delete
ON Kupci AFTER DELETE AS
	INSERT INTO KupciAudit
		(KupciID, Ime, Prezime, Adresa, Komanda, Korisnik, Datum)
		SELECT d.KupacID,
			   d.Ime,
			   d.Prezime,
			   d.Adresa,
			   'Delete',
			   SYSTEM_USER,
			   GETDATE()	
		FROM deleted AS d

DELETE FROM Kupci WHERE KupacID = 2

SELECT * FROM Kupci
SELECT * FROM KupciAudit