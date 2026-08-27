// Function: FUN_1402b2460
// Addr: 1402b2460
// Size: 160 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1402b2460(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1404dc040 ^ (ulonglong)auStack_48;
  *param_5 = param_3;
  uVar2 = *param_2;
  iVar1 = FUN_140291bd0(local_28,0,param_2,param_1 + 0x10);
  if (iVar1 < 1) {
    uVar2 = 2;
  }
  else {
    lVar3 = (longlong)(iVar1 + -1);
    if (param_4 - *param_5 < lVar3) {
      *param_2 = uVar2;
      uVar2 = 1;
    }
    else {
      if (0 < iVar1 + -1) {
        FUN_1404210f0(*param_5,local_28,lVar3);
        *param_5 = *param_5 + lVar3;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

