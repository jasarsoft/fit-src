--transaction log backup recovery

RESTORE LOG Northwnd
FROM NwindBacLog
WITH FILE = 2,
RECOVERY