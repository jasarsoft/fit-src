
CREATE DATABASE Test

USE Test

--kreiranje tabele kupci
CREATE TABLE Kupci
(	KupacID INT PRIMARY KEY IDENTITY(1,1),
	Ime NVARCHAR(50),
	Prezime NVARCHAR(50),
	Adresa NVARCHAR(100)
)

--kreiranje tabele audit
CREATE TABLE KupciAudit
(	AuditID INT PRIMARY KEY IDENTITY (1,1),
	KupciID INT,
	Ime NVARCHAR(50),
	Prezime NVARCHAR(50),
	Adresa NVARCHAR(100),
	Komanda NVARCHAR(10),
	Korisnik NVARCHAR(50),
	Datum DATETIME
)

--kreiranje trigera koji prati insert u tabelu kupci
CREATE TRIGGER tr_Kupci_Insert
ON Kupci AFTER INSERT AS
	INSERT INTO KupciAudit
		(KupciID, Ime, Prezime, Adresa, Komanda, Korisnik, Datum)
		SELECT i.KupacID,
			   i.Ime,
			   i.Prezime,
			   i.Adresa,
			   'Insert',
			   SYSTEM_USER,
			   GETDATE()	
		FROM inserted AS i

--insertovanje zapisa u tabelu kupci
INSERT INTO Kupci (Ime, Prezime, Adresa) VALUES ('Jasmin', 'Azemovic', 'FIT')
INSERT INTO Kupci (Ime, Prezime, Adresa) VALUES ('Admir', 'Sehidic', 'FIT')

SELECT * FROM Kupci
SELECT * FROM KupciAudit