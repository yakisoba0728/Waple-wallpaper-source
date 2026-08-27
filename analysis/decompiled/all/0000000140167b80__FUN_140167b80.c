// Function: FUN_140167b80
// Addr: 140167b80
// Size: 127 bytes


ulonglong FUN_140167b80(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = FUN_140167c00();
  do {
    uVar3 = uVar3 & 0xffffffff;
LAB_140167ba0:
    while( true ) {
      iVar1 = *(int *)(param_1 + 8);
      iVar4 = (int)uVar3;
      if (2 < iVar1 - 0x10U) {
        return uVar3;
      }
      FUN_140166a90(param_1);
      iVar2 = FUN_140167c00(param_1);
      if (iVar1 != 0x10) break;
      uVar3 = (ulonglong)(uint)(iVar4 * iVar2);
    }
    if (iVar1 != 0x11) break;
    if (iVar2 == 0) goto LAB_140167be9;
    uVar3 = (longlong)iVar4 / (longlong)iVar2 & 0xffffffff;
  } while( true );
  if (iVar1 == 0x12) {
    if (iVar2 == 0) {
LAB_140167be9:
      uVar3 = 0;
    }
    else {
      uVar3 = (longlong)iVar4 % (longlong)iVar2 & 0xffffffff;
    }
  }
  goto LAB_140167ba0;
}

