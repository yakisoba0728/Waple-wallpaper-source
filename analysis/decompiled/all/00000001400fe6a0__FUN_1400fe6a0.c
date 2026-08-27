// Function: FUN_1400fe6a0
// Addr: 1400fe6a0
// Size: 519 bytes


void FUN_1400fe6a0(longlong param_1)

{
  code *pcVar1;
  int cchWideChar;
  BOOL BVar2;
  size_t sVar3;
  LPCSTR ***ppppCVar4;
  LPWSTR ***ppppWVar5;
  ulonglong uVar6;
  char *_Str;
  LPCSTR **local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  LPWSTR **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  LPWSTR **local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong uStack_10;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    return;
  }
  _Str = (char *)(param_1 + 0x100);
  if (0xf < *(ulonglong *)(param_1 + 0x118)) {
    _Str = *(char **)_Str;
  }
  local_58 = 0;
  local_68 = (LPCSTR **)0x0;
  uStack_60 = 0;
  local_50 = 0;
  sVar3 = strlen(_Str);
  FUN_140017480(&local_68,_Str,sVar3);
  if (local_58 == 0) {
LAB_1400fe7af:
    local_38 = 0;
    uStack_40 = 0;
    local_48 = (LPWSTR **)0x0;
    uStack_30 = 7;
  }
  else {
    ppppCVar4 = &local_68;
    if (0xf < local_50) {
      ppppCVar4 = (LPCSTR ***)local_68;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar4,(int)local_58,(LPWSTR)0x0,0);
    if (cchWideChar < 1) goto LAB_1400fe7af;
    local_18 = 0;
    uStack_10 = 0;
    local_28 = (LPWSTR **)0x0;
    uStack_20 = 0;
    FUN_1400167e0(&local_28,0,(longlong)cchWideChar);
    ppppWVar5 = &local_28;
    if (7 < uStack_10) {
      ppppWVar5 = (LPWSTR ***)local_28;
    }
    ppppCVar4 = &local_68;
    if (0xf < local_50) {
      ppppCVar4 = (LPCSTR ***)local_68;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar4,(int)local_58,(LPWSTR)ppppWVar5,cchWideChar);
    local_38 = local_18;
    uStack_30 = uStack_10;
    local_48 = local_28;
    uStack_40 = uStack_20;
  }
  if (0xf < local_50) {
    uVar6 = local_50 + 1;
    ppppCVar4 = (LPCSTR ***)local_68;
    if (0xfff < uVar6) {
      ppppCVar4 = (LPCSTR ***)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppCVar4))) goto LAB_1400fe89f;
      uVar6 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(ppppCVar4,uVar6);
  }
  ppppWVar5 = &local_48;
  if (7 < uStack_30) {
    ppppWVar5 = (LPWSTR ***)local_48;
  }
  FUN_140100cf0(param_1,ppppWVar5);
  BVar2 = IsWindow(*(HWND *)(param_1 + 0x168));
  if (BVar2 != 0) {
    InvalidateRect(*(HWND *)(param_1 + 0x168),(RECT *)0x0,0);
  }
  if (7 < uStack_30) {
    uVar6 = uStack_30 * 2 + 2;
    ppppWVar5 = (LPWSTR ***)local_48;
    if (0xfff < uVar6) {
      ppppWVar5 = (LPWSTR ***)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)ppppWVar5))) {
LAB_1400fe89f:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = uStack_30 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar5,uVar6);
  }
  return;
}

