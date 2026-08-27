// Function: FUN_140365920
// Addr: 140365920
// Size: 1129 bytes


void FUN_140365920(ulonglong *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  
  puVar13 = param_3 + 4;
  if (param_2 < param_3) {
    uVar7 = *param_3;
    do {
      uVar10 = param_3[-4];
      puVar9 = param_3 + -4;
      iVar8 = (uVar7 >> 0x10 & 0xff) * 0x100;
      iVar5 = (uVar7 >> 8 & 0xff) * 0x10000;
      iVar15 = (uVar10 >> 8 & 0xff) * 0x10000;
      iVar16 = (uVar10 >> 0x10 & 0xff) * 0x100;
      uVar6 = uVar7 * 0x1000000 + iVar5 + iVar8 + (uVar7 >> 0x18);
      uVar12 = iVar15 + uVar10 * 0x1000000 + iVar16 + (uVar10 >> 0x18);
      if (((int)((uint)(uVar6 < uVar12) - (uint)(uVar12 < uVar6)) < 0) ||
         (uVar6 = iVar5 + iVar8 + uVar7 * 0x1000000 + (uVar7 >> 0x18),
         uVar7 = iVar15 + uVar10 * 0x1000000 + iVar16 + (uVar10 >> 0x18),
         (int)((uint)(uVar7 < uVar6) - (uint)(uVar6 < uVar7)) < 0)) break;
      param_3 = puVar9;
      uVar7 = uVar10;
    } while (param_2 < puVar9);
  }
  puVar14 = puVar13;
  puVar9 = param_3;
  if (puVar13 < param_4) {
    uVar7 = *param_3;
    iVar5 = (uVar7 >> 8 & 0xff) * 0x10000;
    iVar8 = (uVar7 >> 0x10 & 0xff) * 0x100;
    uVar10 = uVar7 * 0x1000000 + iVar5 + iVar8 + (uVar7 >> 0x18);
    do {
      uVar6 = *puVar13;
      iVar16 = (uVar6 >> 0x10 & 0xff) * 0x100;
      iVar15 = (uVar6 >> 8 & 0xff) * 0x10000;
      uVar12 = uVar6 * 0x1000000 + iVar15 + iVar16 + (uVar6 >> 0x18);
      puVar14 = puVar13;
      if (((int)((uint)(uVar10 < uVar12) - (uint)(uVar12 < uVar10)) < 0) ||
         (uVar6 = uVar6 * 0x1000000 + iVar15 + iVar16 + (uVar6 >> 0x18),
         uVar12 = uVar7 * 0x1000000 + (uVar7 >> 0x18) + iVar8 + iVar5,
         (int)((uint)(uVar6 < uVar12) - (uint)(uVar12 < uVar6)) < 0)) break;
      puVar13 = puVar13 + 4;
      puVar14 = puVar13;
    } while (puVar13 < param_4);
  }
joined_r0x000140365af3:
  do {
    puVar11 = param_3;
    if (param_4 <= puVar13) {
joined_r0x000140365be0:
      while (param_3 = puVar11, puVar4 = puVar9, param_2 < puVar4) {
        uVar7 = puVar4[-4];
        puVar9 = puVar4 + -4;
        uVar10 = *param_3;
        iVar8 = (uVar10 >> 0x10 & 0xff) * 0x100;
        iVar5 = (uVar10 >> 8 & 0xff) * 0x10000;
        iVar15 = (uVar7 >> 8 & 0xff) * 0x10000;
        iVar16 = (uVar7 >> 0x10 & 0xff) * 0x100;
        uVar6 = uVar10 * 0x1000000 + iVar5 + iVar8 + (uVar10 >> 0x18);
        uVar12 = iVar15 + uVar7 * 0x1000000 + iVar16 + (uVar7 >> 0x18);
        puVar11 = param_3;
        if (-1 < (int)((uint)(uVar6 < uVar12) - (uint)(uVar12 < uVar6))) {
          uVar10 = iVar5 + iVar8 + uVar10 * 0x1000000 + (uVar10 >> 0x18);
          uVar7 = iVar15 + uVar7 * 0x1000000 + iVar16 + (uVar7 >> 0x18);
          if ((int)((uint)(uVar7 < uVar10) - (uint)(uVar10 < uVar7)) < 0) break;
          puVar11 = param_3 + -4;
          if (puVar11 != puVar9) {
            uVar1 = *(undefined8 *)(puVar4 + -2);
            uVar2 = *(undefined8 *)puVar11;
            uVar3 = *(undefined8 *)(param_3 + -2);
            *(undefined8 *)puVar11 = *(undefined8 *)puVar9;
            *(undefined8 *)(param_3 + -2) = uVar1;
            *(undefined8 *)puVar9 = uVar2;
            *(undefined8 *)(puVar4 + -2) = uVar3;
          }
        }
      }
      if (puVar4 == param_2) {
        if (puVar13 == param_4) {
          *param_1 = (ulonglong)param_3;
          param_1[1] = (ulonglong)puVar14;
          return;
        }
        if (puVar14 != puVar13) {
          uVar1 = *(undefined8 *)(puVar14 + 2);
          uVar2 = *(undefined8 *)param_3;
          uVar3 = *(undefined8 *)(param_3 + 2);
          *(undefined8 *)param_3 = *(undefined8 *)puVar14;
          *(undefined8 *)(param_3 + 2) = uVar1;
          *(undefined8 *)puVar14 = uVar2;
          *(undefined8 *)(puVar14 + 2) = uVar3;
        }
        uVar1 = *(undefined8 *)(puVar13 + 2);
        uVar2 = *(undefined8 *)param_3;
        uVar3 = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_3 = *(undefined8 *)puVar13;
        *(undefined8 *)(param_3 + 2) = uVar1;
        *(undefined8 *)puVar13 = uVar2;
        *(undefined8 *)(puVar13 + 2) = uVar3;
        puVar13 = puVar13 + 4;
        puVar14 = puVar14 + 4;
        param_3 = param_3 + 4;
        puVar9 = puVar4;
      }
      else {
        puVar9 = puVar4 + -4;
        if (puVar13 == param_4) {
          puVar11 = param_3 + -4;
          if (puVar9 != puVar11) {
            uVar1 = *(undefined8 *)(param_3 + -2);
            uVar2 = *(undefined8 *)puVar9;
            uVar3 = *(undefined8 *)(puVar4 + -2);
            *(undefined8 *)puVar9 = *(undefined8 *)puVar11;
            *(undefined8 *)(puVar4 + -2) = uVar1;
            *(undefined8 *)puVar11 = uVar2;
            *(undefined8 *)(param_3 + -2) = uVar3;
          }
          uVar1 = *(undefined8 *)(puVar14 + -2);
          uVar2 = *(undefined8 *)puVar11;
          uVar3 = *(undefined8 *)(param_3 + -2);
          *(undefined8 *)puVar11 = *(undefined8 *)(puVar14 + -4);
          *(undefined8 *)(param_3 + -2) = uVar1;
          *(undefined8 *)(puVar14 + -4) = uVar2;
          *(undefined8 *)(puVar14 + -2) = uVar3;
          puVar14 = puVar14 + -4;
          param_3 = puVar11;
        }
        else {
          uVar1 = *(undefined8 *)puVar13;
          uVar2 = *(undefined8 *)(puVar13 + 2);
          uVar3 = *(undefined8 *)(puVar4 + -2);
          *(undefined8 *)puVar13 = *(undefined8 *)puVar9;
          *(undefined8 *)(puVar13 + 2) = uVar3;
          puVar13 = puVar13 + 4;
          *(undefined8 *)puVar9 = uVar1;
          *(undefined8 *)(puVar4 + -2) = uVar2;
        }
      }
      goto joined_r0x000140365af3;
    }
    uVar7 = *param_3;
    uVar10 = *puVar13;
    iVar8 = (uVar10 >> 0x10 & 0xff) * 0x100;
    iVar16 = (uVar7 >> 8 & 0xff) * 0x10000;
    iVar15 = (uVar7 >> 0x10 & 0xff) * 0x100;
    iVar5 = (uVar10 >> 8 & 0xff) * 0x10000;
    uVar12 = uVar7 * 0x1000000 + iVar16 + iVar15 + (uVar7 >> 0x18);
    uVar6 = iVar8 + iVar5 + uVar10 * 0x1000000 + (uVar10 >> 0x18);
    if (-1 < (int)((uint)(uVar6 < uVar12) - (uint)(uVar12 < uVar6))) {
      uVar10 = iVar5 + iVar8 + uVar10 * 0x1000000 + (uVar10 >> 0x18);
      uVar7 = uVar7 * 0x1000000 + iVar16 + iVar15 + (uVar7 >> 0x18);
      if ((int)((uint)(uVar7 < uVar10) - (uint)(uVar10 < uVar7)) < 0) goto joined_r0x000140365be0;
      if (puVar14 != puVar13) {
        uVar1 = *(undefined8 *)(puVar13 + 2);
        uVar2 = *(undefined8 *)puVar14;
        uVar3 = *(undefined8 *)(puVar14 + 2);
        *(undefined8 *)puVar14 = *(undefined8 *)puVar13;
        *(undefined8 *)(puVar14 + 2) = uVar1;
        *(undefined8 *)puVar13 = uVar2;
        *(undefined8 *)(puVar13 + 2) = uVar3;
      }
      puVar14 = puVar14 + 4;
    }
    puVar13 = puVar13 + 4;
  } while( true );
}

