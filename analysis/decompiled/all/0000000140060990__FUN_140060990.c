// Function: FUN_140060990
// Addr: 140060990
// Size: 618 bytes


undefined4 * FUN_140060990(undefined4 *param_1,char *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int cchWideChar;
  size_t sVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  LPWSTR ***ppppWVar18;
  LPCSTR ***ppppCVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  LPCSTR **local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  LPWSTR **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  LPWSTR **local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  
  bVar10 = false;
  bVar14 = false;
  bVar12 = false;
  if (param_2 == (char *)0x0) {
    local_28 = 0;
    uStack_20 = 0;
    bVar13 = false;
    bVar11 = false;
    local_38 = (LPWSTR **)0x0;
    uStack_30 = 0;
    FUN_140016170(&local_38,&DAT_140474538,0);
    ppppWVar18 = &local_38;
    bVar10 = true;
    puVar16 = &local_28;
    puVar21 = &uStack_20;
  }
  else {
    local_78 = (LPCSTR **)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    sVar15 = strlen(param_2);
    FUN_140017480(&local_78,param_2,sVar15);
    bVar13 = true;
    bVar11 = true;
    if (local_68 == 0) {
LAB_140060a88:
      local_48 = 0;
      uStack_50 = 0;
      local_58 = (LPWSTR **)0x0;
      uStack_40 = 7;
    }
    else {
      ppppCVar19 = &local_78;
      if (0xf < local_60) {
        ppppCVar19 = (LPCSTR ***)local_78;
      }
      cchWideChar = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar19,(int)local_68,(LPWSTR)0x0,0);
      if (cchWideChar < 1) goto LAB_140060a88;
      local_28 = 0;
      uStack_20 = 0;
      local_38 = (LPWSTR **)0x0;
      uStack_30 = 0;
      FUN_1400167e0(&local_38,0,(longlong)cchWideChar);
      ppppWVar18 = &local_38;
      if (7 < uStack_20) {
        ppppWVar18 = (LPWSTR ***)local_38;
      }
      ppppCVar19 = &local_78;
      if (0xf < local_60) {
        ppppCVar19 = (LPCSTR ***)local_78;
      }
      MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar19,(int)local_68,(LPWSTR)ppppWVar18,cchWideChar);
      local_58 = local_38;
      uStack_50 = uStack_30;
      local_48 = local_28;
      uStack_40 = uStack_20;
    }
    ppppWVar18 = &local_58;
    puVar16 = &local_48;
    puVar21 = &uStack_40;
    bVar14 = true;
    bVar12 = true;
  }
  uVar2 = *(undefined4 *)ppppWVar18;
  uVar3 = *(undefined4 *)((longlong)ppppWVar18 + 4);
  uVar4 = *(undefined4 *)(ppppWVar18 + 1);
  uVar5 = *(undefined4 *)((longlong)ppppWVar18 + 0xc);
  uVar6 = *(undefined4 *)(ppppWVar18 + 2);
  uVar7 = *(undefined4 *)((longlong)ppppWVar18 + 0x14);
  uVar8 = *(undefined4 *)(ppppWVar18 + 3);
  uVar9 = *(undefined4 *)((longlong)ppppWVar18 + 0x1c);
  *puVar16 = 0;
  *(undefined2 *)ppppWVar18 = 0;
  *puVar21 = 7;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  if (bVar10) {
    bVar11 = bVar12;
    bVar13 = bVar14;
    if (7 < uStack_20) {
      uVar20 = uStack_20 * 2 + 2;
      ppppWVar18 = (LPWSTR ***)local_38;
      if (0xfff < uVar20) {
        ppppWVar18 = (LPWSTR ***)local_38[-1];
        if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppWVar18)))
        goto LAB_140060bf2;
        uVar20 = uStack_20 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppWVar18,uVar20);
    }
  }
  if (bVar11) {
    if (7 < uStack_40) {
      uVar20 = uStack_40 * 2 + 2;
      ppppWVar18 = (LPWSTR ***)local_58;
      if (0xfff < uVar20) {
        ppppWVar18 = (LPWSTR ***)local_58[-1];
        if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppWVar18)))
        goto LAB_140060bf2;
        uVar20 = uStack_40 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppWVar18,uVar20);
    }
  }
  if ((bVar13) && (0xf < local_60)) {
    uVar20 = local_60 + 1;
    ppppCVar19 = (LPCSTR ***)local_78;
    if (0xfff < uVar20) {
      ppppCVar19 = (LPCSTR ***)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppCVar19))) {
LAB_140060bf2:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar17 = (undefined4 *)(*pcVar1)();
        return puVar17;
      }
      uVar20 = local_60 + 0x28;
    }
    thunk_FUN_14028af80(ppppCVar19,uVar20);
  }
  return param_1;
}

