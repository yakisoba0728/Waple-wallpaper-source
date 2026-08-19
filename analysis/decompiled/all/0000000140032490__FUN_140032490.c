// Function: FUN_140032490
// Addr: 140032490
// Size: 43 bytes


void FUN_140032490(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  ulonglong uVar8;
  
  lVar2 = param_1[1];
  if (lVar2 != param_1[2]) {
                    /* WARNING: Subroutine does not return */
    FUN_1400166d0(lVar2);
  }
  lVar3 = *param_1;
  if (param_1[1] - lVar3 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar7 = param_1[2] - lVar3 >> 5;
  if (uVar7 <= 0x7ffffffffffffff - (uVar7 >> 1)) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar1 = (param_1[1] - lVar3 >> 5) + 1;
    uVar8 = uVar1;
    if (uVar1 <= uVar7) {
      uVar8 = uVar7;
    }
    if (uVar8 < 0x800000000000000) {
      uVar8 = uVar8 * 0x20;
      if (uVar8 == 0) {
        uVar7 = 0;
      }
      else if (uVar8 < 0x1000) {
        uVar7 = func_0x00014028aff0(uVar8);
      }
      else {
        if (uVar8 + 0x27 <= uVar8) goto code_r0x00014003500b;
        lVar5 = func_0x00014028aff0();
        if (lVar5 == 0) {
          pcVar4 = (code *)swi(0x29);
          uVar6 = (*pcVar4)(5);
          func_0x00014028b040(uVar6);
          *param_1 = unaff_RBP;
          param_1[1] = uVar1 * 0x20 + unaff_RBP;
          param_1[2] = uVar8 + unaff_RBP;
          return;
        }
        uVar7 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar7 - 8) = lVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1400166d0((lVar2 - lVar3 & 0xffffffffffffffe0U) + uVar7,param_2);
    }
  }
code_r0x00014003500b:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

