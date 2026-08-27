// Function: FUN_140167ad0
// Addr: 140167ad0
// Size: 169 bytes


int FUN_140167ad0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar3 = FUN_140167b80();
LAB_140167af0:
  iVar1 = *(int *)(param_1 + 8);
  if (1 < iVar1 - 0xeU) {
    return iVar3;
  }
  FUN_140166a90(param_1);
  uVar5 = FUN_140167c00(param_1);
  do {
    uVar5 = uVar5 & 0xffffffff;
LAB_140167b10:
    while( true ) {
      iVar2 = *(int *)(param_1 + 8);
      iVar6 = (int)uVar5;
      if (2 < iVar2 - 0x10U) {
        if (iVar1 != 0xe) {
          iVar6 = -iVar6;
        }
        iVar3 = iVar3 + iVar6;
        goto LAB_140167af0;
      }
      FUN_140166a90(param_1);
      iVar4 = FUN_140167c00(param_1);
      if (iVar2 != 0x10) break;
      uVar5 = (ulonglong)(uint)(iVar6 * iVar4);
    }
    if (iVar2 != 0x11) break;
    if (iVar4 == 0) goto LAB_140167b59;
    uVar5 = (longlong)iVar6 / (longlong)iVar4 & 0xffffffff;
  } while( true );
  if (iVar2 == 0x12) {
    if (iVar4 == 0) {
LAB_140167b59:
      uVar5 = 0;
    }
    else {
      uVar5 = (longlong)iVar6 % (longlong)iVar4 & 0xffffffff;
    }
  }
  goto LAB_140167b10;
}

