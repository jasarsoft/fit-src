--sistemski pogled procedura

USE TestDB
GO

SELECT SCHEMA_NAME(schema_id) AS SchemaName,
	Name AS ProcedureName
FROM sys.procedures
