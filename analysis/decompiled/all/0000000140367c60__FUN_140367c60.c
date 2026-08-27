// Function: FUN_140367c60
// Addr: 140367c60
// Size: 449 bytes


void FUN_140367c60(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar14 = (longlong)(param_3 - 1) >> 1;
  lVar13 = param_2;
  while (lVar13 < lVar14) {
    lVar5 = lVar13 * 2 + 2;
    uVar6 = *(uint *)(param_1 + -0x18 + lVar5 * 0x18);
    puVar1 = (uint *)(param_1 + lVar5 * 0x18);
    if (*puVar1 < uVar6) {
      iVar11 = -1;
    }
    else if (uVar6 < *puVar1) {
      iVar11 = 1;
    }
    else if ((byte)puVar1[1] < (byte)puVar1[-5]) {
      iVar11 = -1;
    }
    else if ((byte)puVar1[-5] < (byte)puVar1[1]) {
      iVar11 = 1;
    }
    else {
      iVar11 = FUN_1403b37e0(puVar1 + 2,puVar1 + -4);
    }
    lVar12 = lVar13 * 2 + 1;
    if (-1 < iVar11) {
      lVar12 = lVar5;
    }
    puVar2 = (undefined4 *)(param_1 + lVar12 * 0x18);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (undefined4 *)(param_1 + lVar13 * 0x18);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    *(undefined8 *)(param_1 + 0x10 + lVar13 * 0x18) =
         *(undefined8 *)(param_1 + 0x10 + lVar12 * 0x18);
    lVar13 = lVar12;
  }
  lVar5 = lVar13;
  if ((lVar13 == lVar14) && ((param_3 & 1) == 0)) {
    lVar5 = param_3 - 1;
    puVar3 = (undefined4 *)(param_1 + -0x18 + param_3 * 0x18);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar2 = (undefined4 *)(param_1 + lVar13 * 0x18);
    *puVar2 = *puVar3;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    *(undefined8 *)(param_1 + 0x10 + lVar13 * 0x18) = *(undefined8 *)(param_1 + -8 + param_3 * 0x18)
    ;
  }
  while (param_2 < lVar5) {
    lVar13 = lVar5 + -1 >> 1;
    uVar6 = *(uint *)(param_1 + lVar13 * 0x18);
    puVar2 = (undefined4 *)(param_1 + lVar13 * 0x18);
    if (uVar6 < *param_4) {
      iVar11 = -1;
    }
    else if (*param_4 < uVar6) {
      iVar11 = 1;
    }
    else if (*(byte *)(puVar2 + 1) < (byte)param_4[1]) {
      iVar11 = -1;
    }
    else if ((byte)param_4[1] < *(byte *)(puVar2 + 1)) {
      iVar11 = 1;
    }
    else {
      iVar11 = FUN_1403b37e0(puVar2 + 2,param_4 + 2);
    }
    if (-1 < iVar11) break;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (undefined4 *)(param_1 + lVar5 * 0x18);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    *(undefined8 *)(param_1 + 0x10 + lVar5 * 0x18) = *(undefined8 *)(puVar2 + 4);
    lVar5 = lVar13;
  }
  uVar10 = *(undefined8 *)(param_4 + 2);
  puVar4 = (undefined8 *)(param_1 + lVar5 * 0x18);
  *puVar4 = *(undefined8 *)param_4;
  puVar4[1] = uVar10;
  *(undefined8 *)(param_1 + 0x10 + lVar5 * 0x18) = *(undefined8 *)(param_4 + 4);
  return;
}

