// Function: FUN_140277ef0
// Addr: 140277ef0
// Size: 845 bytes


void FUN_140277ef0(undefined8 *param_1,char *param_2)

{
  code *pcVar1;
  int cchWideChar;
  longlong lVar2;
  size_t sVar3;
  longlong lVar4;
  LPWSTR ***ppppWVar5;
  LPCSTR ***ppppCVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
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
  
  puVar7 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar7 = (undefined8 *)*param_1;
  }
  uVar8 = 0xffffffffffffffff;
  if (param_1[2] != 0) {
    lVar4 = param_1[2] + -1;
    lVar2 = -1;
    if (lVar4 != -1) {
      lVar2 = lVar4;
    }
    lVar2 = (longlong)puVar7 + (lVar2 + 1) * 2;
    lVar4 = thunk_FUN_14028d450(puVar7,lVar2,0x2e);
    if (lVar4 != lVar2) {
      uVar8 = lVar4 - (longlong)puVar7 >> 1;
    }
  }
  if (uVar8 == 0xffffffffffffffff) {
    local_68 = 0;
    local_78 = (LPCSTR **)0x0;
    uStack_70 = 0;
    local_60 = 0;
    sVar3 = strlen(param_2);
    FUN_140017480(&local_78,param_2,sVar3);
    if (local_68 != 0) {
      ppppCVar6 = &local_78;
      if (0xf < local_60) {
        ppppCVar6 = (LPCSTR ***)local_78;
      }
      cchWideChar = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar6,(int)local_68,(LPWSTR)0x0,0);
      if (0 < cchWideChar) {
        local_28 = 0;
        uStack_20 = 0;
        local_38 = (LPWSTR **)0x0;
        uStack_30 = 0;
        FUN_1400167e0(&local_38,0,(longlong)cchWideChar);
        ppppWVar5 = &local_38;
        if (7 < uStack_20) {
          ppppWVar5 = (LPWSTR ***)local_38;
        }
        goto LAB_14027812e;
      }
    }
LAB_140278172:
    local_48 = 0;
    uStack_50 = 0;
    local_58 = (LPWSTR **)0x0;
    uStack_40 = 7;
  }
  else {
    local_28 = 0;
    local_38 = (LPWSTR **)0x0;
    uStack_30 = 0;
    if ((ulonglong)param_1[2] < uVar8) {
      uVar8 = param_1[2];
    }
    uStack_20 = 0;
    puVar7 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar7 = (undefined8 *)*param_1;
    }
    FUN_140016170(&local_38,puVar7,uVar8);
    FUN_140016560(param_1,&local_38);
    if (7 < uStack_20) {
      uVar8 = uStack_20 * 2 + 2;
      ppppWVar5 = (LPWSTR ***)local_38;
      if (0xfff < uVar8) {
        ppppWVar5 = (LPWSTR ***)local_38[-1];
        if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppWVar5))) goto LAB_140278235;
        uVar8 = uStack_20 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppWVar5,uVar8);
    }
    local_68 = 0;
    local_60 = 0;
    local_78 = (LPCSTR **)0x0;
    uStack_70 = 0;
    sVar3 = strlen(param_2);
    FUN_140017480(&local_78,param_2,sVar3);
    if (local_68 == 0) goto LAB_140278172;
    ppppCVar6 = &local_78;
    if (0xf < local_60) {
      ppppCVar6 = (LPCSTR ***)local_78;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar6,(int)local_68,(LPWSTR)0x0,0);
    if (cchWideChar < 1) goto LAB_140278172;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = (LPWSTR **)0x0;
    uStack_30 = 0;
    FUN_1400167e0(&local_38,0,(longlong)cchWideChar);
    ppppWVar5 = &local_38;
    if (7 < uStack_20) {
      ppppWVar5 = (LPWSTR ***)local_38;
    }
LAB_14027812e:
    ppppCVar6 = &local_78;
    if (0xf < local_60) {
      ppppCVar6 = (LPCSTR ***)local_78;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar6,(int)local_68,(LPWSTR)ppppWVar5,cchWideChar);
    local_48 = local_28;
    uStack_40 = uStack_20;
    local_58 = local_38;
    uStack_50 = uStack_30;
  }
  ppppWVar5 = &local_58;
  if (7 < uStack_40) {
    ppppWVar5 = (LPWSTR ***)local_58;
  }
  FUN_1400164d0(param_1,ppppWVar5,local_48);
  if (7 < uStack_40) {
    uVar8 = uStack_40 * 2 + 2;
    ppppWVar5 = (LPWSTR ***)local_58;
    if (0xfff < uVar8) {
      ppppWVar5 = (LPWSTR ***)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppWVar5))) goto LAB_140278235;
      uVar8 = uStack_40 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar5,uVar8);
  }
  if (0xf < local_60) {
    uVar8 = local_60 + 1;
    ppppCVar6 = (LPCSTR ***)local_78;
    if (0xfff < uVar8) {
      ppppCVar6 = (LPCSTR ***)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppCVar6))) {
LAB_140278235:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar8 = local_60 + 0x28;
    }
    thunk_FUN_14028af80(ppppCVar6,uVar8);
  }
  return;
}

