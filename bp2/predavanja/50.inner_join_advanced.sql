USE NORTHWND
GO
SELECT O.OrderDate, P.ProductName
FROM Orders AS O
INNER JOIN [Order Details] AS OD
	ON O.OrderID = OD.OrderID
INNER JOIN Products AS P
	ON OD.ProductID = P.ProductID
WHERE O.OrderDate = '7/8/96'