--potrebno je u postavkama servisa postaviti logiranje za SQLServer Sys Account
--detaljnije na

/*
An old post, but here is a step by step that worked for SQL Server 2014 running under windows 7:
	Control Panel ->
	System and Security ->
	Administrative Tools ->
	Services ->
	Double Click SQL Server (SQLEXPRESS) -> right click, Properties
	Select Log On Tab
	Select "Local System Account" (the default was some obtuse Windows System account)
	-> OK
	right click, Stop
	right click, Start

	https://stackoverflow.com/questions/18286765/sql-server-operating-system-error-5-5access-is-denied
*/

CREATE DATABASE Prodaja ON
	(NAME=Prodaja_dat, FILENAME='C:\Software\base\db\Prodaja.mdf', SIZE=100MB, MAXSIZE=500MB, FILEGROWTH=20%)
LOG ON
	(NAME=Prodaja_log, FILENAME='C:\Software\base\log\Prodaja.ldf', SIZE=20MB, MAXSIZE=UNLIMITED, FILEGROWTH=10MB);
