--fragmentacija

USE TestDB;

-- <=30%
ALTER INDEX EmployeeLoginID ON HumanResources.Employee
REORGANIZE

-- > 30%
ALTER INDEX EmployeeLoginID ON HumanResources.Employee
REBUILD