/*
	Vjezbe 5 Zadatak 7 AdventureWorks2014

	Kreirati upit koji prikazuje cetvrtu najvecu platu u preduzecu (po visini primanja). 
	Tabela EmployeePayHistory. 
*/

USE AdventureWorks2014

SELECT TOP 1 EPH.Rate AS '4 najveca plata'
FROM (select top 4 EPH.Rate
	  from HumanResources.EmployeePayHistory AS EPH
	  order by EPH.Rate DESC) AS EPH
ORDER BY EPH.Rate ASC