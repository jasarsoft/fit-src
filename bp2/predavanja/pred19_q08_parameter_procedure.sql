--procedura sa parametrima

USE TestDB
GO

CREATE PROCEDURE Sales.OrdersByDueDateAndStatus
	@DueDate datetime, @Status tinyint = 5
AS
	SELECT SalesOrderID, OrderDate, CustomerID
	FROM Sales.SalesOrderHeader
	WHERE DueDate = @DueDate
	AND [Status] = @Status;
GO

EXEC Sales.OrdersByDueDateAndStatus '20140712', 5;
EXEC Sales.OrdersByDueDateAndStatus '20131115';
EXEC Sales.OrdersByDueDateAndStatus @DueDate = '20110612', @Status = 5;