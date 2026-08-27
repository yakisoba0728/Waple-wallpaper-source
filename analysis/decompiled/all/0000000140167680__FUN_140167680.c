// Function: FUN_140167680
// Addr: 140167680
// Size: 463 bytes


uint FUN_140167680(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  
  uVar5 = FUN_140167850();
  do {
    iVar1 = *(int *)(param_1 + 8);
    if (1 < iVar1 - 6U) {
      return uVar5;
    }
    FUN_140166a90(param_1);
    uVar6 = FUN_1401679d0(param_1);
    while (iVar2 = *(int *)(param_1 + 8), iVar2 - 8U < 4) {
      FUN_140166a90(param_1);
      iVar7 = FUN_140167ad0(param_1);
      while (iVar3 = *(int *)(param_1 + 8), iVar3 - 0x17U < 2) {
        FUN_140166a90(param_1);
        uVar8 = FUN_140167b80(param_1);
LAB_140167724:
        iVar10 = *(int *)(param_1 + 8);
        if (iVar10 - 0xeU < 2) {
          FUN_140166a90(param_1);
          uVar11 = FUN_140167c00(param_1);
          do {
            uVar11 = uVar11 & 0xffffffff;
LAB_140167741:
            while( true ) {
              iVar4 = *(int *)(param_1 + 8);
              iVar12 = (int)uVar11;
              if (2 < iVar4 - 0x10U) {
                if (iVar10 != 0xe) {
                  iVar12 = -iVar12;
                }
                uVar8 = uVar8 + iVar12;
                goto LAB_140167724;
              }
              FUN_140166a90(param_1);
              iVar9 = FUN_140167c00(param_1);
              if (iVar4 != 0x10) break;
              uVar11 = (ulonglong)(uint)(iVar12 * iVar9);
            }
            if (iVar4 != 0x11) goto LAB_140167778;
            if (iVar9 == 0) goto LAB_14016778a;
            uVar11 = (longlong)iVar12 / (longlong)iVar9 & 0xffffffff;
          } while( true );
        }
        if (uVar8 < 0x20) {
          iVar10 = iVar7 >> ((byte)uVar8 & 0x1f);
          iVar7 = iVar7 << ((byte)uVar8 & 0x1f);
          if (iVar3 != 0x17) {
            iVar7 = iVar10;
          }
        }
        else {
          iVar7 = 0;
        }
      }
      if (iVar2 == 8) {
        uVar6 = (uint)((int)uVar6 < iVar7);
      }
      else if (iVar2 == 9) {
        uVar6 = (uint)((int)uVar6 <= iVar7);
      }
      else if (iVar2 == 10) {
        uVar6 = (uint)(iVar7 < (int)uVar6);
      }
      else if (iVar2 == 0xb) {
        uVar6 = (uint)(iVar7 <= (int)uVar6);
      }
    }
    if (iVar1 == 6) {
      uVar5 = (uint)(uVar5 == uVar6);
    }
    else {
      uVar5 = (uint)(uVar5 != uVar6);
    }
  } while( true );
LAB_140167778:
  if (iVar4 == 0x12) {
    if (iVar9 == 0) {
LAB_14016778a:
      uVar11 = 0;
    }
    else {
      uVar11 = (longlong)iVar12 % (longlong)iVar9 & 0xffffffff;
    }
  }
  goto LAB_140167741;
}

