// Function: FUN_1401655e0
// Addr: 1401655e0
// Size: 613 bytes


void FUN_1401655e0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar7 = auStack_58;
  puVar9 = (undefined8 *)*param_1;
  uVar3 = param_1[2] - (longlong)puVar9 >> 6;
  if (param_3 <= uVar3) {
    puVar4 = (undefined8 *)param_1[1];
    uVar3 = (longlong)puVar4 - (longlong)puVar9 >> 6;
    if (uVar3 < param_3) {
      if (puVar9 != puVar4) {
        do {
          if (puVar9 != param_2) {
            puVar4 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar4 = (undefined8 *)*param_2;
            }
            FUN_14000f880(puVar9,puVar4,param_2[2]);
            plVar6 = param_2 + 4;
            if (0xf < (ulonglong)param_2[7]) {
              plVar6 = (longlong *)*plVar6;
            }
            FUN_14000f880(puVar9 + 4,plVar6,param_2[6]);
          }
          puVar4 = (undefined8 *)param_1[1];
          puVar9 = puVar9 + 8;
          param_2 = param_2 + 8;
        } while (puVar9 != puVar4);
      }
      for (lVar8 = param_3 - uVar3; lVar8 != 0; lVar8 = lVar8 + -1) {
        FUN_140016fc0(puVar4,param_2);
        FUN_140016fc0(puVar4 + 4,param_2 + 4);
        puVar4 = puVar4 + 8;
        param_2 = param_2 + 8;
      }
    }
    else {
      puVar4 = puVar9 + param_3 * 8;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar9 != param_2) {
          puVar5 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar5 = (undefined8 *)*param_2;
          }
          FUN_14000f880(puVar9,puVar5,param_2[2]);
          plVar6 = param_2 + 4;
          if (0xf < (ulonglong)param_2[7]) {
            plVar6 = (longlong *)*plVar6;
          }
          FUN_14000f880(puVar9 + 4,plVar6,param_2[6]);
        }
        puVar9 = puVar9 + 8;
        param_2 = param_2 + 8;
      }
      puVar9 = (undefined8 *)param_1[1];
      for (puVar5 = puVar4; puVar5 != puVar9; puVar5 = puVar5 + 8) {
        FUN_140017240(puVar5 + 4);
        FUN_140017240(puVar5);
      }
    }
    param_1[1] = (longlong)puVar4;
    return;
  }
  if (0x3ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar10 = 0x3ffffffffffffff;
  if ((uVar3 <= 0x3ffffffffffffff - (uVar3 >> 1)) &&
     (uVar10 = (uVar3 >> 1) + uVar3, uVar10 < param_3)) {
    uVar10 = param_3;
  }
  if (puVar9 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[1];
    for (; puVar9 != puVar4; puVar9 = puVar9 + 8) {
      FUN_140017240(puVar9 + 4);
      FUN_140017240(puVar9);
    }
    lVar8 = *param_1;
    lVar2 = lVar8;
    puVar7 = auStack_58;
    if ((0xfff < (param_1[2] - lVar8 & 0xffffffffffffffc0U)) &&
       (lVar2 = *(longlong *)(lVar8 + -8), puVar7 = auStack_58, 0x1f < (lVar8 - lVar2) - 8U)) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar7 = auStack_50;
    }
    *(undefined8 *)(puVar7 + -8) = 0x1401656a7;
    thunk_FUN_14028af80(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *(undefined8 *)(puVar7 + -8) = 0x1401656bf;
  FUN_14015bb00(param_1,uVar10);
  lVar8 = *param_1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined8 *)(puVar7 + -8) = 0x1401656db;
    FUN_140016fc0(lVar8,param_2);
    *(undefined8 *)(puVar7 + -8) = 0x1401656e8;
    FUN_140016fc0(lVar8 + 0x20,param_2 + 4);
    lVar8 = lVar8 + 0x40;
    param_2 = param_2 + 8;
  }
  param_1[1] = lVar8;
  return;
}

