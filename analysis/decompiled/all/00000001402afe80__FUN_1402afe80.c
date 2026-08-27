// Function: FUN_1402afe80
// Addr: 1402afe80
// Size: 86 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1402afe80(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_48;
  local_28 = 0;
  iVar1 = FUN_140291bd0(local_20,param_2,&local_28,param_1 + 0x30);
  if (iVar1 != 1) {
    local_20[0] = param_3;
  }
  return local_20[0];
}

