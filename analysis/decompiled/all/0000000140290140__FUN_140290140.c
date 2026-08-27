// Function: FUN_140290140
// Addr: 140290140
// Size: 99 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

DWORD FUN_140290140(HANDLE param_1,undefined4 *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1404dc040 ^ (ulonglong)auStack_58;
  BVar1 = GetFileInformationByHandleEx(param_1,FileBasicInfo,local_38,0x28);
  if (BVar1 != 0) {
    *param_2 = local_18;
    return 0;
  }
  DVar2 = GetLastError();
  return DVar2;
}

