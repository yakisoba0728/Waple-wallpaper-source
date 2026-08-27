// Function: FUN_140276f20
// Addr: 140276f20
// Size: 1254 bytes


longlong * FUN_140276f20(longlong param_1,char *param_2,char param_3)

{
  code *pcVar1;
  int cchWideChar;
  longlong *plVar2;
  size_t sVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  LPCSTR ***ppppCVar7;
  longlong lVar8;
  LPWSTR ***ppppWVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 ****ppppuVar12;
  longlong *plVar13;
  LPCSTR **local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  ulonglong local_d0;
  LPWSTR **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  LPWSTR **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 ***local_88 [3];
  ulonglong local_70;
  undefined1 local_68 [40];
  
  plVar2 = (longlong *)FUN_14028af20(0x120);
  plVar2[1] = 0;
  FUN_1404217a0(plVar2 + 3,0,0xa0);
  plVar2[0x1a] = 0;
  *(undefined8 *)((longlong)plVar2 + 0x111) = 0;
  *(undefined4 *)((longlong)plVar2 + 0x119) = 0;
  *(undefined2 *)((longlong)plVar2 + 0x11d) = 0;
  *(undefined1 *)((longlong)plVar2 + 0x11f) = 0;
  *plVar2 = (longlong)&DAT_140485fa0;
  plVar2[2] = (longlong)&DAT_140475e00;
  plVar2[0x17] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  plVar2[0x18] = 0;
  plVar2[0x19] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x1f] = 0;
  plVar2[0x20] = 0;
  plVar2[0x21] = 0;
  *(undefined1 *)(plVar2 + 0x22) = 0;
  FUN_140012ae0(plVar2,plVar2 + 3);
  *(undefined ***)((longlong)*(int *)(plVar2[2] + 4) + 0x10 + (longlong)plVar2) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(plVar2[2] + 4) + 0xc + (longlong)plVar2) =
       *(int *)(plVar2[2] + 4) + -0x10;
  *(undefined ***)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2) = &PTR_LAB_1404740a0;
  *(int *)((longlong)*(int *)(*plVar2 + 4) + -4 + (longlong)plVar2) = *(int *)(*plVar2 + 4) + -0x20;
  *(undefined ***)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2) = &PTR_LAB_140485fa8;
  *(int *)((longlong)*(int *)(*plVar2 + 4) + -4 + (longlong)plVar2) = *(int *)(*plVar2 + 4) + -0xb8;
  FUN_14004c570(plVar2 + 3);
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = (LPCSTR **)0x0;
  uStack_e0 = 0;
  sVar3 = strlen(param_2);
  FUN_140017480(&local_e8,param_2,sVar3);
  if (local_d8 == 0) {
LAB_14027713b:
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = (LPWSTR **)0x0;
    uStack_90 = 7;
  }
  else {
    ppppCVar7 = &local_e8;
    if (0xf < local_d0) {
      ppppCVar7 = (LPCSTR ***)local_e8;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar7,(int)local_d8,(LPWSTR)0x0,0);
    if (cchWideChar < 1) goto LAB_14027713b;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = (LPWSTR **)0x0;
    uStack_c0 = 0;
    FUN_1400167e0(&local_c8,0,(longlong)cchWideChar);
    ppppWVar9 = &local_c8;
    if (7 < uStack_b0) {
      ppppWVar9 = (LPWSTR ***)local_c8;
    }
    ppppCVar7 = &local_e8;
    if (0xf < local_d0) {
      ppppCVar7 = (LPCSTR ***)local_e8;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar7,(int)local_d8,(LPWSTR)ppppWVar9,cchWideChar);
    local_a8 = local_c8;
    uStack_a0 = uStack_c0;
    local_98 = local_b8;
    uStack_90 = uStack_b0;
  }
  if (0xf < local_d0) {
    uVar11 = local_d0 + 1;
    ppppCVar7 = (LPCSTR ***)local_e8;
    if (0xfff < uVar11) {
      ppppCVar7 = (LPCSTR ***)local_e8[-1];
      if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)ppppCVar7))) goto LAB_1402773fe;
      uVar11 = local_d0 + 0x28;
    }
    thunk_FUN_14028af80(ppppCVar7,uVar11);
  }
  plVar13 = (longlong *)(param_1 + 8);
  if (7 < *(ulonglong *)(param_1 + 0x20)) {
    plVar13 = (longlong *)*plVar13;
  }
  local_b8 = 0;
  local_c8 = (LPWSTR **)0x0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  FUN_140016170(&local_c8,plVar13,*(undefined8 *)(param_1 + 0x18));
  ppppWVar9 = &local_a8;
  if (7 < uStack_90) {
    ppppWVar9 = (LPWSTR ***)local_a8;
  }
  FUN_140005c80(&local_c8,ppppWVar9);
  FUN_140016600(local_88,&local_c8);
  if (7 < uStack_b0) {
    uVar11 = uStack_b0 * 2 + 2;
    ppppWVar9 = (LPWSTR ***)local_c8;
    if (0xfff < uVar11) {
      ppppWVar9 = (LPWSTR ***)local_c8[-1];
      if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppWVar9))) goto LAB_1402773fe;
      uVar11 = uStack_b0 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar9,uVar11);
  }
  FUN_140016600(&local_e8,local_88);
  uVar4 = FUN_14003fe80(&local_e8);
  FUN_140016600(&local_c8,uVar4);
  FUN_140016770(&local_e8);
  if (param_3 != '\0') {
    FUN_140016600(local_68,&local_c8);
    FUN_1400509f0(local_68,&local_e8);
    FUN_140016770(local_68);
    FUN_140016600(local_68,&local_c8);
    FUN_14003b970(&local_e8,local_68,3);
    FUN_140016770(local_68);
  }
  ppppuVar12 = local_88;
  if (7 < local_70) {
    ppppuVar12 = (undefined8 ****)local_88[0];
  }
  uVar4 = 0x25;
  if (param_3 != '\0') {
    uVar4 = 0x22;
  }
  lVar5 = FUN_14004c4c0(plVar2 + 3,ppppuVar12,uVar4);
  lVar8 = (longlong)*(int *)(*plVar2 + 4);
  if (lVar5 == 0) {
    uVar10 = 6;
    if (*(longlong *)(lVar8 + 0x48 + (longlong)plVar2) != 0) {
      uVar10 = 2;
    }
    plVar13 = (longlong *)(ulonglong)(uVar10 | *(uint *)(lVar8 + 0x10 + (longlong)plVar2));
  }
  else {
    plVar13 = (longlong *)&DAT_00000004;
    if (*(longlong *)(lVar8 + 0x48 + (longlong)plVar2) != 0) {
      plVar13 = (longlong *)0x0;
    }
  }
  FUN_140013b50((undefined1 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2),plVar13,0);
  if (plVar2[0x13] == 0) {
    FUN_1400c1610();
    thunk_FUN_14028af80(plVar2,0x120);
    plVar2 = (longlong *)0x0;
  }
  else if (param_3 == '\0') {
    piVar6 = (int *)FUN_14004a840(plVar2,&local_e8);
    *(int *)(plVar2 + 0x23) = piVar6[2] + *piVar6;
    FUN_14004a920(plVar2,0,0);
  }
  else {
    FUN_14004a920(plVar2,0,2);
    piVar6 = (int *)FUN_14004a840(plVar2,&local_e8);
    *(int *)(plVar2 + 0x23) = piVar6[2] + *piVar6;
    FUN_14004a920(plVar2,0,0);
    FUN_1400f1240(plVar2 + 2,0,0);
  }
  FUN_140016770(&local_c8);
  FUN_140016770(local_88);
  if (7 < uStack_90) {
    uVar11 = uStack_90 * 2 + 2;
    ppppWVar9 = (LPWSTR ***)local_a8;
    if (0xfff < uVar11) {
      ppppWVar9 = (LPWSTR ***)local_a8[-1];
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppWVar9))) {
LAB_1402773fe:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        plVar2 = (longlong *)(*pcVar1)();
        return plVar2;
      }
      uVar11 = uStack_90 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar9,uVar11);
  }
  return plVar2;
}

