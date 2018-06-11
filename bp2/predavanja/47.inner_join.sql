USE NORTHWND
GO
SELECT C.ContactName, O.OrderID
FROM Customers AS C INNER JOIN Orders AS O
ON C.CustomerID = O.CustomerID