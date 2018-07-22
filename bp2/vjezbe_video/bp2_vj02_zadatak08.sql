/*
	Vjezbe Predavanje 2, Zadatak 8

	Kompanija je odlucila da svojim zaposlenicima dodjeli meil adrese.
	Za tu svrhu ce iskoristit postojece podatke iz baze podataka.
	Izlaz treba biti u formatu tri nove konolne: Email, Lozinka, Starto zaposlenika.
	(Northwind)

	Email se formaira od podatka u kolonama: LastName, FirstName, City i to sljedecem
	formatu: LastName.FirstName@City.com (sve malim slovima)

	Lozinka se formira od podataka iz kolona: Notes, Title i Addess na sljedeci nacin
	Spajanjem kolona (Notes, Title i Address). Sljedeci korak jeste da se sadrzaj
	spajanja okrene obrnuto (npr. dbms2013 - 3102smbd). Nakon toga iz dobivenog stringa
	preskacemo prvih 10 karaktera i uzimamo sljedecih 15. Na pojedinim mjestima ce se
	pojaviti razmak, isti je potrebno zamjeniti sa znakom #. Uzeti zadnjih 8 karaktera.

	Starost se formira na osnovu kolone BirthDate i trenutnog datuma.
*/

USE NORTHWND

SELECT LOWER(LastName + '.' + FirstName + '@' + City + '.com') AS Email,
	   RIGHT(REPLACE(SUBSTRING(REVERSE(CONVERT(nvarchar(MAX), Notes) + Title + Address), 10, 15), ' ', '#'), 8) AS Lozinka,
	   DATEDIFF(YEAR, BirthDate, GETDATE()) AS 'Starost'
FROM Employees

