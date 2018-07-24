--INSTED OF triger
CREATE TRIGGER tr_Kupci_IO_Delete
ON Kupci INSTEAD OF DELETE AS
	INSERT INTO KupciAudit
	(KupciID, Ime, Prezime, Adresa, Komanda, Korisnik, Datum)
	SELECT d.KupacID,
		   d.Ime,
		   d.Prezime,
		   d.Adresa,
		   'DELETE!!!',
		   SYSTEM_USER,
		   GETDATE()
	FROM deleted AS d

SELECT * FROM Kupci
SELECT * FROM KupciAudit

DELETE FROM Kupci WHERE KupacID = 1