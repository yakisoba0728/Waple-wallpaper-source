// Function: FUN_14014df30
// Addr: 14014df30
// Size: 512 bytes


undefined4 * FUN_14014df30(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  if (param_1 != param_2) {
    param_1[8] = param_2[8];
    puVar1 = *(undefined8 **)(param_2 + 10);
    puVar2 = *(undefined8 **)(param_1 + 10);
    puVar3 = (undefined8 *)*puVar1;
    for (puVar8 = (undefined8 *)*puVar2; puVar8 != puVar2; puVar8 = (undefined8 *)*puVar8) {
      if (puVar3 == puVar1) {
        if (puVar8 != puVar2) {
          plVar9 = (longlong *)puVar8[1];
          lVar7 = 0;
          *plVar9 = (longlong)puVar2;
          puVar2[1] = plVar9;
          do {
            puVar1 = (undefined8 *)*puVar8;
            FUN_140017240(puVar8 + 6);
            FUN_140017240(puVar8 + 2);
            thunk_FUN_14028af80(puVar8,0x50);
            lVar7 = lVar7 + 1;
            puVar8 = puVar1;
          } while (puVar1 != puVar2);
          *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) - lVar7;
        }
        goto LAB_14014e0ef;
      }
      if (puVar8 != puVar3) {
        plVar9 = puVar3 + 2;
        if (0xf < (ulonglong)puVar3[5]) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_14000f880(puVar8 + 2,plVar9,puVar3[4]);
        plVar9 = puVar3 + 6;
        if (0xf < (ulonglong)puVar3[9]) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_14000f880(puVar8 + 6,plVar9,puVar3[8]);
      }
      puVar3 = (undefined8 *)*puVar3;
    }
    if (puVar3 == puVar1) {
      plVar4 = (longlong *)0x0;
      plVar10 = (longlong *)0x0;
      plVar9 = plVar4;
    }
    else {
      plVar4 = (longlong *)FUN_14028af20(0x50);
      FUN_140016fc0(plVar4 + 2,puVar3 + 2);
      FUN_140016fc0(plVar4 + 6,puVar3 + 6);
      plVar9 = (longlong *)0x1;
      plVar10 = plVar4;
      for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
        plVar5 = (longlong *)FUN_14028af20(0x50);
        FUN_140016fc0(plVar5 + 2,puVar3 + 2);
        FUN_140016fc0(plVar5 + 6,puVar3 + 6);
        *plVar10 = (longlong)plVar5;
        plVar9 = (longlong *)((longlong)plVar9 + 1);
        plVar5[1] = (longlong)plVar10;
        plVar10 = plVar5;
      }
    }
    if (plVar9 != (longlong *)0x0) {
      lVar7 = *(longlong *)(param_1 + 10);
      puVar1 = *(undefined8 **)(lVar7 + 8);
      plVar4[1] = (longlong)puVar1;
      *puVar1 = plVar4;
      *plVar10 = lVar7;
      *(longlong **)(lVar7 + 8) = plVar10;
      *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) + (longlong)plVar9;
    }
LAB_14014e0ef:
    uVar6 = FUN_140012f40(param_1 + 8,*(undefined8 *)(param_1 + 0xc));
    FUN_140012ca0(param_1 + 8,uVar6);
  }
  return param_1;
}

