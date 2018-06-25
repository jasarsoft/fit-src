/--kreiranje logina

/-- Windows lokalni ili domenski login
/-- naziv masine/naziv korisnika

CREATE LOGIN [notebook\jasarsoft]
FROM WINDOWS
WITH DEFAULT_DATABASE = AdventureWorks2014;

--SQL Server login
CREATE LOGIN Selver
WITH PASSWORD = 'Pa$$w0rd',
DEFAULT_DATABASE = TestDB;

CREATE LOGIN Imran
WITH PASSWORD = 'password',
DEFAULT_DATABASE = AdventureWorks2014,
CHECK_EXPIRATION = OFF,
CHECK_POLICY = OFF;

--izmjena
ALTER LOGIN Selver WITH PASSWORD = 'NewPa$$w0rd'

--brisanje
DROP LOGIN [notebook\jasarsoft];