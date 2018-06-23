--skrivanje strukture pogleda
--obfuscating

USE TestDB
GO

CREATE VIEW HumanResources.EmployeeList
WITH ENCRYPTION
AS
	SELECT E.BusinessEntityID, P.LastName, P.FirstName
	FROM Person.Person AS P
	INNER JOIN HumanResources.Employee AS E
	ON P.BusinessEntityID = E.BusinessEntityID
GO