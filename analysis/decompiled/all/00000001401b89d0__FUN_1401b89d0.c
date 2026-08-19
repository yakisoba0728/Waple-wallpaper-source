// Function: FUN_1401b89d0
// Addr: 1401b89d0
// Size: 250 bytes


void FUN_1401b89d0(undefined8 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  if (uVar2 < uVar3) {
    param_1[2] = uVar2 + 1;
    if (3 < uVar3) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined4 *)((longlong)param_1 + uVar2 * 4) = param_2;
    *(undefined4 *)((longlong)param_1 + uVar2 * 4 + 4) = 0;
    return;
  }
  uVar7 = 0x3ffffffffffffffe;
  if (uVar2 == 0x3ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar6 = uVar2 + 1 | 3;
  if ((uVar6 < 0x3fffffffffffffff) && (uVar3 <= 0x3ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    if (0x3fffffffffffffff < uVar7 + 1) goto LAB_1401b8b88;
    uVar6 = (uVar7 + 1) * 4;
    if (uVar6 == 0) {
      uVar6 = 0;
      goto LAB_1401b8ae2;
    }
  }
  else {
    uVar6 = 0xfffffffffffffffc;
  }
  if (uVar6 < 0x1000) {
    uVar6 = func_0x00014028aff0();
  }
  else {
    if (uVar6 + 0x27 <= uVar6) {
LAB_1401b8b88:
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    lVar5 = func_0x00014028aff0(uVar6 + 0x27);
    if (lVar5 == 0) {
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      func_0x00014028b040(uVar2);
      *param_1 = unaff_RDI;
      return;
    }
    uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar6 - 8) = lVar5;
  }
LAB_1401b8ae2:
  param_1[3] = uVar7;
  param_1[2] = uVar2 + 1;
  if (3 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar6,*param_1,uVar2 * 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar6,param_1,uVar2 * 4);
}

