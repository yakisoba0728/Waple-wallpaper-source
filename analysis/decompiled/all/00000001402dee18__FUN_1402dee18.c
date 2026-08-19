// Function: FUN_1402dee18
// Addr: 1402dee18
// Size: 121 bytes


ulonglong FUN_1402dee18(longlong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  iVar2 = (*DAT_140426248)();
  if (iVar2 != 0) {
    if (param_1 != 0) {
      (*DAT_140426458)(param_1);
    }
    iVar3 = FUN_1402dded8();
    if (iVar3 != 1) {
      return 4;
    }
  }
  iVar3 = FUN_1402dde64();
  if ((iVar3 == 2) && (cVar1 = func_0x0001402dc7cc(), cVar1 != '\0')) {
    cVar1 = func_0x0001402dcad4();
    if (cVar1 == '\0') {
      param_3 = param_3 | 0x200000;
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1402dca0c();
    }
    uVar4 = func_0x0001402dc6b8(uVar5,param_1,param_2,param_3);
    return uVar4;
  }
  return (ulonglong)((iVar2 != 0) + 3);
}

