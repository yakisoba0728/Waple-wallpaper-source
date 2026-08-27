// Function: FUN_140336b30
// Addr: 140336b30
// Size: 520 bytes


void FUN_140336b30(longlong param_1,byte *param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if (*(int *)param_2 == 0) {
    bVar5 = false;
    param_2 = param_3;
  }
  else if (*(int *)param_3 == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if (*(int *)(param_3 + 0x10) < *(int *)(param_2 + 0x10)) {
      return;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar12 = 0;
  if (uVar3 != 0) {
    do {
      if (*(int *)(param_2 + 0x10) <= *(int *)(uVar12 * 0x20 + 0x38 + param_1)) break;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < uVar3);
  }
  uVar11 = (uint)uVar12;
  if (uVar11 < uVar3) {
    iVar6 = *(int *)(uVar12 * 0x20 + 0x38 + param_1);
    if (iVar6 == *(int *)(param_2 + 0x10)) {
      return;
    }
    if ((bVar5) && (iVar6 <= *(int *)(param_3 + 0x10))) {
      return;
    }
    if ((*(byte *)(uVar12 * 0x20 + 0x28 + param_1) & 8) != 0) {
      return;
    }
  }
  lVar8 = *(longlong *)(param_1 + 8);
  if ((*(char *)(lVar8 + 0x18) != '\0') && ((*param_2 & 0x10) == 0)) {
    iVar6 = *(int *)(param_2 + 0x10);
    if (bVar5) {
      iVar6 = FUN_140336d40(lVar8,iVar6 + (*(int *)(param_3 + 0x10) - iVar6) / 2);
      lVar8 = (longlong)((*(int *)(param_3 + 0x10) - *(int *)(param_2 + 0x10)) / 2) *
              (longlong)*(int *)(param_1 + 0x1c);
      iVar9 = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
      *(int *)(param_2 + 0x14) = iVar6 - iVar9;
      *(int *)(param_3 + 0x14) = iVar9 + iVar6;
    }
    else {
      uVar7 = FUN_140336d40(lVar8,iVar6);
      *(undefined4 *)(param_2 + 0x14) = uVar7;
    }
  }
  if ((uVar11 != 0) &&
     (*(int *)(param_2 + 0x14) < *(int *)((ulonglong)(uVar11 - 1) * 0x20 + 0x3c + param_1))) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar11 < uVar3) {
    iVar6 = *(int *)(uVar12 * 0x20 + 0x3c + param_1);
    if (bVar5) {
      if (iVar6 < *(int *)(param_3 + 0x14)) {
        return;
      }
      uVar10 = (ulonglong)(uVar3 + 1);
      goto LAB_140336c93;
    }
    if (iVar6 < *(int *)(param_2 + 0x14)) {
      return;
    }
  }
  else if (bVar5) {
    uVar10 = (ulonglong)(uVar3 + 1);
    goto LAB_140336c93;
  }
  uVar10 = (ulonglong)uVar3;
LAB_140336c93:
  if ((uint)uVar10 < 0xc0) {
    for (iVar6 = uVar3 - uVar11; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar3 = uVar3 - 1;
      puVar1 = (undefined8 *)((ulonglong)uVar3 * 0x20 + 0x28 + param_1);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(uVar10 * 0x20 + 0x28 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar1 = (undefined8 *)((ulonglong)uVar3 * 0x20 + 0x38 + param_1);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(uVar10 * 0x20 + 0x38 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      uVar10 = (ulonglong)((int)uVar10 - 1);
    }
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = (undefined8 *)(uVar12 * 0x20 + 0x28 + param_1);
    *puVar1 = *(undefined8 *)param_2;
    puVar1[1] = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    puVar1 = (undefined8 *)(uVar12 * 0x20 + 0x38 + param_1);
    *puVar1 = *(undefined8 *)(param_2 + 0x10);
    puVar1[1] = uVar4;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    if (bVar5) {
      uVar4 = *(undefined8 *)(param_3 + 8);
      lVar8 = (ulonglong)(uVar11 + 1) * 0x20;
      puVar1 = (undefined8 *)(lVar8 + 0x28 + param_1);
      *puVar1 = *(undefined8 *)param_3;
      puVar1[1] = uVar4;
      uVar4 = *(undefined8 *)(param_3 + 0x18);
      puVar1 = (undefined8 *)(lVar8 + 0x38 + param_1);
      *puVar1 = *(undefined8 *)(param_3 + 0x10);
      puVar1[1] = uVar4;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
  }
  return;
}

