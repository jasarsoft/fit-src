
USE TestDB;
GO

CREATE NONCLUSTERED INDEX Contact_LastName_FirstName
ON Person.Person (LastName ASC, FirstName ASC)
GO

CREATE NONCLUSTERED INDEX Employee_LoginID
ON HumanResources.Employee (LoginID ASC)
INCLUDE (BusinessEntityID, NationalIDNumber)
GO