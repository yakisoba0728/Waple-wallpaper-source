// Function: FUN_1401b4eb0
// Addr: 1401b4eb0
// Size: 210 bytes


undefined8 * FUN_1401b4eb0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar7 = param_1[3];
  if (param_3 <= uVar7) {
    puVar6 = param_1;
    if (3 < uVar7) {
      puVar6 = (undefined8 *)*param_1;
    }
    param_1[2] = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(puVar6,param_2,param_3 * 4);
  }
  uVar5 = 0x3ffffffffffffffe;
  if (0x3ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar3 = param_3 | 3;
  if ((uVar3 < 0x3fffffffffffffff) && (uVar7 <= 0x3ffffffffffffffe - (uVar7 >> 1))) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar5 = uVar3;
    if (uVar3 < uVar7) {
      uVar5 = uVar7;
    }
    if (0x3fffffffffffffff < uVar5 + 1) goto LAB_1401b5037;
    uVar7 = (uVar5 + 1) * 4;
    if (uVar7 == 0) {
      uVar7 = 0;
      goto LAB_1401b4fb8;
    }
  }
  else {
    uVar7 = 0xfffffffffffffffc;
  }
  if (uVar7 < 0x1000) {
    uVar7 = func_0x00014028aff0();
  }
  else {
    if (uVar7 + 0x27 <= uVar7) {
LAB_1401b5037:
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    lVar2 = func_0x00014028aff0(uVar7 + 0x27);
    if (lVar2 == 0) {
      uVar4 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      func_0x00014028b040(uVar4);
      *param_1 = unaff_RSI;
      return param_1;
    }
    uVar7 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar7 - 8) = lVar2;
  }
LAB_1401b4fb8:
  param_1[3] = uVar5;
  param_1[2] = param_3;
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar7,param_2,param_3 * 4);
}

