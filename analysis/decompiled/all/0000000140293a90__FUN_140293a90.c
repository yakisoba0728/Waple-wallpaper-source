// Function: FUN_140293a90
// Addr: 140293a90
// Size: 176 bytes


ulonglong FUN_140293a90(undefined8 param_1,int param_2,undefined8 param_3,int param_4,
                       undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  wchar_t **ppwVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  
  param_4 = param_4 - (int)param_3;
  param_2 = param_2 - (int)param_1;
  if (param_5 == (undefined4 *)0x0) {
    ppwVar3 = ___lc_locale_name_func();
    pwVar5 = ppwVar3[1];
    uVar1 = func_0x0001402d5c50();
  }
  else {
    pwVar5 = *(wchar_t **)(param_5 + 2);
    uVar1 = *param_5;
  }
  if (pwVar5 == (wchar_t *)0x0) {
    iVar2 = param_4;
    if (param_2 < param_4) {
      iVar2 = param_2;
    }
    uVar4 = func_0x0001404210c0(param_1,param_3,(longlong)iVar2);
    if (((int)uVar4 == 0) && (param_2 != param_4)) {
      uVar4 = 1;
      if (param_2 < param_4) {
        uVar4 = 0xffffffff;
      }
      return uVar4;
    }
  }
  else {
    iVar2 = FUN_140294a30(pwVar5,0x1000,param_1,param_2,param_3,param_4,uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
    uVar4 = (ulonglong)(iVar2 - 2);
  }
  return uVar4;
}

