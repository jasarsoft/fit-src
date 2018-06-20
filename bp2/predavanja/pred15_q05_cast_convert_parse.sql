--katovanje, konvertiranje i parsiranje

SELECT CAST(SYSDATETIME() AS nvarchar(30));

SELECT CONVERT(varchar(8), SYSDATETIME(), 112);

SELECT CONVERT(char(8), 0x4E616d65, 0) AS 'Stil 0, binarni u tekstualni';

SELECT PARSE('Monday, 13 December 2010' AS datetime2 USING 'en-US');
