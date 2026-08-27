// Function: FUN_1404185a0
// Addr: 1404185a0
// Size: 738 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404185a0(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  float *pfVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float local_78 [2];
  float local_70 [18];
  
  lVar14 = FUN_1403c5100(param_1 + 0x100);
  fVar13 = DAT_140492968;
  fVar12 = DAT_1404926c0;
  fVar11 = DAT_1404925f0;
  uVar19 = 0;
  if (param_2 == 0) {
    uVar16 = FUN_140398420(param_1 + 0x108);
    FUN_1403eb0e0(uVar16,param_4,0);
  }
  else {
    do {
      local_78[0] = *(float *)(param_3 + uVar19 * 4);
      uVar18 = (uint)*(byte *)(lVar14 + 4) * 0x100 + (uint)*(byte *)(lVar14 + 5);
      if (uVar18 == 0) {
        puVar17 = &DAT_14045dd10;
      }
      else {
        puVar17 = (undefined8 *)((ulonglong)uVar18 + lVar14);
      }
      if ((uint)uVar19 < (uint)*(byte *)(lVar14 + 8) * 0x100 + (uint)*(byte *)(lVar14 + 9)) {
        puVar17 = (undefined8 *)((longlong)puVar17 + uVar19 * 0x14);
      }
      else {
        puVar17 = &DAT_14045dd10;
      }
      fVar24 = ((float)(int)((((uint)*(byte *)((longlong)puVar17 + 9) +
                              (uint)*(byte *)(puVar17 + 1) * 0x100) * 0x100 +
                             (uint)*(byte *)((longlong)puVar17 + 10)) * 0x100 +
                            (uint)*(byte *)((longlong)puVar17 + 0xb)) + 0.0) * fVar11;
      fVar20 = ((float)(int)((((uint)*(byte *)((longlong)puVar17 + 4) * 0x100 +
                              (uint)*(byte *)((longlong)puVar17 + 5)) * 0x100 +
                             (uint)*(byte *)((longlong)puVar17 + 6)) * 0x100 +
                            (uint)*(byte *)((longlong)puVar17 + 7)) + 0.0) * fVar11;
      local_70[0] = fVar24;
      if (fVar20 <= fVar24) {
        local_70[0] = fVar20;
      }
      pfVar15 = local_78;
      if (local_78[0] < local_70[0]) {
        pfVar15 = local_70;
      }
      fVar21 = ((float)(int)((((uint)*(byte *)((longlong)puVar17 + 0xd) +
                              (uint)*(byte *)((longlong)puVar17 + 0xc) * 0x100) * 0x100 +
                             (uint)*(byte *)((longlong)puVar17 + 0xe)) * 0x100 +
                            (uint)*(byte *)((longlong)puVar17 + 0xf)) + 0.0) * fVar11;
      fVar20 = fVar24;
      if (fVar24 <= fVar21) {
        fVar20 = fVar21;
      }
      fVar21 = *pfVar15;
      if (fVar20 <= *pfVar15) {
        fVar21 = fVar20;
      }
      if (fVar21 == fVar24) {
        auVar22._0_12_ = ZEXT812(0);
        auVar22._12_4_ = 0;
      }
      else if (fVar24 <= fVar21) {
        auVar22 = ZEXT416((uint)((fVar21 - fVar24) / (fVar20 - fVar24)));
      }
      else {
        auVar22 = ZEXT416((uint)((fVar21 - fVar24) / (fVar24 - local_70[0])));
      }
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = auVar22._0_4_ * fVar13 + fVar12;
      fVar20 = (float)FUN_14041a5c0(auVar23._0_8_);
      *(int *)(param_4 + uVar19 * 4) = (int)fVar20;
      uVar18 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
    } while (uVar18 < param_2);
    uVar16 = FUN_140398420(param_1 + 0x108);
    FUN_1403eb0e0(uVar16,param_4,param_2);
    iVar10 = _UNK_140471aac;
    iVar9 = _UNK_140471aa8;
    iVar8 = _UNK_140471aa4;
    iVar7 = _DAT_140471aa0;
    uVar19 = 0;
    if (0xf < param_2) {
      do {
        piVar1 = (int *)(param_4 + uVar19 * 4);
        iVar4 = piVar1[1];
        iVar5 = piVar1[2];
        iVar6 = piVar1[3];
        iVar3 = (int)uVar19;
        piVar2 = (int *)(param_4 + uVar19 * 4);
        *piVar2 = iVar7 + *piVar1 >> 2;
        piVar2[1] = iVar8 + iVar4 >> 2;
        piVar2[2] = iVar9 + iVar5 >> 2;
        piVar2[3] = iVar10 + iVar6 >> 2;
        piVar1 = (int *)(param_4 + (ulonglong)(iVar3 + 4) * 4);
        iVar4 = piVar1[1];
        iVar5 = piVar1[2];
        iVar6 = piVar1[3];
        piVar2 = (int *)(param_4 + (ulonglong)(iVar3 + 4) * 4);
        *piVar2 = iVar7 + *piVar1 >> 2;
        piVar2[1] = iVar8 + iVar4 >> 2;
        piVar2[2] = iVar9 + iVar5 >> 2;
        piVar2[3] = iVar10 + iVar6 >> 2;
        piVar1 = (int *)(param_4 + (ulonglong)(iVar3 + 8) * 4);
        iVar4 = piVar1[1];
        iVar5 = piVar1[2];
        iVar6 = piVar1[3];
        piVar2 = (int *)(param_4 + (ulonglong)(iVar3 + 8) * 4);
        *piVar2 = iVar7 + *piVar1 >> 2;
        piVar2[1] = iVar8 + iVar4 >> 2;
        piVar2[2] = iVar9 + iVar5 >> 2;
        piVar2[3] = iVar10 + iVar6 >> 2;
        uVar18 = iVar3 + 0x10;
        uVar19 = (ulonglong)uVar18;
        piVar1 = (int *)(param_4 + (ulonglong)(iVar3 + 0xc) * 4);
        iVar4 = piVar1[1];
        iVar5 = piVar1[2];
        iVar6 = piVar1[3];
        piVar2 = (int *)(param_4 + (ulonglong)(iVar3 + 0xc) * 4);
        *piVar2 = *piVar1 + iVar7 >> 2;
        piVar2[1] = iVar4 + iVar8 >> 2;
        piVar2[2] = iVar5 + iVar9 >> 2;
        piVar2[3] = iVar6 + iVar10 >> 2;
      } while (uVar18 < (param_2 & 0xfffffff0));
      if (param_2 <= uVar18) {
        return;
      }
    }
    do {
      *(int *)(param_4 + uVar19 * 4) = *(int *)(param_4 + uVar19 * 4) + 2 >> 2;
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
    } while (uVar18 < param_2);
  }
  return;
}

