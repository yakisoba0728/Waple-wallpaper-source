// Function: FUN_140015010
// Addr: 140015010
// Size: 143 bytes


undefined8 FUN_140015010(void)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined4 extraout_var;
  _OSVERSIONINFOEXW local_128;
  
  local_128.dwOSVersionInfoSize = 0x11c;
  local_128.dwMajorVersion = 10;
  local_128.dwMinorVersion = 0;
  local_128.dwBuildNumber = 22000;
  local_128.dwPlatformId = 0;
  FUN_1404217a0(local_128.szCSDVersion,0,0x100);
  local_128.wServicePackMajor = 0;
  local_128.wServicePackMinor = 0;
  local_128.wSuiteMask = 0;
  local_128.wProductType = '\0';
  local_128.wReserved = '\0';
  uVar2 = VerSetConditionMask(0,2,3);
  uVar2 = VerSetConditionMask(uVar2,1,3);
  dwlConditionMask = VerSetConditionMask(uVar2,4,3);
  BVar1 = VerifyVersionInfoW(&local_128,7,dwlConditionMask);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
}

