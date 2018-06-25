--windows lokalni ili domenski nalog

CREATE LOGIN [notebook\NewUser]
FROM WINDOWS
WITH DEFAULT_DATABASE = AdventureWorks2014;

--napomena: kreirati novi account imena NewUser;