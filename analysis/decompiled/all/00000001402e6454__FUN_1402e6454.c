// Function: FUN_1402e6454
// Addr: 1402e6454
// Size: 106 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1402e6454(wchar_t *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_1404dc040 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1402dc1dc(param_1,0x59,local_28);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = wcsncmp(local_28,param_1,9);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

