// Function: FUN_14000f950
// Addr: 14000f950
// Size: 109 bytes


undefined8 * FUN_14000f950(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 unaff_R14;
  ulonglong uVar7;
  
  uVar7 = param_1[3];
  if (param_3 <= uVar7) {
    puVar5 = param_1;
    if (0xf < uVar7) {
      puVar5 = (undefined8 *)*param_1;
    }
    param_1[2] = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(puVar5);
  }
  uVar6 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar3 = param_3 | 0xf;
  if ((uVar3 < 0x8000000000000000) && (uVar7 <= 0x7fffffffffffffff - (uVar7 >> 1))) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar6 = uVar3;
    if (uVar3 < uVar7) {
      uVar6 = uVar7;
    }
    uVar3 = uVar6 + 1;
    if (uVar3 == 0) {
      uVar7 = 0;
      goto code_r0x00014000fa30;
    }
    if (uVar3 < 0x1000) {
      uVar7 = func_0x00014028aff0(uVar3);
      goto code_r0x00014000fa30;
    }
    uVar7 = uVar6 + 0x28;
    if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
  }
  else {
    uVar7 = 0x8000000000000027;
  }
  lVar2 = func_0x00014028aff0(uVar7);
  if (lVar2 == 0) {
    uVar4 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    func_0x00014028b040(uVar4);
    *param_1 = unaff_R14;
    return param_1;
  }
  uVar7 = lVar2 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar7 - 8) = lVar2;
code_r0x00014000fa30:
  param_1[2] = param_3;
  param_1[3] = uVar6;
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar7,param_2,param_3);
}

