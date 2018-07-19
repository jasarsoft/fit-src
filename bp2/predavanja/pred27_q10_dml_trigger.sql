--DML trigger

CREATE DATABASE CSI
GO

USE CSI
CREATE TABLE dbo.T1
(
	ID INT NOT NULL PRIMARY KEY,
	kolona1 INT NULL,
	kolona2 VARCHAR(50) NULL
);
GO

CREATE TABLE dbo.dmlKontrolaPristupa
(
	lsn INT				NOT NULL IDENTITY PRIMARY KEY,
	ID	INT				NOT NULL,
	ImeKolone sysname	NOT NULL,
	StariPodatak		SQL_VARIANT NULL,
	NoviPodatak			SQL_VARIANT NULL
);
GO

CREATE TRIGGER trg_dmlKontrolaPristupa
	ON dbo.T1 FOR UPDATE
AS
	IF @@ROWCOUNT = 0 RETURN;

	INSERT INTO dbo.dmlKontrolaPristupa(ID, ImeKolone, StariPodatak, NoviPodatak)
	SELECT *
	FROM (	SELECT I.ID, ImeKolone,
				CASE ImeKolone
					WHEN N'kolona1' THEN CAST(D.kolona1 AS SQL_VARIANT)
					WHEN N'kolona2' THEN CAST(D.kolona2 AS SQL_VARIANT)
				END AS StariPodatak ,
				CASE ImeKolone
					WHEN N'kolona1' THEN CAST(I.kolona1 AS sql_variant)
					WHEN N'kolona2' THEN CAST(I.kolona2 AS sql_variant)
				END AS NoviPodatak
		FROM inserted AS I
			JOIN deleted AS D
				ON I.ID = D.ID
			CROSS JOIN
				(SELECT N'kolona1' AS ImeKolone
				UNION ALL SELECT N'kolona2') AS C) AS D
	WHERE StariPodatak <> NoviPodatak
		OR (StariPodatak IS NULL AND NoviPodatak IS NOT NULL)
		OR (StariPodatak IS NOT NULL AND NoviPodatak IS NULL);
GO

INSERT INTO dbo.T1(ID, kolona1, kolona2) VALUES(1, 10, 'A');
INSERT INTO dbo.T1(ID, kolona1, kolona2) VALUES(2, 20, 'B');
INSERT INTO dbo.T1(ID, kolona1, kolona2) VALUES(3, 30, 'C');

SELECT ID, kolona1, kolona2
	FROM dbo.T1

UPDATE dbo.T1
	SET kolona2 = kolona2 + ', modifikovana vrijednost',
		kolona1 = 100 + kolona1
	WHERE ID < 3;

SELECT lsn, ID, ImeKolone, StariPodatak, NoviPodatak FROM dbo.dmlKontrolaPristupa;

DROP TRIGGER trg_dmlKontrolaPristupa
GO

DROP TABLE dbo.dmlKontrolaPristupa
GO

USE master
GO

DROP DATABASE CSI
GO