--kompozitni indeks

USE TestDB;

CREATE NONCLUSTERED INDEX Contact_LastName_FirstName
ON Person.Person (LastName ASC, FirstName ASC)

CREATE NONCLUSTERED INDEX EmployeeLoginID
ON HumanResources.Employee (LoginID ASC)
INCLUDE (BirthDate, NationalIDNumber);