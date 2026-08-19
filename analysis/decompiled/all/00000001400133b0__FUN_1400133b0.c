// Function: FUN_1400133b0
// Addr: 1400133b0
// Size: 204 bytes


ulonglong *
FUN_1400133b0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined2 param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  undefined2 uStack_20;
  
  puVar9 = auStack_48;
  uVar3 = param_1[2];
  uVar8 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar4 = param_1[3];
  uVar7 = uVar3 + param_2 | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    uVar2 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar7;
    if (uVar7 < uVar2) {
      uVar8 = uVar2;
    }
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_140013548;
    uVar7 = (uVar8 + 1) * 2;
    if (uVar7 != 0) goto LAB_140013454;
    uVar7 = 0;
  }
  else {
    uVar7 = 0xfffffffffffffffe;
LAB_140013454:
    if (0xfff < uVar7) {
      if (uVar7 < uVar7 + 0x27) {
        puVar6 = (ulonglong *)func_0x00014028aff0(uVar7 + 0x27);
        return puVar6;
      }
LAB_140013548:
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    uVar7 = func_0x00014028aff0();
  }
  param_1[2] = uVar3 + param_2;
  param_1[3] = uVar8;
  if (uVar4 < 8) {
    uStack_20 = param_6;
    uStack_28 = param_5;
    func_0x0001400132d0(uVar7,param_1,uVar3,param_4);
  }
  else {
    uVar8 = *param_1;
    uStack_20 = param_6;
    uStack_28 = param_5;
    func_0x0001400132d0(uVar7,uVar8,uVar3,param_4);
    if (0xfff < uVar4 * 2 + 2) {
      plVar1 = (longlong *)(uVar8 - 8);
      uVar8 = (uVar8 - *plVar1) - 8;
      if (uVar8 < 0x20) {
        func_0x00014028b040(*plVar1,uVar4 * 2 + 0x29);
        goto code_r0x000140013524;
      }
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar9 = auStack_40;
    }
    *(undefined8 *)(puVar9 + -8) = 0x140013503;
    func_0x00014028b040(uVar8);
  }
code_r0x000140013524:
  *param_1 = uVar7;
  return param_1;
}

