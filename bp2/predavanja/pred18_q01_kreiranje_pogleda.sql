--kreiranje pogleda

USE TestDB
GO

CREATE VIEW HumanResources.EmployeeList
AS
	SELECT E.BusinessEntityID, P.LastName, P.FirstName
	FROM Person.Person AS P
	INNER JOIN HumanResources.Employee AS E
	ON p.BusinessEntityID = E.BusinessEntityID
GO