--kreiranje procedure

USE TestDB
GO

CREATE PROCEDURE Sales.GetSalesPersonNames
AS
BEGIN
	SELECT SP.BusinessEntityID, P.LastName, P.FirstName
	FROM Sales.SalesPerson AS SP
	INNER JOIN Person.Person AS P
	ON SP.BusinessEntityID = P.BusinessEntityID
	WHERE SP.TerritoryID IS NOT NULL
	ORDER BY SP.BusinessEntityID
END;

--izvrsenje procedure
EXECUTE Sales.GetSalesPersonNames
GO