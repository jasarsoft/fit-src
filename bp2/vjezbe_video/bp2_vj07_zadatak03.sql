USE NORTHWND

CREATE PROCEDURE usp_Products_Delete
(
	@ProductID INT
)
AS
BEGIN
	DELETE FROM Products
	WHERE ProductID = @ProductID
END

EXEC usp_Products_Delete @ProductID = 78

SELECT * FROM Products WHERE ProductName LIKE 'Coca%'