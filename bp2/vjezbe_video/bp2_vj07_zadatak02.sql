USE NORTHWND

CREATE PROCEDURE usp_Products_Update
(
	@ProductID INT,
	@ProductName NVARCHAR(40),
	@SupplierID INT = NULL,
	@CategoryID INT = NULL,
	@QuantityPerUnit NVARCHAR(20) = NULL,
	@UnitPrice MONEY = NULL,
	@UnitsInStock SMALLINT = NULL,
	@UnitsOnOrder SMALLINT = NULL,
	@ReorderLevel SMALLINT = NULL,
	@Discontinued BIT
)
AS
BEGIN
	UPDATE Products
	SET ProductName = @ProductName, 
		SupplierID = @SupplierID, 
		CategoryID = @CategoryID, 
		QuantityPerUnit = @QuantityPerUnit, 
		UnitPrice = @UnitPrice, 
		UnitsInStock = @UnitsInStock, 
		UnitsOnOrder = @UnitsOnOrder, 
		ReorderLevel = @ReorderLevel, 
		Discontinued = @Discontinued
	WHERE ProductID = @ProductID
END

EXEC usp_Products_Update @ProductName = 'Coca Cola',
						 @SupplierID = 1,
						 @CategoryID = 1,
						 @UnitPrice = 7,
						 @UnitsInStock = 50,
						 @UnitsOnOrder = 0,
						 @Discontinued = 1,
						 @ProductID = 78

SELECT * FROM Products WHERE ProductName LIKE 'Coca%'