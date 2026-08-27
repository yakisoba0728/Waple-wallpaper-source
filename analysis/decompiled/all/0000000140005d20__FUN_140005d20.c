// Function: FUN_140005d20
// Addr: 140005d20
// Size: 432 bytes


undefined8 FUN_140005d20(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int cchWideChar;
  size_t sVar3;
  longlong lVar4;
  LPWSTR ***ppppWVar5;
  LPCSTR ***ppppCVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 auStackY_d8 [8];
  undefined1 auStackY_d0 [16];
  undefined8 uStackY_c0;
  char *pcStackY_b8;
  LPCSTR **local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  LPWSTR **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  LPWSTR **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  
  local_88 = (LPCSTR **)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStackY_c0 = 0x140005d50;
  sVar3 = strlen(param_2);
  uStackY_c0 = 0x140005d5f;
  FUN_140017480(&local_88,param_2,sVar3);
  if (local_78 == 0) {
LAB_140005e06:
    local_58 = 0;
    uStack_60 = 0;
    local_68 = (LPWSTR **)0x0;
    uStack_50 = 7;
  }
  else {
    ppppCVar6 = &local_88;
    if (0xf < local_70) {
      ppppCVar6 = (LPCSTR ***)local_88;
    }
    uStackY_c0 = 0x140005d90;
    cchWideChar = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar6,(int)local_78,(LPWSTR)0x0,0);
    param_2 = (char *)(longlong)cchWideChar;
    if (cchWideChar < 1) goto LAB_140005e06;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = (LPWSTR **)0x0;
    uStack_40 = 0;
    uStackY_c0 = 0x140005db4;
    FUN_1400167e0(&local_48,0,param_2);
    ppppWVar5 = &local_48;
    if (7 < uStack_30) {
      ppppWVar5 = (LPWSTR ***)local_48;
    }
    ppppCVar6 = &local_88;
    if (0xf < local_70) {
      ppppCVar6 = (LPCSTR ***)local_88;
    }
    uStackY_c0 = 0x140005dea;
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar6,(int)local_78,(LPWSTR)ppppWVar5,cchWideChar);
    local_58 = local_38;
    uStack_50 = uStack_30;
    local_68 = local_48;
    uStack_60 = uStack_40;
  }
  ppppWVar5 = &local_68;
  if (7 < uStack_50) {
    ppppWVar5 = (LPWSTR ***)local_68;
  }
  uStackY_c0 = 0x140005e33;
  FUN_140005c80(param_1,ppppWVar5);
  if (7 < uStack_50) {
    uVar8 = uStack_50 * 2 + 2;
    ppppWVar5 = (LPWSTR ***)local_68;
    if (0xfff < uVar8) {
      ppppWVar5 = (LPWSTR ***)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppWVar5))) goto LAB_140005ec9;
      uVar8 = uStack_50 * 2 + 0x29;
    }
    uStackY_c0 = 0x140005e73;
    thunk_FUN_14028af80(ppppWVar5,uVar8);
  }
  local_58 = 0;
  uStack_50 = 7;
  local_68 = (LPWSTR **)((ulonglong)local_68 & 0xffffffffffff0000);
  if (0xf < local_70) {
    uVar8 = local_70 + 1;
    ppppCVar6 = (LPCSTR ***)local_88;
    if (0xfff < uVar8) {
      ppppCVar6 = (LPCSTR ***)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppCVar6))) {
LAB_140005ec9:
        plVar7 = (longlong *)&DAT_00000005;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        if (7 < (ulonglong)plVar7[3]) {
          lVar1 = *plVar7;
          puVar9 = auStackY_d8;
          lVar4 = lVar1;
          pcStackY_b8 = param_2;
          if ((0xfff < plVar7[3] * 2 + 2U) &&
             (lVar4 = *(longlong *)(lVar1 + -8), puVar9 = auStackY_d8, 0x1f < (lVar1 - lVar4) - 8U))
          {
            pcVar2 = (code *)swi(0x29);
            lVar4 = (*pcVar2)(5);
            puVar9 = auStackY_d0;
          }
          *(undefined8 *)(puVar9 + -8) = 0x1400167c4;
          thunk_FUN_14028af80(lVar4);
        }
        plVar7[2] = 0;
        *(undefined2 *)plVar7 = 0;
        plVar7[3] = 7;
        return 0;
      }
      uVar8 = local_70 + 0x28;
    }
    uStackY_c0 = 0x140005eba;
    thunk_FUN_14028af80(ppppCVar6,uVar8);
  }
  return param_1;
}

