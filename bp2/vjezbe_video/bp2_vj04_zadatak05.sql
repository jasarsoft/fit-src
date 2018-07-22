/*
	Vjezbe 4, Zadatak 5

	Za kupce sa imenom i prezimenom 'Jordan Green' prikazati tipove i brojeve kartica
	koje posjeduje, te narudzbe koje je uradio koristeci kartice (broj narudzbe, datum
	narudzbe)
	AdventureWorks2012
*/

USE AdventureWorks2014

SELECT P.FirstName + ' ' + P.LastName, CC.CardType, CC.CardNumber, SOH.SalesOrderNumber, SOH.OrderDate
FROM Sales.Customer AS C INNER JOIN Person.Person AS P
	ON C.PersonID = P.BusinessEntityID INNER JOIN Sales.PersonCreditCard AS PCC
	ON P.BusinessEntityID = PCC.BusinessEntityID INNER JOIN Sales.CreditCard AS CC
	ON PCC.CreditCardID = CC.CreditCardID INNER JOIN Sales.SalesOrderHeader AS SOH
	ON CC.CreditCardID = SOH.CreditCardID
WHERE P.FirstName = 'Jordan' AND P.LastName = 'Green'