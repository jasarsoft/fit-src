/*
	Vjezbe 7 Zadatak 1

	1. Kreirati novu bazu podataka i imenovati imenovati vasim brojem indexa.  
 
	Postavke za data fajl:  
	- Lokacija: C:\BP2\Data 
	- Velicina: inicijalno 5 MB, 
	- Maksimalna velicina: Bez ogranicenja 
	- Uveæanje: 10% 
 
	Postavke za log fajl: 
	- Lokacija: C:\BP2\Log 
	- Velicina: inicijalno 2 MB,  maksimalna velicina neogranicena 
	- Maksimalna velicina: Bez ogranicenja 
	- Uvecanje: 5% 
*/

CREATE DATABASE Edin ON PRIMARY
(
	NAME = N'EdinDB',
	FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL12.MSSQLSERVER\MSSQL\DATA\EdinDB.mdf',
	SIZE = 5 MB,
	MAXSIZE = UNLIMITED,
	FILEGROWTH = 10%
)
LOG ON
(
	NAME = N'EdinLOG',
	FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL12.MSSQLSERVER\MSSQL\DATA\EdinLOG.ldf',
	SIZE = 2 MB,
	MAXSIZE = UNLIMITED,
	FILEGROWTH = 5%
)