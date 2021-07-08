@ECHO ON
ipconfig
ipconfig>D:\ipconfig.txt
cd %temp%
netsh wlan export profile key=clear
wmic path SoftwareLicensingService get OA3xOriginalProductKey
wmic path SoftwareLicensingService get OA3xOriginalProductKey>D:\key.txt
exit
PAUSE