// Function: FUN_140167920
// Addr: 140167920
// Size: 322 bytes


uint FUN_140167920(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar4 = FUN_140167aa0();
  do {
    iVar1 = *(int *)(param_1 + 8);
    if (3 < iVar1 - 8U) {
      return uVar4;
    }
    FUN_140166b60(param_1);
    iVar5 = func_0x000140167ba0(param_1);
    while (iVar2 = *(int *)(param_1 + 8), iVar2 - 0x17U < 2) {
      FUN_140166b60(param_1);
      uVar6 = FUN_140167c50(param_1);
LAB_140167994:
      iVar8 = *(int *)(param_1 + 8);
      if (iVar8 - 0xeU < 2) {
        FUN_140166b60(param_1);
        uVar9 = FUN_140167cd0(param_1);
        do {
          uVar9 = uVar9 & 0xffffffff;
code_r0x0001401679b1:
          while( true ) {
            iVar3 = *(int *)(param_1 + 8);
            iVar10 = (int)uVar9;
            if (2 < iVar3 - 0x10U) {
              if (iVar8 != 0xe) {
                iVar10 = -iVar10;
              }
              uVar6 = uVar6 + iVar10;
              goto LAB_140167994;
            }
            FUN_140166b60(param_1);
            iVar7 = FUN_140167cd0(param_1);
            if (iVar3 != 0x10) break;
            uVar9 = (ulonglong)(uint)(iVar10 * iVar7);
          }
          if (iVar3 != 0x11) goto code_r0x0001401679e8;
          if (iVar7 == 0) goto code_r0x0001401679fa;
          uVar9 = (longlong)iVar10 / (longlong)iVar7 & 0xffffffff;
        } while( true );
      }
      if (uVar6 < 0x20) {
        iVar8 = iVar5 >> ((byte)uVar6 & 0x1f);
        iVar5 = iVar5 << ((byte)uVar6 & 0x1f);
        if (iVar2 != 0x17) {
          iVar5 = iVar8;
        }
      }
      else {
        iVar5 = 0;
      }
    }
    if (iVar1 == 8) {
      uVar4 = (uint)((int)uVar4 < iVar5);
    }
    else if (iVar1 == 9) {
      uVar4 = (uint)((int)uVar4 <= iVar5);
    }
    else if (iVar1 == 10) {
      uVar4 = (uint)(iVar5 < (int)uVar4);
    }
    else if (iVar1 == 0xb) {
      uVar4 = (uint)(iVar5 <= (int)uVar4);
    }
  } while( true );
code_r0x0001401679e8:
  if (iVar3 == 0x12) {
    if (iVar7 == 0) {
code_r0x0001401679fa:
      uVar9 = 0;
    }
    else {
      uVar9 = (longlong)iVar10 % (longlong)iVar7 & 0xffffffff;
    }
  }
  goto code_r0x0001401679b1;
}

