/*
	Vjezbe 5 Zadatak 1 AdventureWorks2014

	Kreirati upit koji prikazuje kreditne kartice kojima je placeno vise od 20 narudzbi. U listu 
	ukljuciti ime i prezime vlasnika kartice, tip kartice, broj kartice, ukupan iznos placen karticom.
*/

USE AdventureWorks2014

SELECT P.FirstName + ' ' + P.LastName AS 'Ime i prezime',
	CC.CardType AS 'Tip kartice',
	CC.CardNumber AS 'Broj kartice',
	SUM(SOH.TotalDue) AS 'Iznos placen karticom',
	SUM(SOD.OrderQty) AS 'Broj narudzbi'
FROM Person.Person AS P INNER JOIN Sales.PersonCreditCard AS PCC
	ON P.BusinessEntityID = PCC.BusinessEntityID INNER JOIN Sales.CreditCard AS CC
	ON PCC.CreditCardID = CC.CreditCardID INNER JOIN Sales.SalesOrderHeader AS SOH
	ON CC.CreditCardID = SOH.CreditCardID INNER JOIN Sales.SalesOrderDetail AS SOD
	ON SOH.SalesOrderID = SOD.SalesOrderID
GROUP BY P.FirstName, P.LastName, CC.CardType, CC.CardNumber
HAVING SUM(SOD.OrderQty) > 20
ORDER BY SUM(SOH.TotalDue) DESC

SELECT (SELECT p.FirstName + ' ' + p.LastName FROM Person.Person as p
			WHERE p.BusinessEntityID = pcc.BusinessEntityID) as Name, 
			(SELECT cc.CardType FROM Sales.CreditCard as cc
				WHERE cc.CreditCardID = pcc.CreditCardID) as [Credit card type],
				(SELECT cc.CardNumber FROM Sales.CreditCard as cc
					WHERE cc.CreditCardID = pcc.CreditCardID) as [Credit card number],
						SUM(soh.TotalDue) as [Total money spent]
FROM Sales.PersonCreditCard as pcc INNER JOIN Sales.SalesOrderHeader as soh
ON pcc.CreditCardID = soh.CreditCardID
WHERE 20 < (SELECT SUM(sod.OrderQty) FROM Sales.SalesOrderDetail as sod
				WHERE sod.SalesOrderID = soh.SalesOrderID)
GROUP BY pcc.BusinessEntityID, pcc.CreditCardID
ORDER BY SUM(soh.TotalDue) DESC