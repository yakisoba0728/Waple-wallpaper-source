// Function: FUN_14014ed90
// Addr: 14014ed90
// Size: 435 bytes


undefined4 * FUN_14014ed90(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 local_res8;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    puVar1 = *(undefined8 **)(param_2 + 2);
    puVar2 = *(undefined8 **)(param_1 + 2);
    puVar3 = (undefined8 *)*puVar1;
    for (puVar10 = (undefined8 *)*puVar2; puVar10 != puVar2; puVar10 = (undefined8 *)*puVar10) {
      if (puVar3 == puVar1) {
        if (puVar10 != puVar2) {
          plVar8 = (longlong *)puVar10[1];
          lVar9 = 0;
          *plVar8 = (longlong)puVar2;
          puVar2[1] = plVar8;
          do {
            puVar1 = (undefined8 *)*puVar10;
            FUN_140017240(puVar10 + 2);
            thunk_FUN_14028af80(puVar10,0x38);
            lVar9 = lVar9 + 1;
            puVar10 = puVar1;
          } while (puVar1 != puVar2);
          *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) - lVar9;
        }
        goto LAB_14014eefb;
      }
      if (puVar10 != puVar3) {
        plVar8 = puVar3 + 2;
        if (0xf < (ulonglong)puVar3[5]) {
          plVar8 = (longlong *)*plVar8;
        }
        FUN_14000f880(puVar10 + 2,plVar8,puVar3[4]);
      }
      puVar10[6] = puVar3[6];
      puVar3 = (undefined8 *)*puVar3;
    }
    if (puVar3 == puVar1) {
      lVar9 = 0;
      plVar5 = (longlong *)0x0;
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)FUN_14028af20(0x38);
      FUN_140016fc0(plVar5 + 2,puVar3 + 2);
      plVar5[6] = puVar3[6];
      lVar9 = 1;
      plVar8 = plVar5;
      for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
        plVar6 = (longlong *)FUN_14028af20(0x38);
        FUN_140016fc0(plVar6 + 2,puVar3 + 2);
        lVar9 = lVar9 + 1;
        plVar6[6] = puVar3[6];
        *plVar8 = (longlong)plVar6;
        plVar6[1] = (longlong)plVar8;
        plVar8 = plVar6;
      }
    }
    if (lVar9 != 0) {
      lVar4 = *(longlong *)(param_1 + 2);
      puVar1 = *(undefined8 **)(lVar4 + 8);
      plVar5[1] = (longlong)puVar1;
      *puVar1 = plVar5;
      *plVar8 = lVar4;
      *(longlong **)(lVar4 + 8) = plVar8;
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + lVar9;
    }
LAB_14014eefb:
    uVar7 = FUN_140012f40(param_1,*(undefined8 *)(param_1 + 4));
    FUN_14014f8a0(param_1,uVar7);
    local_res8 = 0;
    FUN_14003a070(&local_res8);
  }
  return param_1;
}

