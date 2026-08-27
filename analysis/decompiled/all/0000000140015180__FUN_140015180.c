// Function: FUN_140015180
// Addr: 140015180
// Size: 170 bytes


bool FUN_140015180(undefined2 param_1,undefined4 param_2,WORD param_3)

{
  undefined8 uVar1;
  DWORDLONG dwlConditionMask;
  BOOL BVar2;
  _OSVERSIONINFOEXW local_148;
  
  local_148.dwMinorVersion = 0;
  local_148.dwBuildNumber = 0;
  local_148.dwPlatformId = 0;
  local_148.dwOSVersionInfoSize = 0x11c;
  local_148.dwMajorVersion = 0;
  FUN_1404217a0(local_148.szCSDVersion,0,0x100);
  local_148.wServicePackMajor = 0;
  local_148.wServicePackMinor = 0;
  local_148.wSuiteMask = 0;
  local_148.wProductType = '\0';
  local_148.wReserved = '\0';
  uVar1 = VerSetConditionMask(0,2,3);
  uVar1 = VerSetConditionMask(uVar1,1,3);
  dwlConditionMask = VerSetConditionMask(uVar1,0x20,3);
  local_148.dwMajorVersion._0_2_ = param_1;
  local_148.dwMajorVersion._2_2_ = 0;
  local_148._8_8_ = CONCAT44(local_148.dwBuildNumber,param_2) & 0xffffffff0000ffff;
  local_148.wServicePackMajor = param_3;
  BVar2 = VerifyVersionInfoW(&local_148,0x23,dwlConditionMask);
  return BVar2 != 0;
}

