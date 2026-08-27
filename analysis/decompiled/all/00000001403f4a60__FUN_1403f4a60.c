// Function: FUN_1403f4a60
// Addr: 1403f4a60
// Size: 300 bytes


void FUN_1403f4a60(int param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  if (param_1 == 0x1d) {
    uVar6 = *(uint *)(param_2 + 0x10);
    uVar7 = *(uint *)(param_2 + 0x14);
    puVar9 = &DAT_14045dd10;
    uVar5 = uVar6 + 1;
    if (uVar7 < uVar6) {
      puVar12 = (undefined8 *)((ulonglong)uVar7 + *(longlong *)(param_2 + 8));
    }
    else {
      *(uint *)(param_2 + 0x14) = uVar5;
      puVar12 = &DAT_14045dd10;
      uVar7 = uVar5;
    }
    if (uVar7 + 1 < uVar6) {
      puVar11 = (undefined8 *)((ulonglong)(uVar7 + 1) + *(longlong *)(param_2 + 8));
    }
    else {
      *(uint *)(param_2 + 0x14) = uVar5;
      puVar11 = &DAT_14045dd10;
      uVar7 = uVar5;
    }
    if (uVar7 + 2 < uVar6) {
      puVar10 = (undefined8 *)((ulonglong)(uVar7 + 2) + *(longlong *)(param_2 + 8));
    }
    else {
      *(uint *)(param_2 + 0x14) = uVar5;
      puVar10 = &DAT_14045dd10;
      uVar7 = uVar5;
    }
    if (uVar7 + 3 < uVar6) {
      puVar9 = (undefined8 *)((ulonglong)(uVar7 + 3) + *(longlong *)(param_2 + 8));
    }
    else {
      *(uint *)(param_2 + 0x14) = uVar5;
    }
    uVar1 = *(undefined1 *)puVar11;
    uVar2 = *(undefined1 *)puVar12;
    uVar3 = *(undefined1 *)puVar10;
    uVar4 = *(undefined1 *)puVar9;
    uVar5 = *(uint *)(param_2 + 0x1c);
    if (uVar5 < 0x201) {
      pdVar8 = (double *)(param_2 + 0x20 + (ulonglong)uVar5 * 8);
      *(uint *)(param_2 + 0x1c) = uVar5 + 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x18) = 1;
      pdVar8 = (double *)&DAT_1404e4f20;
    }
    *pdVar8 = (double)CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4);
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 4;
    return;
  }
  if (param_1 != 0x1e) {
    FUN_1403f42e0();
    return;
  }
  uVar13 = FUN_1403f0860(param_2);
  uVar5 = *(uint *)(param_2 + 0x1c);
  if (uVar5 < 0x201) {
    *(uint *)(param_2 + 0x1c) = uVar5 + 1;
    *(undefined8 *)(param_2 + 0x20 + (ulonglong)uVar5 * 8) = uVar13;
    return;
  }
  *(undefined1 *)(param_2 + 0x18) = 1;
  DAT_1404e4f20 = uVar13;
  return;
}

