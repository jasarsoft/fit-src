/*
	Vjezbe 5, Zadatak 3

	Primjer se radi na AdventureWorks2014 bazi podataka. Potrebno je prikazati informacije o 
	kreditnim katicama kupca. Izlaz treba da sadrzi sljedece kolone: ime i prezime kupca,
	email adresu, tip kartice, broj kartice i godinu isteka kartice. Uslovi su sljdeci:

	- prikazati samo Vista kartice koje isticu u 2008. godini
	- na listu ukljuciti i kupce koji nisu uradili niti jednu narudzbu koristeci karticu
	- eliminisati duplikate u rezultatima upita
	- izlaz sortirati abecedno po prezimenu kupca
*/

USE AdventureWorks2014

SELECT DISTINCT P.FirstName + ' ' + P.LastName AS 'Ime i prezime',
	EA.EmailAddress,
	CC.CardType,
	CC.CardNumber,
	CC.ExpYear
FROM Sales.Customer AS C JOIN Person.Person AS P
	ON C.PersonID = P.BusinessEntityID JOIN Person.EmailAddress AS EA
	ON P.BusinessEntityID = EA.BusinessEntityID JOIN Sales.PersonCreditCard AS PCC
	ON P.BusinessEntityID = PCC.BusinessEntityID JOIN Sales.CreditCard AS CC
	ON PCC.CreditCardID = CC.CreditCardID LEFT OUTER JOIN Sales.SalesOrderHeader AS SOH
	ON CC.CreditCardID = SOH.CreditCardID
WHERE CC.CardType LIKE 'Vista' AND CC.ExpYear = 2008