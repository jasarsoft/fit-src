--unique nonclustered index

USE TestDB;

CREATE UNIQUE NONCLUSTERED INDEX UQ_EmployeeLoginID
ON HumanResources.Employee (LoginID ASC)