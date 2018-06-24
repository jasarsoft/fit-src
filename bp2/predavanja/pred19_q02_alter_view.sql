--izmjena pogleda

USE TestDB
GO

ALTER VIEW HumanResources.vEmployeeList
AS
	SELECT E.BusinessEntityID, P.LastName, P.FirstName, E.Gender, E.HireDate
	FROM Person.Person AS P
	INNER JOIN HumanResources.Employee AS E
	ON P.BusinessEntityID = E.BusinessEntityID
GO