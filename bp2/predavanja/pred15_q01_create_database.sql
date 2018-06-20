--kreiranje base

USE master
GO

CREATE DATABASE Prodaja
ON
(	NAME = Prodaja_dat,
	FILENAME = 'C:\Software\base\db\Prodaja.mdf',
	SIZE = 100MB,
	MAXSIZE = 500MB,
	FILEGROWTH = 20%
)
LOG ON
(	NAME = Prodaja_log,
	FILENAME = 'C:\Software\base\log\Prodaja.ldf',
	SIZE = 20MB,
	MAXSIZE = UNLIMITED,
	FILEGROWTH = 10MB
);