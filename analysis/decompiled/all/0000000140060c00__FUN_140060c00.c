// Function: FUN_140060c00
// Addr: 140060c00
// Size: 397 bytes


undefined8 FUN_140060c00(undefined8 param_1,char *param_2)

{
  code *pcVar1;
  int cchWideChar;
  size_t sVar2;
  undefined8 uVar3;
  LPWSTR ***ppppWVar4;
  LPCSTR ***ppppCVar5;
  ulonglong uVar6;
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
  sVar2 = strlen(param_2);
  FUN_140017480(&local_88,param_2,sVar2);
  if (local_78 == 0) {
LAB_140060cdc:
    local_38 = 0;
    uStack_40 = 0;
    local_48 = (LPWSTR **)0x0;
    uStack_30 = 7;
  }
  else {
    ppppCVar5 = &local_88;
    if (0xf < local_70) {
      ppppCVar5 = (LPCSTR ***)local_88;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar5,(int)local_78,(LPWSTR)0x0,0);
    if (cchWideChar < 1) goto LAB_140060cdc;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (LPWSTR **)0x0;
    uStack_60 = 0;
    FUN_1400167e0(&local_68,0,(longlong)cchWideChar);
    ppppWVar4 = &local_68;
    if (7 < uStack_50) {
      ppppWVar4 = (LPWSTR ***)local_68;
    }
    ppppCVar5 = &local_88;
    if (0xf < local_70) {
      ppppCVar5 = (LPCSTR ***)local_88;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar5,(int)local_78,(LPWSTR)ppppWVar4,cchWideChar);
    local_48 = local_68;
    uStack_40 = uStack_60;
    local_38 = local_58;
    uStack_30 = uStack_50;
  }
  FUN_140016560(param_1,&local_48);
  if (7 < uStack_30) {
    uVar6 = uStack_30 * 2 + 2;
    ppppWVar4 = (LPWSTR ***)local_48;
    if (0xfff < uVar6) {
      ppppWVar4 = (LPWSTR ***)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)ppppWVar4))) goto LAB_140060d85;
      uVar6 = uStack_30 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar4,uVar6);
  }
  if (0xf < local_70) {
    uVar6 = local_70 + 1;
    ppppCVar5 = (LPCSTR ***)local_88;
    if (0xfff < uVar6) {
      ppppCVar5 = (LPCSTR ***)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppCVar5))) {
LAB_140060d85:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uVar6 = local_70 + 0x28;
    }
    thunk_FUN_14028af80(ppppCVar5,uVar6);
  }
  return param_1;
}

