--izmjena procedure

USE TestDB
GO

ALTER PROCEDURE Sales.GetSalesPersonNames
AS
BEGIN
	SELECT SP.BusinessEntityID, P.LastName, P.FirstName
	FROM Sales.SalesPerson AS SP
	INNER JOIN Person.Person AS P
	ON SP.BusinessEntityID = P.BusinessEntityID
	WHERE SP.TerritoryID IS NOT NULL
	AND SP.SalesQuota IS NOT NULL
	ORDER BY SP.BusinessEntityID
END;