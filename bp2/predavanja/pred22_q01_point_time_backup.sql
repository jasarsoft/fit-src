--point in time recovery

RESTORE LOG Northwnd
FROM NwindBacLog
WITH FILE = 2,
RECOVERY,
STOPAT = '15.05.2016 1:00 AM';