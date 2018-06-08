USE NORTHWND
GO
SELECT ProductID, ProductName, SupplierID, UnitPrice
FROM Products
WHERE (ProductName LIKE 'T%' OR ProductID = 46) AND UnitPrice > 16.00