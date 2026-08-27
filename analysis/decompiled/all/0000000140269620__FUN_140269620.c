// Function: FUN_140269620
// Addr: 140269620
// Size: 401 bytes


void FUN_140269620(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar7 = auStack_38;
  puVar6 = auStack_38;
  puVar8 = (undefined8 *)param_1[1];
  lVar5 = *param_1;
  uVar9 = (longlong)puVar8 - lVar5 >> 4;
  if (param_2 < uVar9) {
    param_1[1] = param_2 * 0x10 + lVar5;
    return;
  }
  if (uVar9 < param_2) {
    uVar3 = param_1[2] - lVar5 >> 4;
    if (uVar3 < param_2) {
      if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      if ((0xfffffffffffffff - (uVar3 >> 1) < uVar3) ||
         ((uVar3 = (uVar3 >> 1) + uVar3, uVar10 = param_2, param_2 <= uVar3 &&
          (uVar10 = uVar3, 0xfffffffffffffff < uVar3)))) {
LAB_1402697a7:
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      uVar3 = 0;
      uVar4 = uVar10 * 0x10;
      if (uVar4 != 0) {
        if (uVar4 < 0x1000) {
          uVar3 = FUN_14028af20();
          puVar7 = auStack_38;
        }
        else {
          if (uVar4 + 0x27 <= uVar4) goto LAB_1402697a7;
          lVar2 = FUN_14028af20(uVar4 + 0x27);
          if (lVar2 == 0) {
            pcVar1 = (code *)swi(0x29);
            lVar2 = (*pcVar1)(5);
            puVar6 = auStack_30;
          }
          uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar3 - 8) = lVar2;
          puVar7 = puVar6;
        }
      }
      puVar8 = (undefined8 *)(((longlong)puVar8 - lVar5 & 0xfffffffffffffff0U) + uVar3);
      for (lVar5 = param_2 - uVar9; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 2;
      }
      lVar5 = *param_1;
      lVar2 = param_1[1];
      *(undefined8 *)(puVar7 + -8) = 0x140269753;
      FUN_1404210f0(uVar3,lVar5,lVar2 - lVar5);
      *(undefined8 *)(puVar7 + -8) = 0x140269764;
      FUN_14004f2e0(param_1,uVar3,param_2,uVar10);
    }
    else {
      for (lVar5 = param_2 - uVar9; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 2;
      }
      param_1[1] = (longlong)puVar8;
    }
  }
  return;
}

