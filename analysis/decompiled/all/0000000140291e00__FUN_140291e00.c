// Function: FUN_140291e00
// Addr: 140291e00
// Size: 222 bytes


ulonglong FUN_140291e00(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  wchar_t **ppwVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  byte local_res18;
  undefined1 uStackX_19;
  
  uVar7 = (ulonglong)(int)param_1;
  if (param_2 == (undefined4 *)0x0) {
    ppwVar4 = ___lc_locale_name_func();
    pwVar8 = ppwVar4[2];
    uVar1 = func_0x0001402d5c20();
  }
  else {
    pwVar8 = *(wchar_t **)(param_2 + 6);
    uVar1 = *param_2;
  }
  if (pwVar8 == (wchar_t *)0x0) {
    if (0x40 < (int)param_1) {
      uVar2 = param_1 + 0x20;
      if (0x5a < (int)param_1) {
        uVar2 = param_1;
      }
      uVar7 = (ulonglong)uVar2;
    }
    goto LAB_140291e44;
  }
  if (param_1 < 0x100) {
    if (param_2 != (undefined4 *)0x0) {
      if ((*(byte *)(*(longlong *)(param_2 + 2) + uVar7 * 2) & 1) == 0) goto LAB_140291e44;
      goto LAB_140291e7a;
    }
    iVar3 = FUN_1402d59c0(param_1);
    if (iVar3 == 0) goto LAB_140291e44;
code_r0x000140291eb3:
    lVar5 = FUN_1402d6738();
    uVar6 = *(ushort *)(lVar5 + (ulonglong)((int)param_1 >> 8 & 0xff) * 2) & 0x8000;
  }
  else {
    if (param_2 == (undefined4 *)0x0) goto code_r0x000140291eb3;
LAB_140291e7a:
    uVar6 = *(ushort *)(*(longlong *)(param_2 + 2) + ((longlong)uVar7 >> 8 & 0xffU) * 2) >> 0xf;
  }
  if (uVar6 == 0) {
    uVar9 = 1;
    local_res11 = 0;
    local_res10 = (char)param_1;
  }
  else {
    uVar9 = 2;
    local_res12 = 0;
    local_res10 = (char)(param_1 >> 8);
    local_res11 = (char)param_1;
  }
  iVar3 = func_0x0001402946c0(pwVar8,0x100,&local_res10,uVar9,&local_res18,3,uVar1,1);
  if (iVar3 != 0) {
    uVar7 = (ulonglong)local_res18;
    if (iVar3 != 1) {
      uVar7 = (ulonglong)CONCAT11(local_res18,uStackX_19);
    }
    return uVar7;
  }
LAB_140291e44:
  return uVar7 & 0xffffffff;
}

