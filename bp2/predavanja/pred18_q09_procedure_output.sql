--procedura sa izlaznim parametrima

USE TestDB
GO

CREATE PROC Sales.GetOrderCountByDueDate
@DueDate datetime, @OrderCount int OUTPUT
AS
	SELECT @OrderCount = COUNT(1)
	FROM Sales.SalesOrderHeader
	WHERE DueDate = @DueDate;
GO

DECLARE @DueDate datetime = '20140712';
DECLARE @OrderCount int;

EXEC Sales.GetOrderCountByDueDate @DueDate, @OrderCount OUTPUT;
SELECT @OrderCount;