// Function: FUN_14012bc00
// Addr: 14012bc00
// Size: 713 bytes


undefined8 FUN_14012bc00(HMONITOR param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  LPCWSTR ***ppppWVar6;
  longlong lVar7;
  LPSTR ***ppppCVar8;
  ulonglong uVar9;
  LPCWSTR **local_198;
  undefined8 uStack_190;
  longlong local_188;
  ulonglong local_180;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  LPSTR **local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulonglong local_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulonglong local_128;
  longlong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulonglong local_108;
  HMONITOR local_100;
  undefined4 local_f8;
  LPSTR **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  LPSTR **local_c8;
  undefined8 uStack_c0;
  tagMONITORINFO local_a8;
  undefined1 local_80 [80];
  
  local_a8.cbSize = 0x68;
  BVar2 = GetMonitorInfoW(param_1,&local_a8);
  if (BVar2 == 0) {
    return 1;
  }
  uVar5 = 0;
  local_130 = 0;
  local_110 = 0;
  uStack_158 = 0;
  local_160 = (LPSTR **)0x0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_128 = 0xf;
  local_108 = 0xf;
  local_f8 = 0;
  local_198 = (LPCWSTR **)0x0;
  uStack_190 = 0;
  local_188 = 0;
  local_180 = 0;
  uVar4 = FUN_1402d6aa0(local_80);
  FUN_140016170(&local_198,local_80,uVar4);
  if (local_188 == 0) {
LAB_14012bd51:
    uStack_d0 = 0xf;
    uStack_c0 = 0;
    local_c8 = (LPSTR **)0x0;
  }
  else {
    ppppWVar6 = &local_198;
    if (7 < local_180) {
      ppppWVar6 = (LPCWSTR ***)local_198;
    }
    iVar3 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar6,(int)local_188,(LPSTR)0x0,0,(LPCSTR)0x0,
                                (LPBOOL)0x0);
    if (iVar3 < 1) goto LAB_14012bd51;
    FUN_140016940(&local_e8,(longlong)iVar3,0);
    ppppCVar8 = &local_e8;
    if (0xf < uStack_d0) {
      ppppCVar8 = (LPSTR ***)local_e8;
    }
    ppppWVar6 = &local_198;
    if (7 < local_180) {
      ppppWVar6 = (LPCWSTR ***)local_198;
    }
    WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar6,(int)local_188,(LPSTR)ppppCVar8,iVar3,
                        (LPCSTR)0x0,(LPBOOL)0x0);
    local_c8 = local_e8;
    uStack_c0 = uStack_e0;
    uVar5 = local_d8;
  }
  local_160 = local_c8;
  uStack_158 = uStack_c0;
  local_150 = uVar5;
  local_148 = uStack_d0;
  if (7 < local_180) {
    uVar9 = local_180 * 2 + 2;
    ppppWVar6 = (LPCWSTR ***)local_198;
    if (0xfff < uVar9) {
      ppppWVar6 = (LPCWSTR ***)local_198[-1];
      if (0x1f < (ulonglong)((longlong)local_198 + (-8 - (longlong)ppppWVar6))) goto LAB_14012bec1;
      uVar9 = local_180 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar6,uVar9);
  }
  local_170 = local_a8.rcMonitor.right - local_a8.rcMonitor.left;
  local_178 = local_a8.rcMonitor.left;
  local_16c = local_a8.rcMonitor.bottom - local_a8.rcMonitor.top;
  local_174 = local_a8.rcMonitor.top;
  iVar3 = *(int *)(param_4 + 1);
  if (local_a8.rcMonitor.left < *(int *)(param_4 + 1)) {
    iVar3 = local_a8.rcMonitor.left;
  }
  *(int *)(param_4 + 1) = iVar3;
  iVar3 = *(int *)((longlong)param_4 + 0xc);
  if (local_a8.rcMonitor.top < *(int *)((longlong)param_4 + 0xc)) {
    iVar3 = local_a8.rcMonitor.top;
  }
  *(int *)((longlong)param_4 + 0xc) = iVar3;
  local_100 = param_1;
  FUN_140130840(*param_4,&local_178);
  if (0xf < local_108) {
    uVar9 = local_108 + 1;
    lVar7 = local_120;
    if (0xfff < uVar9) {
      lVar7 = *(longlong *)(local_120 + -8);
      if (0x1f < (local_120 - lVar7) - 8U) goto LAB_14012bec1;
      uVar9 = local_108 + 0x28;
    }
    thunk_FUN_14028af80(lVar7,uVar9);
  }
  if (0xf < local_128) {
    uVar9 = local_128 + 1;
    lVar7 = local_140;
    if (0xfff < uVar9) {
      lVar7 = *(longlong *)(local_140 + -8);
      if (0x1f < (local_140 - lVar7) - 8U) goto LAB_14012bec1;
      uVar9 = local_128 + 0x28;
    }
    thunk_FUN_14028af80(lVar7,uVar9);
  }
  if (0xf < local_148) {
    uVar9 = local_148 + 1;
    ppppCVar8 = (LPSTR ***)local_160;
    if (0xfff < uVar9) {
      ppppCVar8 = (LPSTR ***)local_160[-1];
      if ((LPSTR)0x1f < (LPSTR)((longlong)local_160 + (-8 - (longlong)ppppCVar8))) {
LAB_14012bec1:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      uVar9 = local_148 + 0x28;
    }
    thunk_FUN_14028af80(ppppCVar8,uVar9);
  }
  return 1;
}

