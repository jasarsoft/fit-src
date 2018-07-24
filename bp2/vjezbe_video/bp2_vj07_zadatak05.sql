USE NORTHWND

CREATE PROCEDURE usp_OrderDetails_Insert
(
	@OrderId INT,
	@ProductID INT,
	@UnitPrice MONEY,
	@Quantity SMALLINT,
	@Discount REAL
)
AS
BEGIN
	INSERT INTO [Order Details]
	VALUES (@OrderId, @ProductID, @UnitPrice, @Quantity, @Discount)

	UPDATE Products
	SET UnitsInStock = UnitsInStock - @Quantity
	WHERE ProductID = @ProductID
END

EXEC usp_OrderDetails_Insert 10249, 1, 2, 5, 0.1


SELECT * FROM Orders
SELECT * FROM Products WHERE ProductID = 1
SELECT * FROM [Order Details] WHERE OrderID = 10249