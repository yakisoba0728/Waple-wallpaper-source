// Function: FUN_1401a7bb0
// Addr: 1401a7bb0
// Size: 862 bytes


longlong * FUN_1401a7bb0(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  
  if (param_2 == param_3) {
    return param_3;
  }
  plVar8 = param_2 + 2;
  puVar2 = *(undefined8 **)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x18);
  puVar4 = (undefined8 *)param_2[1];
  if (0xf < (ulonglong)param_2[5]) {
    plVar8 = (longlong *)*plVar8;
  }
  uVar9 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_2[4] != 0) {
    do {
      pbVar1 = (byte *)((longlong)plVar8 + uVar9);
      uVar9 = uVar9 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar9 < (ulonglong)param_2[4]);
  }
  lVar6 = (*(ulonglong *)(param_1 + 0x30) & uVar10) * 0x10;
  plVar11 = (longlong *)(lVar3 + 8 + lVar6);
  plVar8 = (longlong *)(lVar6 + lVar3);
  plVar5 = *(longlong **)(lVar6 + lVar3);
  plVar13 = (longlong *)*plVar11;
  plVar12 = param_2;
  while( true ) {
    lVar6 = 1;
    plVar14 = (longlong *)*plVar12;
    plVar15 = plVar12 + 0x1a;
    do {
      plVar15 = plVar15 + -4;
      FUN_140017240(plVar15);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    FUN_14000d9e0(plVar12 + 0x11);
    FUN_1400f8d70(plVar12 + 0xf);
    FUN_14000d9e0(plVar12 + 9);
    FUN_140164020(plVar12 + 7);
    FUN_140017240(plVar12 + 2);
    thunk_FUN_14028af80(plVar12);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar12 == plVar13) break;
    plVar12 = plVar14;
    if (plVar14 == param_3) {
      if (plVar5 == param_2) {
LAB_1401a7e9b:
        *plVar8 = (longlong)plVar14;
      }
LAB_1401a7e9e:
      *puVar4 = plVar14;
      plVar14[1] = (longlong)puVar4;
      return param_3;
    }
  }
  puVar7 = puVar4;
  if (plVar5 == param_2) {
    *plVar8 = (longlong)puVar2;
    puVar7 = puVar2;
  }
  *plVar11 = (longlong)puVar7;
  while (plVar14 != param_3) {
    plVar8 = plVar14 + 2;
    if (0xf < (ulonglong)plVar14[5]) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar10 = 0;
    uVar9 = 0xcbf29ce484222325;
    if (plVar14[4] != 0) {
      do {
        pbVar1 = (byte *)((longlong)plVar8 + uVar10);
        uVar10 = uVar10 + 1;
        uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
      } while (uVar10 < (ulonglong)plVar14[4]);
    }
    uVar9 = *(ulonglong *)(param_1 + 0x30) & uVar9;
    plVar8 = (longlong *)(lVar3 + uVar9 * 0x10);
    plVar5 = *(longlong **)(lVar3 + 8 + uVar9 * 0x10);
    plVar13 = plVar14;
    while( true ) {
      lVar6 = 1;
      plVar14 = (longlong *)*plVar13;
      plVar12 = plVar13 + 0x1a;
      do {
        plVar12 = plVar12 + -4;
        FUN_140017240(plVar12);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      FUN_14000d9e0(plVar13 + 0x11);
      FUN_1400f8d70(plVar13 + 0xf);
      FUN_14000d9e0(plVar13 + 9);
      FUN_140164020(plVar13 + 7);
      FUN_140017240(plVar13 + 2);
      thunk_FUN_14028af80(plVar13,0xd0);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      if (plVar13 == plVar5) break;
      plVar13 = plVar14;
      if (plVar14 == param_3) goto LAB_1401a7e9b;
    }
    *plVar8 = (longlong)puVar2;
    *(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) = puVar2;
  }
  goto LAB_1401a7e9e;
}

