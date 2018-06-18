--konverzija podataka

SELECT CAST(SYSDATETIME() AS nvarchar(30)); -- 2018-06-04 17:29:23.6914842

SELECT CONVERT(varchar(8), SYSDATETIME(), 112); --20180614

SELECT CONVERT(char(8), 0x4E616d65, 0) AS 'Stil 0, binarni u tekstualni'; --Name

SELECT PARSE('Monday, 13 December 2010' AS datetime2 USING 'en-US');-- 2010-12-13 00:00:00.0000000