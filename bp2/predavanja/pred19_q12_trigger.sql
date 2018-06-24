--triger

USE TestDB
GO

CREATE TRIGGER Preventiva
ON DATABASE
FOR DROP_TABLE, ALTER_TABLE, DROP_VIEW
AS
	PRINT 'Brisanje i izmjena na objektima nije dozvoljena!'
	ROLLBACK;

DROP VIEW HumanResources.vEmployee --nece raditi