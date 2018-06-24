--triger na nivou tabele

USE TestDB
GO

CREATE TRIGGER TR_ProductReview_Update
ON Production.ProductReview
AFTER UPDATE AS
BEGIN
	SET NOCOUNT ON;
	UPDATE PR
	SET PR.ModifiedDate = SYSDATETIME()
	FROM Production.ProductReview AS PR
	INNER JOIN inserted AS I
	ON I.ProductReviewID = PR.ProductReviewID;
END;
