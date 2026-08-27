// Function: FUN_1401aa940
// Addr: 1401aa940
// Size: 367 bytes


void FUN_1401aa940(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = auStack_38;
  puVar7 = auStack_38;
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar9 = lVar1 - lVar2 >> 2;
  if (param_2 < uVar9) {
    param_1[1] = lVar2 + param_2 * 4;
  }
  else if (uVar9 < param_2) {
    uVar5 = param_1[2] - lVar2 >> 2;
    if (uVar5 < param_2) {
      if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      if ((0x3fffffffffffffff - (uVar5 >> 1) < uVar5) ||
         ((uVar5 = (uVar5 >> 1) + uVar5, uVar8 = param_2, param_2 <= uVar5 &&
          (uVar8 = uVar5, 0x3fffffffffffffff < uVar5)))) {
LAB_1401aaaa5:
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      uVar5 = uVar8 * 4;
      if (uVar5 == 0) {
        uVar5 = 0;
        puVar7 = auStack_38;
      }
      else if (uVar5 < 0x1000) {
        uVar5 = FUN_14028af20();
      }
      else {
        if (uVar5 + 0x27 <= uVar5) goto LAB_1401aaaa5;
        lVar4 = FUN_14028af20(uVar5 + 0x27);
        if (lVar4 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar4 = (*pcVar3)(5);
          puVar6 = auStack_30;
        }
        uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar4;
        puVar7 = puVar6;
      }
      *(undefined8 *)(puVar7 + -8) = 0x1401aaa47;
      FUN_1404217a0(uVar5 + (lVar1 - lVar2 & 0xfffffffffffffffcU),0,(param_2 - uVar9) * 4);
      lVar1 = *param_1;
      lVar2 = param_1[1];
      *(undefined8 *)(puVar7 + -8) = 0x1401aaa59;
      FUN_1404210f0(uVar5,lVar1,lVar2 - lVar1);
      *(undefined8 *)(puVar7 + -8) = 0x1401aaa6a;
      FUN_140038af0(param_1,uVar5,param_2,uVar8);
    }
    else {
      lVar2 = (param_2 - uVar9) * 4;
      FUN_1404217a0(lVar1,0,lVar2);
      param_1[1] = lVar2 + lVar1;
    }
  }
  return;
}

