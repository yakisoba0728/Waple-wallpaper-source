// Function: FUN_140368270
// Addr: 140368270
// Size: 436 bytes


void FUN_140368270(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lStack0000000000000028;
  
  lVar11 = (longlong)(param_3 - 1) >> 1;
  lVar7 = param_2;
  while (lStack0000000000000028 = param_2, lVar7 < lVar11) {
    lVar12 = lVar7 * 2 + 2;
    lVar10 = lVar12 * 0x20;
    uVar3 = *(uint *)(lVar10 + -0x10 + param_1);
    uVar4 = *(uint *)(lVar10 + 0x10 + param_1);
    uVar5 = uVar3;
    if (uVar4 <= uVar3) {
      uVar5 = uVar4;
    }
    iVar8 = strncmp(*(char **)(lVar10 + 8 + param_1),*(char **)(lVar10 + -0x18 + param_1),
                    (ulonglong)uVar5);
    if (iVar8 == 0) {
      iVar8 = uVar4 - uVar3;
    }
    if (iVar8 < 0) {
      lVar12 = lVar7 * 2 + 1;
    }
    puVar1 = (undefined8 *)(lVar12 * 0x20 + param_1);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 * 0x20 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar1 = (undefined8 *)(lVar12 * 0x20 + 0x10 + param_1);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 * 0x20 + 0x10 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    lVar7 = lVar12;
    param_2 = lStack0000000000000028;
  }
  if ((lVar7 == lVar11) && ((param_3 & 1) == 0)) {
    puVar2 = (undefined8 *)(param_1 + -0x20 + param_3 * 0x20);
    uVar6 = puVar2[1];
    puVar1 = (undefined8 *)(lVar7 * 0x20 + param_1);
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)(param_1 + -0x10 + param_3 * 0x20);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 * 0x20 + 0x10 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    lVar7 = param_3 - 1;
  }
  while (param_2 < lVar7) {
    uVar3 = *(uint *)(param_4 + 2);
    lVar11 = lVar7 + -1 >> 1;
    lVar12 = lVar11 * 0x20;
    uVar4 = *(uint *)(lVar12 + param_1 + 0x10);
    uVar5 = uVar3;
    if (uVar4 <= uVar3) {
      uVar5 = uVar4;
    }
    iVar9 = strncmp(*(char **)(lVar12 + 8 + param_1),(char *)param_4[1],(ulonglong)uVar5);
    iVar8 = uVar4 - uVar3;
    if (iVar9 != 0) {
      iVar8 = iVar9;
    }
    if (-1 < iVar8) break;
    uVar6 = ((undefined8 *)(lVar12 + param_1))[1];
    puVar1 = (undefined8 *)(lVar7 * 0x20 + param_1);
    *puVar1 = *(undefined8 *)(lVar12 + param_1);
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)(lVar12 + 0x10 + param_1);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 * 0x20 + 0x10 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    lVar7 = lVar11;
  }
  uVar6 = param_4[1];
  puVar1 = (undefined8 *)(lVar7 * 0x20 + param_1);
  *puVar1 = *param_4;
  puVar1[1] = uVar6;
  uVar6 = param_4[3];
  puVar1 = (undefined8 *)(lVar7 * 0x20 + 0x10 + param_1);
  *puVar1 = param_4[2];
  puVar1[1] = uVar6;
  return;
}

