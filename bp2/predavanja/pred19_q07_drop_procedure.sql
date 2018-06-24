--sistemski pogled procedura
--brisanje procedura

USE TestDB
GO

SELECT SCHEMA_NAME(SCHEMA_ID) AS SchemaName,
	Name AS ProcedureName
FROM sys.procedures;
GO

DROP PROCEDURE Sales.GetSalesPersionNames
GO