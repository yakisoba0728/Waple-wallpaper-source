// Function: FUN_140100ac0
// Addr: 140100ac0
// Size: 554 bytes


void FUN_140100ac0(longlong param_1,char *param_2,char param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  BOOL BVar4;
  size_t sVar5;
  LPCSTR ***ppppCVar6;
  LPWSTR ***ppppWVar7;
  ulonglong uVar8;
  LPWSTR **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  LPCSTR **local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  LPWSTR **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  
  local_68 = (LPCSTR **)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  sVar5 = strlen(param_2);
  FUN_140017480(&local_68,param_2,sVar5);
  if (local_58 == 0) {
LAB_140100bae:
    local_78 = 0;
    uStack_80 = 0;
    local_88 = (LPWSTR **)0x0;
    uStack_70 = 7;
  }
  else {
    ppppCVar6 = &local_68;
    if (0xf < local_50) {
      ppppCVar6 = (LPCSTR ***)local_68;
    }
    iVar3 = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar6,(int)local_58,(LPWSTR)0x0,0);
    if (iVar3 < 1) goto LAB_140100bae;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = (LPWSTR **)0x0;
    uStack_40 = 0;
    FUN_1400167e0(&local_48,0,(longlong)iVar3);
    ppppWVar7 = &local_48;
    if (7 < uStack_30) {
      ppppWVar7 = (LPWSTR ***)local_48;
    }
    ppppCVar6 = &local_68;
    if (0xf < local_50) {
      ppppCVar6 = (LPCSTR ***)local_68;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar6,(int)local_58,(LPWSTR)ppppWVar7,iVar3);
    local_78 = local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    uStack_80 = uStack_40;
  }
  if (0xf < local_50) {
    uVar8 = local_50 + 1;
    ppppCVar6 = (LPCSTR ***)local_68;
    if (0xfff < uVar8) {
      ppppCVar6 = (LPCSTR ***)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppCVar6))) goto LAB_140100ce2;
      uVar8 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(ppppCVar6,uVar8);
  }
  if (((param_3 == '\0') &&
      (puVar1 = *(undefined8 **)(param_1 + 0x160), puVar1 != (undefined8 *)0x0)) &&
     (*(longlong *)(param_1 + 0x2b0) == 0)) {
    ppppWVar7 = &local_88;
    if (7 < uStack_70) {
      ppppWVar7 = (LPWSTR ***)local_88;
    }
    iVar3 = (**(code **)*puVar1)(puVar1,ppppWVar7);
    if (iVar3 < 0) {
      if (*(longlong **)(param_1 + 0x160) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x160) + 0x20))();
        *(undefined8 *)(param_1 + 0x160) = 0;
      }
      goto LAB_140100c5c;
    }
  }
  else {
LAB_140100c5c:
    ppppWVar7 = &local_88;
    if (7 < uStack_70) {
      ppppWVar7 = (LPWSTR ***)local_88;
    }
    FUN_140100cf0(param_1,ppppWVar7);
  }
  BVar4 = IsWindow(*(HWND *)(param_1 + 0x168));
  if (BVar4 != 0) {
    InvalidateRect(*(HWND *)(param_1 + 0x168),(RECT *)0x0,0);
  }
  if (7 < uStack_70) {
    uVar8 = uStack_70 * 2 + 2;
    ppppWVar7 = (LPWSTR ***)local_88;
    if (0xfff < uVar8) {
      ppppWVar7 = (LPWSTR ***)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppWVar7))) {
LAB_140100ce2:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uStack_70 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar7,uVar8);
  }
  return;
}

