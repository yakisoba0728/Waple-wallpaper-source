// Function: FUN_1401a29e0
// Addr: 1401a29e0
// Size: 340 bytes


void FUN_1401a29e0(longlong param_1,longlong param_2,ulonglong param_3,byte *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  
  lVar12 = (longlong)(param_3 - 1) >> 1;
  lVar11 = param_2;
  while (lVar11 < lVar12) {
    bVar6 = *(byte *)(param_1 + 0x18 + lVar11 * 0x30);
    bVar7 = *(byte *)(param_1 + 0x30 + lVar11 * 0x30);
    bVar14 = bVar7 < bVar6;
    if (bVar7 == bVar6) {
      uVar9 = *(uint *)(param_1 + 0x1c + lVar11 * 0x30);
      uVar8 = *(uint *)(param_1 + 0x34 + lVar11 * 0x30);
      bVar15 = uVar8 < uVar9;
      bVar14 = false;
      if (uVar8 == uVar9) {
        fVar4 = *(float *)(param_1 + 0x20 + lVar11 * 0x30);
        pfVar3 = (float *)(param_1 + 0x38 + lVar11 * 0x30);
        bVar14 = fVar4 == *pfVar3;
        bVar15 = fVar4 < *pfVar3;
      }
      bVar14 = !bVar15 && !bVar14;
    }
    lVar13 = (ulonglong)(bVar14 ^ 1) + (lVar11 * 2 | 1U);
    puVar1 = (undefined8 *)(param_1 + lVar13 * 0x18);
    uVar5 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + lVar11 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    *(undefined8 *)(param_1 + 0x10 + lVar11 * 0x18) =
         *(undefined8 *)(param_1 + 0x10 + lVar13 * 0x18);
    lVar11 = lVar13;
  }
  if ((lVar11 == lVar12) && ((param_3 & 1) == 0)) {
    puVar2 = (undefined8 *)(param_1 + -0x18 + param_3 * 0x18);
    uVar5 = puVar2[1];
    puVar1 = (undefined8 *)(param_1 + lVar11 * 0x18);
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    *(undefined8 *)(param_1 + 0x10 + lVar11 * 0x18) = *(undefined8 *)(param_1 + -8 + param_3 * 0x18)
    ;
    lVar11 = param_3 - 1;
  }
  if (param_2 < lVar11) {
    bVar6 = *param_4;
    do {
      lVar12 = lVar11 + -1 >> 1;
      bVar7 = *(byte *)(param_1 + lVar12 * 0x18);
      bVar14 = bVar7 < bVar6;
      if (bVar7 == bVar6) {
        uVar9 = *(uint *)(param_1 + 4 + lVar12 * 0x18);
        bVar15 = uVar9 < *(uint *)(param_4 + 4);
        bVar14 = false;
        if (uVar9 == *(uint *)(param_4 + 4)) {
          pfVar3 = (float *)(param_1 + 8 + lVar12 * 0x18);
          bVar14 = *(float *)(param_4 + 8) == *pfVar3;
          bVar15 = *(float *)(param_4 + 8) < *pfVar3;
        }
        bVar14 = !bVar15 && !bVar14;
      }
      if (!bVar14) break;
      puVar1 = (undefined8 *)(param_1 + lVar12 * 0x18);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + lVar11 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined8 *)(param_1 + 0x10 + lVar11 * 0x18) =
           *(undefined8 *)(param_1 + 0x10 + lVar12 * 0x18);
      lVar11 = lVar12;
    } while (param_2 < lVar12);
  }
  uVar10 = *(undefined8 *)(param_4 + 8);
  uVar5 = *(undefined8 *)(param_4 + 0x10);
  puVar1 = (undefined8 *)(param_1 + lVar11 * 0x18);
  *puVar1 = *(undefined8 *)param_4;
  puVar1[1] = uVar10;
  *(undefined8 *)(param_1 + 0x10 + lVar11 * 0x18) = uVar5;
  return;
}

