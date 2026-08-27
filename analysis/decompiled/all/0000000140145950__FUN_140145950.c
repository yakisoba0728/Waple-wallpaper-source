// Function: FUN_140145950
// Addr: 140145950
// Size: 1296 bytes


undefined8 FUN_140145950(longlong param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong local_res18;
  
  if (param_4 < 0) {
    uVar23 = DAT_1404929a0;
    uVar24 = 0;
  }
  else {
    uVar23 = 0;
    uVar24 = DAT_1404929a0;
  }
  uVar21 = 0;
  if (param_2 >> 3 != 0) {
    for (; ((param_2 >> 3) >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
    }
  }
  uVar20 = 0;
  if (uVar21 < 0x20) {
    uVar20 = uVar21;
  }
  bVar12 = (byte)uVar20;
  if (uVar20 != 0) {
    pvVar7 = _aligned_malloc((longlong)((1 << (bVar12 & 0x1f)) * 3 + -5) << 6,0x20);
    *(void **)(param_1 + 8) = pvVar7;
    if (pvVar7 != (void *)0x0) {
      lVar8 = _malloc_base(uVar20 * 8);
      *(longlong *)(param_1 + 0x30) = lVar8;
      if (lVar8 != 0) goto LAB_140145a01;
    }
    return 0xffffffff;
  }
LAB_140145a01:
  lVar8 = *(longlong *)(param_1 + 8);
  local_res18 = 0x10;
  pvVar7 = _aligned_malloc(0x40L << (bVar12 - 2 & 0x3f),0x20);
  FUN_14014af80(pvVar7,8L << (bVar12 - 2 & 0x3f));
  uVar21 = 0;
  iVar18 = 1 << (bVar12 - 1 & 0x1f);
  if (uVar20 != 0) {
    do {
      *(longlong *)(*(longlong *)(param_1 + 0x30) + uVar21 * 8) =
           lVar8 - *(longlong *)(param_1 + 8) >> 3;
      if (uVar21 == 0) {
        uVar22 = local_res18 >> 2;
        pvVar9 = _aligned_malloc(uVar22 * 8,0x20);
        uVar16 = 0;
        if (3 < uVar22) {
          lVar19 = (longlong)iVar18;
          do {
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8) =
                 *(undefined4 *)((longlong)pvVar7 + lVar19 * uVar16 * 8);
            lVar13 = (uVar16 + 1) * lVar19;
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 4) =
                 *(undefined4 *)((longlong)pvVar7 + lVar19 * uVar16 * 8 + 4);
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 8) =
                 *(undefined4 *)((longlong)pvVar7 + lVar13 * 8);
            lVar14 = (uVar16 + 2) * lVar19;
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 0xc) =
                 *(undefined4 *)((longlong)pvVar7 + lVar13 * 8 + 4);
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 0x10) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 8);
            lVar13 = (uVar16 + 3) * lVar19;
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 0x14) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 8 + 4);
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 0x18) =
                 *(undefined4 *)((longlong)pvVar7 + lVar13 * 8);
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 0x1c) =
                 *(undefined4 *)((longlong)pvVar7 + lVar13 * 8 + 4);
            uVar16 = uVar16 + 4;
          } while (uVar16 < uVar22 - 3);
        }
        for (; uVar16 < uVar22; uVar16 = uVar16 + 1) {
          *(undefined4 *)((longlong)pvVar9 + uVar16 * 8) =
               *(undefined4 *)((longlong)pvVar7 + (longlong)iVar18 * uVar16 * 8);
          *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 4) =
               *(undefined4 *)((longlong)pvVar7 + (longlong)iVar18 * uVar16 * 8 + 4);
        }
        uVar16 = 0;
        if (uVar22 != 0) {
          do {
            puVar1 = (undefined4 *)((longlong)pvVar9 + uVar16 * 8);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            uVar15 = uVar16 + 2;
            puVar2 = (uint *)(lVar8 + 0x10 + uVar16 * 0x10);
            *puVar2 = uVar4 ^ uVar24;
            puVar2[1] = uVar4 ^ uVar23;
            puVar2[2] = uVar6 ^ uVar24;
            puVar2[3] = uVar6 ^ uVar23;
            puVar1 = (undefined4 *)(lVar8 + uVar16 * 0x10);
            *puVar1 = uVar3;
            puVar1[1] = uVar3;
            puVar1[2] = uVar5;
            puVar1[3] = uVar5;
            uVar16 = uVar15;
          } while (uVar15 < uVar22);
        }
      }
      else {
        pvVar10 = _aligned_malloc(local_res18,0x20);
        pvVar11 = _aligned_malloc(local_res18,0x20);
        pvVar9 = _aligned_malloc(local_res18,0x20);
        uVar16 = 0;
        uVar22 = local_res18 >> 3;
        if (3 < uVar22) {
          lVar19 = (longlong)iVar18;
          do {
            lVar13 = uVar22 + uVar16;
            lVar14 = lVar19 * uVar16;
            *(undefined4 *)((longlong)pvVar10 + uVar16 * 8) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 0x10);
            *(undefined4 *)((longlong)pvVar10 + uVar16 * 8 + 4) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 0x10 + 4);
            *(undefined4 *)((longlong)pvVar11 + uVar16 * 8) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 8);
            *(undefined4 *)((longlong)pvVar11 + uVar16 * 8 + 4) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 8 + 4);
            lVar14 = (uVar16 + 1) * lVar19;
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8) =
                 *(undefined4 *)((longlong)pvVar7 + lVar13 * lVar19 * 8);
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 4) =
                 *(undefined4 *)((longlong)pvVar7 + lVar13 * lVar19 * 8 + 4);
            *(undefined4 *)((longlong)pvVar10 + uVar16 * 8 + 8) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 0x10);
            *(undefined4 *)((longlong)pvVar10 + uVar16 * 8 + 0xc) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 0x10 + 4);
            *(undefined4 *)((longlong)pvVar11 + uVar16 * 8 + 8) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 8);
            *(undefined4 *)((longlong)pvVar11 + uVar16 * 8 + 0xc) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 8 + 4);
            lVar14 = (lVar13 + 1) * lVar19;
            lVar17 = (uVar16 + 2) * lVar19;
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 8) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 8);
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 0xc) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 8 + 4);
            *(undefined4 *)((longlong)pvVar10 + uVar16 * 8 + 0x10) =
                 *(undefined4 *)((longlong)pvVar7 + lVar17 * 0x10);
            *(undefined4 *)((longlong)pvVar10 + uVar16 * 8 + 0x14) =
                 *(undefined4 *)((longlong)pvVar7 + lVar17 * 0x10 + 4);
            *(undefined4 *)((longlong)pvVar11 + uVar16 * 8 + 0x10) =
                 *(undefined4 *)((longlong)pvVar7 + lVar17 * 8);
            *(undefined4 *)((longlong)pvVar11 + uVar16 * 8 + 0x14) =
                 *(undefined4 *)((longlong)pvVar7 + lVar17 * 8 + 4);
            lVar14 = (lVar13 + 2) * lVar19;
            lVar17 = (uVar16 + 3) * lVar19;
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 0x10) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 8);
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 0x14) =
                 *(undefined4 *)((longlong)pvVar7 + lVar14 * 8 + 4);
            *(undefined4 *)((longlong)pvVar10 + uVar16 * 8 + 0x18) =
                 *(undefined4 *)((longlong)pvVar7 + lVar17 * 0x10);
            *(undefined4 *)((longlong)pvVar10 + uVar16 * 8 + 0x1c) =
                 *(undefined4 *)((longlong)pvVar7 + lVar17 * 0x10 + 4);
            *(undefined4 *)((longlong)pvVar11 + uVar16 * 8 + 0x18) =
                 *(undefined4 *)((longlong)pvVar7 + lVar17 * 8);
            *(undefined4 *)((longlong)pvVar11 + uVar16 * 8 + 0x1c) =
                 *(undefined4 *)((longlong)pvVar7 + lVar17 * 8 + 4);
            lVar13 = (lVar13 + 3) * lVar19;
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 0x18) =
                 *(undefined4 *)((longlong)pvVar7 + lVar13 * 8);
            *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 0x1c) =
                 *(undefined4 *)((longlong)pvVar7 + lVar13 * 8 + 4);
            uVar16 = uVar16 + 4;
          } while (uVar16 < uVar22 - 3);
        }
        for (; uVar16 < uVar22; uVar16 = uVar16 + 1) {
          lVar19 = (longlong)iVar18 * uVar16;
          *(undefined4 *)((longlong)pvVar10 + uVar16 * 8) =
               *(undefined4 *)((longlong)pvVar7 + lVar19 * 0x10);
          *(undefined4 *)((longlong)pvVar10 + uVar16 * 8 + 4) =
               *(undefined4 *)((longlong)pvVar7 + lVar19 * 0x10 + 4);
          *(undefined4 *)((longlong)pvVar11 + uVar16 * 8) =
               *(undefined4 *)((longlong)pvVar7 + lVar19 * 8);
          *(undefined4 *)((longlong)pvVar11 + uVar16 * 8 + 4) =
               *(undefined4 *)((longlong)pvVar7 + lVar19 * 8 + 4);
          lVar19 = (uVar22 + uVar16) * (longlong)iVar18;
          *(undefined4 *)((longlong)pvVar9 + uVar16 * 8) =
               *(undefined4 *)((longlong)pvVar7 + lVar19 * 8);
          *(undefined4 *)((longlong)pvVar9 + uVar16 * 8 + 4) =
               *(undefined4 *)((longlong)pvVar7 + lVar19 * 8 + 4);
        }
        uVar16 = 0;
        if (uVar22 != 0) {
          do {
            puVar1 = (undefined4 *)((longlong)pvVar10 + uVar16 * 8);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar1 = (undefined4 *)(lVar8 + uVar16 * 0x30);
            *puVar1 = uVar3;
            puVar1[1] = uVar3;
            puVar1[2] = uVar5;
            puVar1[3] = uVar5;
            puVar2 = (uint *)(lVar8 + 0x10 + uVar16 * 0x30);
            *puVar2 = uVar4 ^ uVar24;
            puVar2[1] = uVar4 ^ uVar23;
            puVar2[2] = uVar6 ^ uVar24;
            puVar2[3] = uVar6 ^ uVar23;
            puVar1 = (undefined4 *)((longlong)pvVar11 + uVar16 * 8);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar1 = (undefined4 *)(lVar8 + 0x20 + uVar16 * 0x30);
            *puVar1 = uVar3;
            puVar1[1] = uVar3;
            puVar1[2] = uVar5;
            puVar1[3] = uVar5;
            puVar2 = (uint *)(lVar8 + 0x30 + uVar16 * 0x30);
            *puVar2 = uVar4 ^ uVar24;
            puVar2[1] = uVar4 ^ uVar23;
            puVar2[2] = uVar6 ^ uVar24;
            puVar2[3] = uVar6 ^ uVar23;
            puVar1 = (undefined4 *)((longlong)pvVar9 + uVar16 * 8);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            uVar15 = uVar16 + 2;
            puVar1 = (undefined4 *)(lVar8 + 0x40 + uVar16 * 0x30);
            *puVar1 = uVar3;
            puVar1[1] = uVar3;
            puVar1[2] = uVar5;
            puVar1[3] = uVar5;
            puVar2 = (uint *)(lVar8 + 0x50 + uVar16 * 0x30);
            *puVar2 = uVar4 ^ uVar24;
            puVar2[1] = uVar4 ^ uVar23;
            puVar2[2] = uVar6 ^ uVar24;
            puVar2[3] = uVar6 ^ uVar23;
            uVar16 = uVar15;
          } while (uVar15 < uVar22);
        }
        FUN_1402d3dd0(pvVar10);
        FUN_1402d3dd0(pvVar11);
        uVar22 = uVar22 * 3;
      }
      lVar8 = lVar8 + uVar22 * 0x10;
      FUN_1402d3dd0(pvVar9);
      uVar21 = uVar21 + 1;
      local_res18 = local_res18 * 2;
      iVar18 = iVar18 >> 1;
    } while (uVar21 < uVar20);
  }
  FUN_1402d3dd0(pvVar7);
  *(longlong *)(param_1 + 0x58) = lVar8;
  *(ulonglong *)(param_1 + 0x48) = uVar20;
  return 0;
}

