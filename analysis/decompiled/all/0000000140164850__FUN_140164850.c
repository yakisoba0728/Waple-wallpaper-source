// Function: FUN_140164850
// Addr: 140164850
// Size: 449 bytes


undefined4 * FUN_140164850(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 local_res8;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    puVar1 = *(undefined8 **)(param_2 + 2);
    puVar2 = *(undefined8 **)(param_1 + 2);
    puVar3 = (undefined8 *)*puVar1;
    for (puVar9 = (undefined8 *)*puVar2; puVar9 != puVar2; puVar9 = (undefined8 *)*puVar9) {
      if (puVar3 == puVar1) {
        if (puVar9 != puVar2) {
          plVar10 = (longlong *)puVar9[1];
          lVar8 = 0;
          *plVar10 = (longlong)puVar2;
          puVar2[1] = plVar10;
          do {
            puVar1 = (undefined8 *)*puVar9;
            FUN_14003a630(puVar9 + 0x11);
            FUN_140017240(puVar9 + 0xc);
            FUN_140017240(puVar9 + 8);
            FUN_140017240(puVar9 + 4);
            thunk_FUN_14028af80(puVar9,0xa0);
            lVar8 = lVar8 + 1;
            puVar9 = puVar1;
          } while (puVar1 != puVar2);
          *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) - lVar8;
        }
        goto LAB_1401649c9;
      }
      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar3 + 2);
      FUN_140164d70(puVar9 + 3,puVar3 + 3);
      puVar3 = (undefined8 *)*puVar3;
    }
    if (puVar3 == puVar1) {
      lVar8 = 0;
      plVar5 = (longlong *)0x0;
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)FUN_14028af20(0xa0);
      FUN_140157330(plVar5 + 2,puVar3 + 2);
      lVar8 = 1;
      plVar10 = plVar5;
      for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
        plVar6 = (longlong *)FUN_14028af20(0xa0);
        FUN_140157330(plVar6 + 2,puVar3 + 2);
        *plVar10 = (longlong)plVar6;
        lVar8 = lVar8 + 1;
        plVar6[1] = (longlong)plVar10;
        plVar10 = plVar6;
      }
    }
    if (lVar8 != 0) {
      lVar4 = *(longlong *)(param_1 + 2);
      puVar1 = *(undefined8 **)(lVar4 + 8);
      plVar5[1] = (longlong)puVar1;
      *puVar1 = plVar5;
      *plVar10 = lVar4;
      *(longlong **)(lVar4 + 8) = plVar10;
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + lVar8;
    }
LAB_1401649c9:
    uVar7 = FUN_140012f40(param_1,*(undefined8 *)(param_1 + 4));
    FUN_1401650d0(param_1,uVar7);
    local_res8 = 0;
    FUN_140164a20(&local_res8);
  }
  return param_1;
}

