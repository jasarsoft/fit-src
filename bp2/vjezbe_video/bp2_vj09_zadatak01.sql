--DDL, DML
/*
	Kreirati bazu podataka sa imenom StudentskaSluzba.
	Lokacija za DATA I LOG je:
	C:\Program Files\Microsoft SQL Server\MSSQL11.MSSQLSERVER\MSSQL\DATA

	Baza treba da se sastoji od jednog DATA i jedno LOG fajla sa sljedecim parametrima
	- DATA (velicina 5MB, maksimalna velicina neogranicena, povecanje 10%)
	- LOG (velicina 2MB, maksimalna velicina neogranicena, povecanje 10%)

*/

CREATE DATABASE [StudentskaSluzba] ON PRIMARY
(
	NAME = N'StudentskaSluzba',
	FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL12.MSSQLSERVER\MSSQL\DATA\StudentskaSluzba.mdf',
	SIZE = 5 MB,
	MAXSIZE = UNLIMITED,
	FILEGROWTH = 10%
)
LOG ON
(
	NAME = N'StudentskaSluzba_log',
	FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL12.MSSQLSERVER\MSSQL\DATA\StudentskaSluzba_log.ldf',
	SIZE = 2 MB,
	MAXSIZE = UNLIMITED,
	FILEGROWTH = 10%
)