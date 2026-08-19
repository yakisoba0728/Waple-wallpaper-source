// Function: FUN_1403b7a00
// Addr: 1403b7a00
// Size: 394 bytes


float FUN_1403b7a00(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  ulonglong uVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  float *pfVar17;
  uint *puVar18;
  float fVar19;
  
  puVar18 = *(uint **)(param_1 + 0x18);
  fVar19 = 0.0;
  puVar1 = puVar18 + *(uint *)(param_1 + 0x14);
  if (puVar18 != puVar1) {
    uVar11 = 0;
    do {
      uVar2 = *puVar18;
      if (uVar11 < uVar2) {
        uVar3 = *(uint *)(param_1 + 4);
        uVar9 = (ulonglong)uVar11;
        if (3 < uVar2 - uVar11) {
          do {
            uVar8 = (uint)uVar9;
            uVar14 = uVar8 + 1;
            uVar15 = uVar11;
            if (uVar14 < uVar2) {
              uVar15 = uVar14;
            }
            if (uVar8 < uVar3) {
              pfVar10 = (float *)(*(longlong *)(param_1 + 8) + uVar9 * 0xc);
            }
            else {
              pfVar10 = (float *)&DAT_14045dde0;
            }
            if (uVar15 < uVar3) {
              pfVar4 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar15 * 0xc);
            }
            else {
              pfVar4 = (float *)&DAT_14045dde0;
            }
            uVar12 = uVar8 + 2;
            uVar15 = uVar11;
            if (uVar12 < uVar2) {
              uVar15 = uVar12;
            }
            if (uVar14 < uVar3) {
              pfVar16 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar14 * 0xc);
            }
            else {
              pfVar16 = (float *)&DAT_14045dde0;
            }
            if (uVar15 < uVar3) {
              pfVar5 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar15 * 0xc);
            }
            else {
              pfVar5 = (float *)&DAT_14045dde0;
            }
            uVar14 = uVar8 + 3;
            uVar15 = uVar11;
            if (uVar14 < uVar2) {
              uVar15 = uVar14;
            }
            if (uVar12 < uVar3) {
              pfVar17 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar12 * 0xc);
            }
            else {
              pfVar17 = (float *)&DAT_14045dde0;
            }
            if (uVar15 < uVar3) {
              pfVar6 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar15 * 0xc);
            }
            else {
              pfVar6 = (float *)&DAT_14045dde0;
            }
            uVar8 = uVar8 + 4;
            uVar9 = (ulonglong)uVar8;
            uVar15 = uVar11;
            if (uVar8 < uVar2) {
              uVar15 = uVar8;
            }
            if (uVar14 < uVar3) {
              pfVar13 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar14 * 0xc);
            }
            else {
              pfVar13 = (float *)&DAT_14045dde0;
            }
            if (uVar15 < uVar3) {
              pfVar7 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar15 * 0xc);
            }
            else {
              pfVar7 = (float *)&DAT_14045dde0;
            }
            fVar19 = fVar19 + (pfVar4[1] * *pfVar10 - pfVar10[1] * *pfVar4) +
                     (pfVar5[1] * *pfVar16 - pfVar16[1] * *pfVar5) +
                     (pfVar6[1] * *pfVar17 - pfVar17[1] * *pfVar6) +
                     (pfVar7[1] * *pfVar13 - pfVar13[1] * *pfVar7);
          } while (uVar8 < uVar2 - 3);
          if (uVar2 <= uVar8) goto UNWIND_INFO_1403b7b8b_UnwindCodes_80__OffsetInProlog;
        }
        do {
          uVar15 = (uint)uVar9 + 1;
          uVar8 = uVar11;
          if (uVar15 < uVar2) {
            uVar8 = uVar15;
          }
          if ((uint)uVar9 < uVar3) {
            pfVar10 = (float *)(*(longlong *)(param_1 + 8) + uVar9 * 0xc);
          }
          else {
            pfVar10 = (float *)&DAT_14045dde0;
          }
          if (uVar8 < uVar3) {
            pfVar4 = (float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar8 * 0xc);
          }
          else {
            pfVar4 = (float *)&DAT_14045dde0;
          }
          uVar9 = (ulonglong)uVar15;
          fVar19 = fVar19 + (pfVar4[1] * *pfVar10 - pfVar10[1] * *pfVar4);
        } while (uVar15 < uVar2);
      }
UNWIND_INFO_1403b7b8b_UnwindCodes_80__OffsetInProlog:
      puVar18 = puVar18 + 1;
      uVar11 = uVar2;
    } while (puVar18 != puVar1);
  }
  return fVar19 * DAT_140492790;
}

