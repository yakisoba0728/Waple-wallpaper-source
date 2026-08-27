// Function: FUN_140275c30
// Addr: 140275c30
// Size: 696 bytes


void FUN_140275c30(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  LPWSTR pWVar6;
  LPCSTR ***ppppCVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  LPCSTR **local_68 [2];
  int local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (**(code **)(*param_1 + 0x40))(param_1,local_68,param_2);
  if (CONCAT44(uStack_54,local_58) == 0) {
LAB_140275ce3:
    local_38 = 0;
    uStack_40 = 0;
    local_48 = (LPWSTR)0x0;
    uStack_30 = 7;
  }
  else {
    ppppCVar7 = local_68;
    if (0xf < local_50) {
      ppppCVar7 = (LPCSTR ***)local_68[0];
    }
    iVar4 = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar7,local_58,(LPWSTR)0x0,0);
    if (iVar4 < 1) goto LAB_140275ce3;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = (LPWSTR)0x0;
    uStack_40 = 0;
    FUN_1400167e0(&local_48,0,(longlong)iVar4);
    pWVar6 = (LPWSTR)&local_48;
    if (7 < uStack_30) {
      pWVar6 = local_48;
    }
    ppppCVar7 = local_68;
    if (0xf < local_50) {
      ppppCVar7 = (LPCSTR ***)local_68[0];
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar7,local_58,pWVar6,iVar4);
  }
  cVar3 = FUN_140060f20(&local_48);
  if (7 < uStack_30) {
    uVar9 = uStack_30 * 2 + 2;
    pWVar6 = local_48;
    if (0xfff < uVar9) {
      pWVar6 = *(LPWSTR *)(local_48 + -4);
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pWVar6))) goto LAB_140275ee0;
      uVar9 = uStack_30 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pWVar6,uVar9);
  }
  if (cVar3 != '\0') {
    if (CONCAT44(uStack_54,local_58) == 0) {
LAB_140275def:
      local_38 = 0;
      uStack_40 = 0;
      local_48 = (LPWSTR)0x0;
      uStack_30 = 7;
    }
    else {
      ppppCVar7 = local_68;
      if (0xf < local_50) {
        ppppCVar7 = (LPCSTR ***)local_68[0];
      }
      iVar4 = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar7,local_58,(LPWSTR)0x0,0);
      if (iVar4 < 1) goto LAB_140275def;
      local_38 = 0;
      uStack_30 = 0;
      local_48 = (LPWSTR)0x0;
      uStack_40 = 0;
      FUN_1400167e0(&local_48,0,(longlong)iVar4);
      pWVar6 = (LPWSTR)&local_48;
      if (7 < uStack_30) {
        pWVar6 = local_48;
      }
      ppppCVar7 = local_68;
      if (0xf < local_50) {
        ppppCVar7 = (LPCSTR ***)local_68[0];
      }
      MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar7,local_58,pWVar6,iVar4);
    }
    local_28 = (undefined4)local_48;
    uStack_24 = local_48._4_4_;
    uStack_20 = (undefined4)uStack_40;
    uStack_1c = uStack_40._4_4_;
    local_18 = (undefined4)local_38;
    uStack_14 = local_38._4_4_;
    uStack_10 = (undefined4)uStack_30;
    uStack_c = uStack_30._4_4_;
    lVar5 = _Xtime_get_ticks();
    FUN_140016600(&local_48,&local_28);
    pWVar6 = (LPWSTR)&local_48;
    if (7 < uStack_30) {
      pWVar6 = local_48;
    }
    FUN_140290a20(lVar5 + 0x19db1ded53e8000,pWVar6);
    FUN_140016770(&local_48);
    uVar9 = CONCAT44(uStack_c,uStack_10);
    if (7 < uVar9) {
      lVar2 = CONCAT44(uStack_24,local_28);
      uVar8 = uVar9 * 2 + 2;
      lVar5 = lVar2;
      if (0xfff < uVar8) {
        lVar5 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar5) - 8U) goto LAB_140275ee0;
        uVar8 = uVar9 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar5,uVar8);
    }
  }
  if (0xf < local_50) {
    uVar9 = local_50 + 1;
    ppppCVar7 = (LPCSTR ***)local_68[0];
    if (0xfff < uVar9) {
      ppppCVar7 = (LPCSTR ***)local_68[0][-1];
      if (0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)ppppCVar7))) {
LAB_140275ee0:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar9 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(ppppCVar7,uVar9);
  }
  return;
}

