// Function: FUN_1401aaa10
// Addr: 1401aaa10
// Size: 133 bytes


void FUN_1401aaa10(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar5 = auStack_38;
  puVar6 = auStack_38;
  lVar3 = *param_1;
  uVar9 = param_1[1] - lVar3;
  uVar8 = (longlong)uVar9 >> 2;
  if (param_2 < uVar8) {
    param_1[1] = lVar3 + param_2 * 4;
  }
  else if (uVar8 < param_2) {
    uVar4 = param_1[2] - lVar3 >> 2;
    if (param_2 <= uVar4) {
      func_0x000140421870(param_1[1],0,(param_2 - uVar8) * 4);
      return;
    }
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140013120();
    }
    if ((uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) &&
       ((uVar4 = (uVar4 >> 1) + uVar4, uVar7 = param_2, uVar4 < param_2 ||
        (uVar7 = uVar4, uVar4 < 0x4000000000000000)))) {
      uVar7 = uVar7 * 4;
      if (uVar7 == 0) {
        uVar4 = 0;
        puVar6 = auStack_38;
      }
      else if (uVar7 < 0x1000) {
        uVar4 = func_0x00014028aff0();
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto code_r0x0001401aab75;
        lVar3 = func_0x00014028aff0(uVar7 + 0x27);
        if (lVar3 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar3 = (*pcVar2)(5);
          puVar5 = auStack_30;
        }
        uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar3;
        puVar6 = puVar5;
      }
      *(undefined **)(puVar6 + -8) = &UNK_1401aab17;
      func_0x000140421870(uVar4 + (uVar9 & 0xfffffffffffffffc),0,(param_2 - uVar8) * 4);
      lVar3 = *param_1;
      lVar1 = param_1[1];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar6 + -8) = &UNK_1401aab29;
      FUN_1404211c0(uVar4,lVar3,lVar1 - lVar3);
    }
code_r0x0001401aab75:
                    /* WARNING: Subroutine does not return */
    FUN_140017440();
  }
  return;
}

