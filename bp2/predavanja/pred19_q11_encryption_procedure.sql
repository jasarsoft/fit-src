--zasticena procedura

USE TestDB
GO

CREATE PROCEDURE HumanResources.EmployeeList
WITH ENCRYPTION
AS
	SELECT E.BusinessEntityID, P.LastName, P.FirstName
	FROM Person.Person AS P
	INNER JOIN HumanResources.Employee AS E
	ON P.BusinessEntityID = E.BusinessEntityID
GO