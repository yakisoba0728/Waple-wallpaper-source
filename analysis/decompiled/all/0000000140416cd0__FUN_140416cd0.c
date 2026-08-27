// Function: FUN_140416cd0
// Addr: 140416cd0
// Size: 150 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140416cd0(char *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  char local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  if (((param_1 == (char *)0x0) || (param_2 == 0)) || (*param_1 == '\0')) {
    return 0;
  }
  if (-1 < (int)param_2) {
    uVar1 = 0x3f;
    if ((int)param_2 < 0x40) {
      uVar1 = param_2;
    }
    FUN_1404210f0(local_58,param_1,uVar1);
    if (0x3f < (ulonglong)uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402ed4d0();
    }
    local_58[uVar1] = '\0';
    param_1 = local_58;
  }
  lVar2 = FUN_1403ea650(param_1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  return uVar3;
}

