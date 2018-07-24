USE NORTHWND

CREATE PROCEDURE usp_Products_SalectByProductNameOrCategoryID
(
	@ProductName NVARCHAR(40) = NULL,
	@CategoryID INT = NULL
)
AS
BEGIN
	SELECT ProductName, UnitPrice, UnitsInStock, UnitsOnOrder
	FROM Products
	WHERE (ProductName = @ProductName OR @ProductName IS NULL) AND 
		  (CategoryID = @CategoryID OR @CategoryID IS NULL)
END

EXEC usp_Products_SalectByProductNameOrCategoryID @ProductName = 'Chai'
EXEC usp_Products_SalectByProductNameOrCategoryID @CategoryID = 2
EXEC usp_Products_SalectByProductNameOrCategoryID @ProductName = 'Aniseed Syrup', @CategoryID = 2
EXEC usp_Products_SalectByProductNameOrCategoryID @ProductName = NULL, @CategoryID = NULL
