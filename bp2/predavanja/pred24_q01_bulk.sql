--import podataka

USE AdventureWorks2014;

BULK INSERT AdventureWorks2014.Sales.OrderDetail
FROM 'C:\test\arhiva.txt'
WITH
(
	FIELDTERMINATOR = '|',
	ROWTERMINATOR = '|\n'
);