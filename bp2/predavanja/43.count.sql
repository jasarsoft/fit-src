SELECT COUNT(*), COUNT(Weight),
		AVG(Weight), AVG(ISNULL(Weight, 0))
FROM Production.Product