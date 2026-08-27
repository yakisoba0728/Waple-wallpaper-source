// Function: FUN_1401679d0
// Addr: 1401679d0
// Size: 244 bytes


int FUN_1401679d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar3 = FUN_140167ad0();
  do {
    iVar1 = *(int *)(param_1 + 8);
    if (1 < iVar1 - 0x17U) {
      return iVar3;
    }
    FUN_140166a90(param_1);
    uVar4 = FUN_140167b80(param_1);
LAB_140167a13:
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 - 0xeU < 2) {
      FUN_140166a90(param_1);
      uVar7 = FUN_140167c00(param_1);
      do {
        uVar7 = uVar7 & 0xffffffff;
LAB_140167a32:
        while( true ) {
          iVar2 = *(int *)(param_1 + 8);
          iVar8 = (int)uVar7;
          if (2 < iVar2 - 0x10U) {
            if (iVar6 != 0xe) {
              iVar8 = -iVar8;
            }
            uVar4 = uVar4 + iVar8;
            goto LAB_140167a13;
          }
          FUN_140166a90(param_1);
          iVar5 = FUN_140167c00(param_1);
          if (iVar2 != 0x10) break;
          uVar7 = (ulonglong)(uint)(iVar8 * iVar5);
        }
        if (iVar2 != 0x11) goto LAB_140167a69;
        if (iVar5 == 0) goto LAB_140167a7b;
        uVar7 = (longlong)iVar8 / (longlong)iVar5 & 0xffffffff;
      } while( true );
    }
    if (uVar4 < 0x20) {
      iVar6 = iVar3 >> ((byte)uVar4 & 0x1f);
      iVar3 = iVar3 << ((byte)uVar4 & 0x1f);
      if (iVar1 != 0x17) {
        iVar3 = iVar6;
      }
    }
    else {
      iVar3 = 0;
    }
  } while( true );
LAB_140167a69:
  if (iVar2 == 0x12) {
    if (iVar5 == 0) {
LAB_140167a7b:
      uVar7 = 0;
    }
    else {
      uVar7 = (longlong)iVar8 % (longlong)iVar5 & 0xffffffff;
    }
  }
  goto LAB_140167a32;
}

