// Function: FUN_1402ded48
// Addr: 1402ded48
// Size: 162 bytes


ulonglong FUN_1402ded48(LPCWSTR param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  BVar2 = IsDebuggerPresent();
  if (BVar2 != 0) {
    if (param_1 != (LPCWSTR)0x0) {
      OutputDebugStringW(param_1);
    }
    iVar3 = FUN_1402dde08();
    if (iVar3 != 1) {
      return 4;
    }
  }
  iVar3 = FUN_1402ddd94();
  if ((iVar3 == 2) && (cVar1 = FUN_1402dc6fc(), cVar1 != '\0')) {
    cVar1 = FUN_1402dca04();
    if (cVar1 == '\0') {
      param_3 = param_3 | 0x200000;
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1402dc93c();
    }
    uVar4 = FUN_1402dc5e8(uVar5,param_1,param_2,param_3);
    return uVar4;
  }
  return (ulonglong)((BVar2 != 0) + 3);
}

