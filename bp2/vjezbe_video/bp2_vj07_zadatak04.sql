USE NORTHWND

CREATE PROCEDURE usp_Products_DeleteConstraint
(
	@ProductID INT
)
AS
BEGIN
	DELETE FROM [Order Details]
	WHERE ProductID = @ProductID

	DELETE FROM Products
	WHERE ProductID = @ProductID
END

EXEC usp_Products_DeleteConstraint @ProductID = 11

SELECT * FROM Products WHERE ProductName LIKE 'Coca%'
SELECT * FROM [Order Details]