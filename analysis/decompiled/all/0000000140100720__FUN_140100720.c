// Function: FUN_140100720
// Addr: 140100720
// Size: 927 bytes


void FUN_140100720(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  int cchWideChar;
  BOOL BVar3;
  size_t sVar4;
  LPCSTR ***ppppCVar5;
  LPWSTR ***ppppWVar6;
  ulonglong uVar7;
  char *_Str;
  undefined4 uVar8;
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
  
  plVar1 = *(longlong **)(param_1 + 0x160);
  if (plVar1 == (longlong *)0x0) goto LAB_140100a8d;
  if (param_3 != 0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
  }
  if ((param_2 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x40))
              (*(longlong **)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x180),param_1 + 0x184,
               *(undefined4 *)(param_1 + 0x194));
    if ((*(uint *)(param_1 + 0x180) & 0xfffffffd) != 0) {
      *(undefined4 *)(param_1 + 0x370) = 0x14;
      KillTimer(*(HWND *)(param_1 + 0x168),0x68);
      SetTimer(*(HWND *)(param_1 + 0x168),0x68,0x32,(TIMERPROC)0x0);
    }
  }
  if ((param_2 & 8) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x68))
              (*(longlong **)(param_1 + 0x160),*(uint *)(param_1 + 0x17c) >> 3 & 0xffffff01);
  }
  if ((param_2 & 4) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x70))
              (*(longlong **)(param_1 + 0x160),*(uint *)(param_1 + 0x17c) >> 4 & 0xffffff01);
  }
  if ((param_2 & 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x58))
              (*(longlong **)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x198));
  }
  if ((param_2 & 0x20) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x60))
              (*(longlong **)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x19c));
  }
  if ((param_2 & 2) != 0) {
    if (*(char *)(param_1 + 9) == '\0') {
      uVar8 = *(undefined4 *)(param_1 + 0x174);
    }
    else {
      uVar8 = 0;
    }
    *(undefined4 *)(param_1 + 0x170) = uVar8;
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x30))();
  }
  if ((param_2 >> 8 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x48))();
  }
  if (((param_2 & 0xc0) != 0) && ((*(uint *)(param_1 + 0x17c) >> 1 & 1) == 0)) {
    SetTimer(*(HWND *)(param_1 + 0x168),0x65,0x19,(TIMERPROC)0x0);
    *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) | 2;
    if (((char)param_2 < '\0') && (*(char *)(param_1 + 8) == '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0x160) + 8))();
    }
  }
  if ((param_2 & 0x2c) == 0) goto LAB_140100a8d;
  _Str = (char *)(param_1 + 0x100);
  if (0xf < *(ulonglong *)(param_1 + 0x118)) {
    _Str = *(char **)_Str;
  }
  local_58 = 0;
  local_68 = (LPCSTR **)0x0;
  uStack_60 = 0;
  local_50 = 0;
  sVar4 = strlen(_Str);
  FUN_140017480(&local_68,_Str,sVar4);
  if (local_58 == 0) {
LAB_1401009b6:
    local_38 = 0;
    uStack_40 = 0;
    local_48 = (LPWSTR **)0x0;
    uStack_30 = 7;
  }
  else {
    ppppCVar5 = &local_68;
    if (0xf < local_50) {
      ppppCVar5 = (LPCSTR ***)local_68;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar5,(int)local_58,(LPWSTR)0x0,0);
    if (cchWideChar < 1) goto LAB_1401009b6;
    local_18 = 0;
    uStack_10 = 0;
    local_28 = (LPWSTR **)0x0;
    uStack_20 = 0;
    FUN_1400167e0(&local_28,0,(longlong)cchWideChar);
    ppppWVar6 = &local_28;
    if (7 < uStack_10) {
      ppppWVar6 = (LPWSTR ***)local_28;
    }
    ppppCVar5 = &local_68;
    if (0xf < local_50) {
      ppppCVar5 = (LPCSTR ***)local_68;
    }
    MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar5,(int)local_58,(LPWSTR)ppppWVar6,cchWideChar);
    local_38 = local_18;
    uStack_30 = uStack_10;
    local_48 = local_28;
    uStack_40 = uStack_20;
  }
  if (0xf < local_50) {
    uVar7 = local_50 + 1;
    ppppCVar5 = (LPCSTR ***)local_68;
    if (0xfff < uVar7) {
      ppppCVar5 = (LPCSTR ***)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppCVar5))) goto LAB_140100ab7;
      uVar7 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(ppppCVar5,uVar7);
  }
  ppppWVar6 = &local_48;
  if (7 < uStack_30) {
    ppppWVar6 = (LPWSTR ***)local_48;
  }
  FUN_140100cf0(param_1,ppppWVar6);
  BVar3 = IsWindow(*(HWND *)(param_1 + 0x168));
  if (BVar3 != 0) {
    InvalidateRect(*(HWND *)(param_1 + 0x168),(RECT *)0x0,0);
  }
  if (7 < uStack_30) {
    uVar7 = uStack_30 * 2 + 2;
    ppppWVar6 = (LPWSTR ***)local_48;
    if (0xfff < uVar7) {
      ppppWVar6 = (LPWSTR ***)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)ppppWVar6))) {
LAB_140100ab7:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = uStack_30 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppWVar6,uVar7);
  }
LAB_140100a8d:
                    /* WARNING: Could not recover jumptable at 0x000140100ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InvalidateRect(*(HWND *)(param_1 + 0x168),(RECT *)0x0,1);
  return;
}

