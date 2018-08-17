/*
	Vjezbe 5 Zadatak 8 AdventureWorks2014

	Kreirati upit koji prikazuje ukupnu kolicinu utrosenog novca po kupcu. Izlaz treba da sadrzi sljedece 
	kolone: ime i prezime kupca, tip kreditne kartice, broj kartice i ukupno utroseno. Pri tome voditi racuna 
	da izlaz sadrzi: 
	a) Samo troskove koje su kupci napravili koristeci kredite kartice, 
	b) Samo one kupce koji imaju vise od jedne kartice,  
	c) Prikazati i one kartice sa kojima kupac nije obavljao narudzbe, 
	d) Ukoliko vrijedost kolone utroseno bude nepoznata, zamijeniti je brojem 0 (nula), 
	e) Izlaz treba biti sortiran po prezimenu kupca abecedno i kolicini utrosenog novca opadajucim 
	redoslijedom. 

	Tabele: Customer, Person, PersonCreditCard, CreditCard, SalesOrderHeader, SalesOrderDetail 
	Napomena: Za prikaz rezultata upita izvrsiti skriptu AWCreditCardsScript. 
*/

USE AdventureWorks2014

SELECT P.FirstName + ' ' + P.LastName AS 'Ime prezime',
	CC.CardType AS 'Tip kartice',
	SOH.TotalDue AS 'Utroseno'
FROM Person.Person AS P INNER JOIN Sales.PersonCreditCard AS PCC
	ON P.BusinessEntityID = PCC.BusinessEntityID INNER JOIN Sales.CreditCard AS CC
	ON PCC.CreditCardID = CC.CreditCardID INNER JOIN Sales.Customer AS C
	ON P.BusinessEntityID = C.PersonID INNER JOIN Sales.SalesOrderHeader AS SOH
	ON C.CustomerID = SOH.CustomerID INNER JOIN Sales.SalesOrderDetail AS SOD
	ON SOH.SalesOrderID = SOD.SalesOrderID
WHERE SOH.CreditCardID IS NOT NULL
GROUP BY P.FirstName, P.LastName, CC.CardType, SOH.TotalDue