// Function: FUN_1401b41d0
// Addr: 1401b41d0
// Size: 124 bytes


void FUN_1401b41d0(longlong *param_1,ulonglong param_2)

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
  uVar7 = (longlong)uVar9 >> 1;
  if (param_2 < uVar7) {
    param_1[1] = lVar3 + param_2 * 2;
  }
  else if (uVar7 < param_2) {
    uVar4 = param_1[2] - lVar3 >> 1;
    if (param_2 <= uVar4) {
      func_0x000140421870(param_1[1],0,(param_2 - uVar7) * 2);
      return;
    }
    if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140013120();
    }
    if ((uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) &&
       ((uVar4 = (uVar4 >> 1) + uVar4, uVar8 = param_2, uVar4 < param_2 ||
        (uVar8 = uVar4, uVar4 < 0x8000000000000000)))) {
      uVar8 = uVar8 * 2;
      if (uVar8 == 0) {
        uVar4 = 0;
        puVar6 = auStack_38;
      }
      else if (uVar8 < 0x1000) {
        uVar4 = func_0x00014028aff0();
      }
      else {
        if (uVar8 + 0x27 <= uVar8) goto code_r0x0001401b4327;
        lVar3 = func_0x00014028aff0(uVar8 + 0x27);
        if (lVar3 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar3 = (*pcVar2)(5);
          puVar5 = auStack_30;
        }
        uVar4 = lVar3 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar3;
        puVar6 = puVar5;
      }
      *(undefined8 *)(puVar6 + -8) = 0x1401b42cf;
      func_0x000140421870(uVar4 + (uVar9 & 0xfffffffffffffffe),0,(param_2 - uVar7) * 2);
      lVar3 = *param_1;
      lVar1 = param_1[1];
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar6 + -8) = 0x1401b42e1;
      FUN_1404211c0(uVar4,lVar3,lVar1 - lVar3);
    }
code_r0x0001401b4327:
                    /* WARNING: Subroutine does not return */
    FUN_140017440();
  }
  return;
}

