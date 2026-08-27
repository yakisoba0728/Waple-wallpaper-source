// Function: FUN_140363e40
// Addr: 140363e40
// Size: 494 bytes


void FUN_140363e40(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  
  uVar6 = (param_2 - param_1) / 0x1c;
  lVar16 = (longlong)uVar6 >> 1;
  if (0 < lVar16) {
    lVar17 = (longlong)(uVar6 - 1) >> 1;
    do {
      lVar16 = lVar16 + -1;
      lVar12 = lVar16 * 0x1c;
      uVar3 = *(uint *)(lVar12 + param_1);
      uVar4 = *(uint *)(lVar12 + 4 + param_1);
      uVar5 = *(undefined4 *)(lVar12 + 0x18 + param_1);
      puVar2 = (undefined8 *)(lVar12 + 8 + param_1);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      lVar12 = lVar16;
      while (lVar12 < lVar17) {
        lVar14 = lVar12 * 2 + 2;
        lVar13 = lVar14 * 0x1c;
        uVar11 = *(uint *)(lVar13 + -0x1c + param_1);
        puVar15 = (uint *)(lVar13 + param_1);
        if (*puVar15 == uVar11) {
          if (puVar15[1] < puVar15[-6]) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = (uint)(puVar15[-6] < puVar15[1]);
          }
        }
        else {
          uVar10 = 1;
          if (*puVar15 < uVar11) {
            uVar10 = 0xffffffff;
          }
        }
        lVar13 = lVar12 * 2 + 1;
        if (-1 < (int)uVar10) {
          lVar13 = lVar14;
        }
        puVar2 = (undefined8 *)(lVar13 * 0x1c + param_1);
        uVar9 = puVar2[1];
        puVar1 = (undefined8 *)(lVar12 * 0x1c + param_1);
        *puVar1 = *puVar2;
        puVar1[1] = uVar9;
        puVar2 = (undefined8 *)(lVar13 * 0x1c + 0xc + param_1);
        uVar9 = puVar2[1];
        puVar1 = (undefined8 *)(lVar12 * 0x1c + 0xc + param_1);
        *puVar1 = *puVar2;
        puVar1[1] = uVar9;
        lVar12 = lVar13;
      }
      if ((lVar12 == lVar17) && ((uVar6 & 1) == 0)) {
        lVar14 = lVar12 * 0x1c;
        puVar1 = (undefined8 *)(uVar6 * 0x1c + -0x1c + param_1);
        uVar9 = puVar1[1];
        lVar12 = uVar6 - 1;
        puVar2 = (undefined8 *)(lVar14 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        puVar2 = (undefined8 *)(uVar6 * 0x1c + -0x10 + param_1);
        uVar9 = puVar2[1];
        puVar1 = (undefined8 *)(lVar14 + 0xc + param_1);
        *puVar1 = *puVar2;
        puVar1[1] = uVar9;
      }
      while (lVar16 < lVar12) {
        lVar14 = lVar12 + -1 >> 1;
        puVar15 = (uint *)(lVar14 * 0x1c + param_1);
        if (*puVar15 == uVar3) {
          if (puVar15[1] < uVar4) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = (uint)(uVar4 < puVar15[1]);
          }
        }
        else {
          uVar11 = 1;
          if (*puVar15 < uVar3) {
            uVar11 = 0xffffffff;
          }
        }
        if (-1 < (int)uVar11) break;
        uVar9 = *(undefined8 *)(puVar15 + 2);
        puVar2 = (undefined8 *)(lVar12 * 0x1c + param_1);
        *puVar2 = *(undefined8 *)puVar15;
        puVar2[1] = uVar9;
        uVar9 = *(undefined8 *)(puVar15 + 5);
        puVar2 = (undefined8 *)(lVar12 * 0x1c + 0xc + param_1);
        *puVar2 = *(undefined8 *)(puVar15 + 3);
        puVar2[1] = uVar9;
        lVar12 = lVar14;
      }
      lVar12 = lVar12 * 0x1c;
      *(uint *)(lVar12 + param_1) = uVar3;
      *(uint *)(lVar12 + 4 + param_1) = uVar4;
      puVar2 = (undefined8 *)(lVar12 + 8 + param_1);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      *(undefined4 *)(lVar12 + 0x18 + param_1) = uVar5;
    } while (0 < lVar16);
  }
  return;
}

