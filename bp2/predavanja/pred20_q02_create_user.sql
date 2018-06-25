--kreiranje korisnika

CREATE USER Jasarsoft;

--kreiranje korisnika sa drugim imenom u odnosu na mapirani login
CREATE USER Student14 FOR LOGIN [notebook\jasarsoft];

--kreiranje korisnika sa default shemom
CREATE USER Korisnik14 FOR LOGIN [notebook\jasarsoft]
WITH DEFAULT_SCHEMA = Person;