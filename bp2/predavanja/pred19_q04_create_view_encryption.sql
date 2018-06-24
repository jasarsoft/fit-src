--kreiranje zasticenog pogleda

USE TestDB
GO

CREATE VIEW HumanResources.vEmployeeList
WITH ENCRYPTION
AS
	SELECT E.BusinessEntityID, P.LastName, P.FirstName
	FROM Person.Person AS P
	INNER JOIN HumanResources.Employee AS E
	ON P.BusinessEntityID = E.BusinessEntityID
GO