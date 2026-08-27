// Function: FUN_140363730
// Addr: 140363730
// Size: 570 bytes


void FUN_140363730(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar14 = param_2 - param_1 >> 4;
  lVar11 = param_2 - param_1 >> 5;
  if (0 < lVar11) {
    lVar13 = (longlong)(uVar14 - 1) >> 1;
    do {
      lVar11 = lVar11 + -1;
      uVar4 = *(uint *)(param_1 + lVar11 * 0x10);
      uVar3 = *(undefined8 *)(param_1 + 4 + lVar11 * 0x10);
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar11 * 0x10);
      lVar7 = lVar11;
      while (lVar7 < lVar13) {
        uVar8 = *(uint *)(param_1 + 0x20 + lVar7 * 0x20);
        uVar9 = *(uint *)(param_1 + 0x10 + lVar7 * 0x20);
        uVar12 = (uVar8 >> 0x10 & 0xff) * 0x100 + (uVar8 >> 8 & 0xff) * 0x10000 + uVar8 * 0x1000000
                 + (uVar8 >> 0x18);
        uVar8 = (uVar9 >> 8 & 0xff) * 0x10000 + (uVar9 >> 0x10 & 0xff) * 0x100 + uVar9 * 0x1000000 +
                (uVar9 >> 0x18);
        lVar10 = (ulonglong)(~((uint)(uVar8 < uVar12) - (uint)(uVar12 < uVar8)) >> 0x1f) + 1 +
                 lVar7 * 2;
        puVar1 = (undefined8 *)(param_1 + lVar10 * 0x10);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(param_1 + lVar7 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        lVar7 = lVar10;
      }
      if ((lVar7 == lVar13) && ((uVar14 & 1) == 0)) {
        puVar2 = (undefined8 *)(param_1 + -0x10 + uVar14 * 0x10);
        uVar6 = puVar2[1];
        puVar1 = (undefined8 *)(param_1 + lVar7 * 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = uVar6;
        lVar7 = uVar14 - 1;
      }
      if (lVar11 < lVar7) {
        uVar8 = (uVar4 >> 0x10 & 0xff) * 0x100 + (uVar4 >> 8 & 0xff) * 0x10000 + uVar4 * 0x1000000 +
                (uVar4 >> 0x18);
        do {
          lVar10 = lVar7 + -1 >> 1;
          uVar9 = *(uint *)(param_1 + lVar10 * 0x10);
          uVar9 = (uVar9 >> 8 & 0xff) * 0x10000 + (uVar9 >> 0x10 & 0xff) * 0x100 + uVar9 * 0x1000000
                  + (uVar9 >> 0x18);
          if (-1 < (int)((uint)(uVar8 < uVar9) - (uint)(uVar9 < uVar8))) break;
          puVar1 = (undefined8 *)(param_1 + lVar10 * 0x10);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)(param_1 + lVar7 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          lVar7 = lVar10;
        } while (lVar11 < lVar10);
      }
      *(undefined8 *)(param_1 + 4 + lVar7 * 0x10) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar7 * 0x10) = uVar5;
      *(uint *)(param_1 + lVar7 * 0x10) = uVar4;
    } while (0 < lVar11);
  }
  return;
}

