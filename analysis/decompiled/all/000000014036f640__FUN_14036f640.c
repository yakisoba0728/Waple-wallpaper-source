// Function: FUN_14036f640
// Addr: 14036f640
// Size: 468 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14036f640(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  longlong lVar6;
  ushort uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  
  uVar3 = *(undefined1 *)(param_1 + 2);
  uVar4 = *(undefined1 *)(param_1 + 3);
  for (pbVar11 = (byte *)(param_1 + 4);
      pbVar11 != (byte *)(param_1 + 4 + (ulonglong)CONCAT11(uVar3,uVar4) * 4); pbVar11 = pbVar11 + 4
      ) {
    uVar10 = (uint)pbVar11[1] * 0x10000 + (uint)pbVar11[2] * 0x100 + (uint)*pbVar11 * 0x1000000 +
             (uint)pbVar11[3];
    if (uVar10 == 0) {
      pbVar12 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar12 = (byte *)((ulonglong)uVar10 + param_1);
    }
    uVar10 = *(int *)(param_2 + 4) + 1;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    cVar8 = FUN_1403a4a30(param_2,uVar10,0);
    if (cVar8 == '\0') {
      puVar13 = &DAT_1404e4f20;
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      _DAT_1404e4f2c = DAT_14045dd18._4_4_;
      _DAT_1404e4f30 = DAT_14045dd20;
    }
    else {
      uVar17 = *(uint *)(param_2 + 4);
      while (uVar17 < uVar10) {
        lVar6 = *(longlong *)(param_2 + 8);
        puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar17 * 0x18);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar6 + 0x10 + (ulonglong)uVar17 * 0x18) = 0;
        uVar17 = *(int *)(param_2 + 4) + 1;
        *(uint *)(param_2 + 4) = uVar17;
      }
      *(uint *)(param_2 + 4) = uVar10;
      puVar13 = (ulonglong *)(*(longlong *)(param_2 + 8) + (ulonglong)(uVar10 - 1) * 0x18);
    }
    iVar9 = (uint)*pbVar12 * 0x100 + (uint)pbVar12[1];
    if (iVar9 == 1) {
      uVar10 = (uint)pbVar12[3] + (uint)pbVar12[2] * 0x100;
      if (uVar10 != 0) {
        uVar14 = *puVar13;
        uVar17 = 0;
        uVar15 = puVar13[1];
        pbVar12 = pbVar12 + 4;
        uVar16 = puVar13[2];
        do {
          pbVar1 = pbVar12 + 1;
          uVar17 = uVar17 + 1;
          bVar5 = *pbVar12;
          pbVar12 = pbVar12 + 2;
          uVar7 = CONCAT11(bVar5,*pbVar1);
          uVar14 = uVar14 | 1L << (uVar7 >> 4 & 0x3f);
          *puVar13 = uVar14;
          uVar16 = uVar16 | 1L << (uVar7 >> 6 & 0x3f);
          uVar15 = uVar15 | 1L << (uVar7 & 0x3f);
          puVar13[2] = uVar16;
          puVar13[1] = uVar15;
        } while (uVar17 < uVar10);
      }
    }
    else if (iVar9 == 2) {
      FUN_14036f3d0(pbVar12,puVar13);
    }
  }
  return;
}

