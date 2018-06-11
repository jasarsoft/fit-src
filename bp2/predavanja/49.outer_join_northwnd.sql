USE NORTHWND
GO
SELECT C.ContactName, O.OrderID
FROM Customers AS C
LEFT OUTER JOIN Orders AS O
ON C.CustomerID = O.CustomerID