// Function: FUN_140167aa0
// Addr: 140167aa0
// Size: 36 bytes


int FUN_140167aa0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar3 = func_0x000140167ba0();
  do {
    iVar1 = *(int *)(param_1 + 8);
    if (1 < iVar1 - 0x17U) {
      return iVar3;
    }
    FUN_140166b60(param_1);
    uVar4 = FUN_140167c50(param_1);
code_r0x000140167ae3:
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 - 0xeU < 2) {
      FUN_140166b60(param_1);
      uVar7 = FUN_140167cd0(param_1);
      do {
        uVar7 = uVar7 & 0xffffffff;
code_r0x000140167b02:
        while( true ) {
          iVar2 = *(int *)(param_1 + 8);
          iVar8 = (int)uVar7;
          if (2 < iVar2 - 0x10U) {
            if (iVar6 != 0xe) {
              iVar8 = -iVar8;
            }
            uVar4 = uVar4 + iVar8;
            goto code_r0x000140167ae3;
          }
          FUN_140166b60(param_1);
          iVar5 = FUN_140167cd0(param_1);
          if (iVar2 != 0x10) break;
          uVar7 = (ulonglong)(uint)(iVar8 * iVar5);
        }
        if (iVar2 != 0x11) goto code_r0x000140167b39;
        if (iVar5 == 0) goto code_r0x000140167b4b;
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
code_r0x000140167b39:
  if (iVar2 == 0x12) {
    if (iVar5 == 0) {
code_r0x000140167b4b:
      uVar7 = 0;
    }
    else {
      uVar7 = (longlong)iVar8 % (longlong)iVar5 & 0xffffffff;
    }
  }
  goto code_r0x000140167b02;
}

