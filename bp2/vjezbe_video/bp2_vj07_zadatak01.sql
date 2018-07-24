USE NORTHWND

CREATE PROCEDURE usp_Products_Insert
(
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
	INSERT INTO Products
	VALUES(@ProductName, @SupplierID, @CategoryID, @QuantityPerUnit, @UnitPrice, @UnitsInStock, @UnitsOnOrder, @ReorderLevel, @Discontinued)
END

EXEC usp_Products_Insert @ProductName = 'Coca Cola',
	@SupplierID = 1,
	@CategoryID = 1,
	@UnitPrice = 5,
	@UnitsInStock = 50,
	@UnitsOnOrder = 0,
	@Discontinued = 1


SELECT * FROM Products WHERE ProductName LIKE 'Coca%'