--izmejan tebele
USE TestDB;

ALTER TABLE Kupci
ADD Email nvarchar(100) NOT NULL,
	Email2 nvarchar(100) NULL;
GO

ALTER TABLE Kupci
DROP COLUMN Email, Email2;
GO