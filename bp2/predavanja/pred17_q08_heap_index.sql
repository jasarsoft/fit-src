
USE TestDB;

DECLARE @db_id SMALLINT;
DECLARE @object_id INT;
SET @db_id = DB_ID(N'AdventureWorks2014');
SET @object_id = OBJECT_ID(N'AdventureWorks2014.dbo.DatabaseLog');

IF @object_id IS NULL
BEGIN;
	PRINT N'Naziv objekta je pogresan';
END;
ELSE
BEGIN;
	SELECT * FROM sys.dm_db_index_physical_stats(@db_id, @object_id, 0, NULL, 'DETAILED');
END;
GO