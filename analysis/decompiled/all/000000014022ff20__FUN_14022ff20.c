// Function: FUN_14022ff20
// Addr: 14022ff20
// Size: 1838 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14022ff20(longlong *param_1,undefined8 *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  fVar47 = _UNK_1404930cc;
  fVar22 = _UNK_1404930c8;
  fVar20 = _UNK_1404930c4;
  fVar31 = _DAT_1404930c0;
  fVar23 = _UNK_140492f9c;
  fVar28 = _UNK_140492f98;
  fVar33 = _UNK_140492f94;
  fVar32 = _DAT_140492f90;
  if (((*(int *)((longlong)param_1 + 0x604) == 0) || (param_1[0xc3] == 0)) ||
     (lVar13 = *(longlong *)(param_1[0xc3] + 0xd0), lVar13 == 0)) {
    return 0;
  }
  uVar11 = *(uint *)(lVar13 + 0x24);
  uVar15 = 0;
  uVar25 = *(uint *)(lVar13 + 0x20);
  *param_3 = 3.4028235e+38;
  param_3[1] = 3.4028235e+38;
  param_3[2] = 3.4028235e+38;
  *param_4 = -3.4028235e+38;
  param_4[1] = -3.4028235e+38;
  param_4[2] = -3.4028235e+38;
  uVar4 = *(uint *)(param_1 + 0xc0);
  uVar14 = uVar4 & 3;
  local_e8 = fVar31;
  fStack_e4 = fVar20;
  fStack_e0 = fVar22;
  fStack_dc = fVar47;
  fVar24 = ((float)uVar11 / (float)uVar25) * DAT_1404926c0;
  if (uVar4 != uVar14) {
    uVar12 = uVar15;
    fVar17 = fVar32;
    fVar26 = fVar33;
    fVar29 = fVar28;
    fVar52 = fVar23;
    fVar16 = fVar32;
    fVar19 = fVar33;
    fVar21 = fVar28;
    fVar57 = fVar23;
    fVar18 = fVar31;
    fVar27 = fVar20;
    fVar30 = fVar22;
    fVar42 = fVar47;
    do {
      uVar11 = (int)uVar12 + 4;
      pfVar1 = (float *)(param_1[0xa6] + uVar12 * 4);
      fVar65 = fVar24 * *pfVar1;
      fVar66 = fVar24 * pfVar1[1];
      fVar67 = fVar24 * pfVar1[2];
      fVar68 = fVar24 * pfVar1[3];
      pfVar1 = (float *)(param_1[0xae] + uVar12 * 4);
      pfVar2 = (float *)(param_1[0xaf] + uVar12 * 4);
      pfVar3 = (float *)(param_1[0xb0] + uVar12 * 4);
      fVar41 = *pfVar1 - fVar65;
      fVar43 = pfVar1[1] - fVar66;
      fVar44 = pfVar1[2] - fVar67;
      fVar45 = pfVar1[3] - fVar68;
      fVar46 = *pfVar2 - fVar65;
      fVar48 = pfVar2[1] - fVar66;
      fVar49 = pfVar2[2] - fVar67;
      fVar50 = pfVar2[3] - fVar68;
      fVar61 = fVar65 + *pfVar2;
      fVar62 = fVar66 + pfVar2[1];
      fVar63 = fVar67 + pfVar2[2];
      fVar64 = fVar68 + pfVar2[3];
      fVar56 = fVar65 + *pfVar1;
      fVar58 = fVar66 + pfVar1[1];
      fVar59 = fVar67 + pfVar1[2];
      fVar60 = fVar68 + pfVar1[3];
      fVar51 = *pfVar3 - fVar65;
      fVar53 = pfVar3[1] - fVar66;
      fVar54 = pfVar3[2] - fVar67;
      fVar55 = pfVar3[3] - fVar68;
      fVar65 = fVar65 + *pfVar3;
      fVar66 = fVar66 + pfVar3[1];
      fVar67 = fVar67 + pfVar3[2];
      fVar68 = fVar68 + pfVar3[3];
      pfVar1 = (float *)(param_1[0xa4] + uVar12 * 4);
      bVar5 = 0.0 < *pfVar1;
      bVar6 = 0.0 < pfVar1[1];
      bVar7 = 0.0 < pfVar1[2];
      bVar8 = 0.0 < pfVar1[3];
      uVar25 = -(uint)(fVar41 < fVar32 && bVar5);
      uVar34 = -(uint)(fVar43 < fVar33 && bVar6);
      uVar35 = -(uint)(fVar44 < fVar28 && bVar7);
      uVar36 = -(uint)(fVar45 < fVar23 && bVar8);
      fVar32 = (float)(uVar25 & (uint)fVar41 | ~uVar25 & (uint)fVar32);
      fVar33 = (float)(uVar34 & (uint)fVar43 | ~uVar34 & (uint)fVar33);
      fVar28 = (float)(uVar35 & (uint)fVar44 | ~uVar35 & (uint)fVar28);
      fVar23 = (float)(uVar36 & (uint)fVar45 | ~uVar36 & (uint)fVar23);
      uVar37 = -(uint)(fVar51 < fVar17 && bVar5);
      uVar38 = -(uint)(fVar53 < fVar26 && bVar6);
      uVar39 = -(uint)(fVar54 < fVar29 && bVar7);
      uVar40 = -(uint)(fVar55 < fVar52 && bVar8);
      uVar25 = -(uint)(fVar46 < fVar16 && bVar5);
      uVar34 = -(uint)(fVar48 < fVar19 && bVar6);
      uVar35 = -(uint)(fVar49 < fVar21 && bVar7);
      uVar36 = -(uint)(fVar50 < fVar57 && bVar8);
      fVar16 = (float)(uVar25 & (uint)fVar46 | ~uVar25 & (uint)fVar16);
      fVar19 = (float)(uVar34 & (uint)fVar48 | ~uVar34 & (uint)fVar19);
      fVar21 = (float)(uVar35 & (uint)fVar49 | ~uVar35 & (uint)fVar21);
      fVar57 = (float)(uVar36 & (uint)fVar50 | ~uVar36 & (uint)fVar57);
      fVar17 = (float)(uVar37 & (uint)fVar51 | ~uVar37 & (uint)fVar17);
      fVar26 = (float)(uVar38 & (uint)fVar53 | ~uVar38 & (uint)fVar26);
      fVar29 = (float)(uVar39 & (uint)fVar54 | ~uVar39 & (uint)fVar29);
      fVar52 = (float)(uVar40 & (uint)fVar55 | ~uVar40 & (uint)fVar52);
      uVar37 = -(uint)(local_e8 < fVar65 && bVar5);
      uVar38 = -(uint)(fStack_e4 < fVar66 && bVar6);
      uVar39 = -(uint)(fStack_e0 < fVar67 && bVar7);
      uVar40 = -(uint)(fStack_dc < fVar68 && bVar8);
      uVar25 = -(uint)(fVar31 < fVar56 && bVar5);
      uVar34 = -(uint)(fVar20 < fVar58 && bVar6);
      uVar35 = -(uint)(fVar22 < fVar59 && bVar7);
      uVar36 = -(uint)(fVar47 < fVar60 && bVar8);
      fVar31 = (float)(uVar25 & (uint)fVar56 | ~uVar25 & (uint)fVar31);
      fVar20 = (float)(uVar34 & (uint)fVar58 | ~uVar34 & (uint)fVar20);
      fVar22 = (float)(uVar35 & (uint)fVar59 | ~uVar35 & (uint)fVar22);
      fVar47 = (float)(uVar36 & (uint)fVar60 | ~uVar36 & (uint)fVar47);
      uVar25 = -(uint)(fVar18 < fVar61 && bVar5);
      uVar34 = -(uint)(fVar27 < fVar62 && bVar6);
      uVar35 = -(uint)(fVar30 < fVar63 && bVar7);
      uVar36 = -(uint)(fVar42 < fVar64 && bVar8);
      local_e8 = (float)(uVar37 & (uint)fVar65 | ~uVar37 & (uint)local_e8);
      fStack_e4 = (float)(uVar38 & (uint)fVar66 | ~uVar38 & (uint)fStack_e4);
      fStack_e0 = (float)(uVar39 & (uint)fVar67 | ~uVar39 & (uint)fStack_e0);
      fStack_dc = (float)(uVar40 & (uint)fVar68 | ~uVar40 & (uint)fStack_dc);
      fVar18 = (float)(uVar25 & (uint)fVar61 | ~uVar25 & (uint)fVar18);
      fVar27 = (float)(uVar34 & (uint)fVar62 | ~uVar34 & (uint)fVar27);
      fVar30 = (float)(uVar35 & (uint)fVar63 | ~uVar35 & (uint)fVar30);
      fVar42 = (float)(uVar36 & (uint)fVar64 | ~uVar36 & (uint)fVar42);
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < uVar4 - uVar14);
    if (*param_3 <= fVar32) {
      fVar32 = *param_3;
    }
    *param_3 = fVar32;
    if (param_3[1] <= fVar16) {
      fVar16 = param_3[1];
    }
    param_3[1] = fVar16;
    if (param_3[2] <= fVar17) {
      fVar17 = param_3[2];
    }
    param_3[2] = fVar17;
    if (fVar31 <= *param_4) {
      fVar31 = *param_4;
    }
    *param_4 = fVar31;
    if (fVar18 <= param_4[1]) {
      fVar18 = param_4[1];
    }
    param_4[1] = fVar18;
    if (local_e8 <= param_4[2]) {
      local_e8 = param_4[2];
    }
    param_4[2] = local_e8;
    if (*param_3 <= fVar33) {
      fVar33 = *param_3;
    }
    *param_3 = fVar33;
    if (param_3[1] <= fVar19) {
      fVar19 = param_3[1];
    }
    param_3[1] = fVar19;
    if (param_3[2] <= fVar26) {
      fVar26 = param_3[2];
    }
    param_3[2] = fVar26;
    if (fVar20 <= *param_4) {
      fVar20 = *param_4;
    }
    *param_4 = fVar20;
    if (fVar27 <= param_4[1]) {
      fVar27 = param_4[1];
    }
    param_4[1] = fVar27;
    if (fStack_e4 <= param_4[2]) {
      fStack_e4 = param_4[2];
    }
    param_4[2] = fStack_e4;
    if (*param_3 <= fVar28) {
      fVar28 = *param_3;
    }
    *param_3 = fVar28;
    if (param_3[1] <= fVar21) {
      fVar21 = param_3[1];
    }
    param_3[1] = fVar21;
    if (param_3[2] <= fVar29) {
      fVar29 = param_3[2];
    }
    param_3[2] = fVar29;
    if (fVar22 <= *param_4) {
      fVar22 = *param_4;
    }
    *param_4 = fVar22;
    if (fVar30 <= param_4[1]) {
      fVar30 = param_4[1];
    }
    param_4[1] = fVar30;
    if (fStack_e0 <= param_4[2]) {
      fStack_e0 = param_4[2];
    }
    param_4[2] = fStack_e0;
    if (*param_3 <= fVar23) {
      fVar23 = *param_3;
    }
    *param_3 = fVar23;
    if (param_3[1] <= fVar57) {
      fVar57 = param_3[1];
    }
    param_3[1] = fVar57;
    if (param_3[2] <= fVar52) {
      fVar52 = param_3[2];
    }
    param_3[2] = fVar52;
    if (fVar47 <= *param_4) {
      fVar47 = *param_4;
    }
    *param_4 = fVar47;
    if (fVar42 <= param_4[1]) {
      fVar42 = param_4[1];
    }
    param_4[1] = fVar42;
    if (fStack_dc <= param_4[2]) {
      fStack_dc = param_4[2];
    }
    param_4[2] = fStack_dc;
  }
  uVar11 = *(uint *)(param_1 + 0xc0);
  if (uVar14 != 0) {
    do {
      lVar13 = (longlong)(int)((int)uVar15 + (uVar11 & 0xfffffffc));
      if (*(float *)(param_1[0xa4] + lVar13 * 4) != 0.0) {
        fVar32 = *(float *)(param_1[0xae] + lVar13 * 4);
        fVar33 = *(float *)(param_1[0xaf] + lVar13 * 4);
        fVar28 = *(float *)(param_1[0xb0] + lVar13 * 4);
        fVar23 = fVar24 * *(float *)(param_1[0xa6] + lVar13 * 4);
        fVar31 = fVar32 - fVar23;
        if (*param_3 <= fVar31) {
          fVar31 = *param_3;
        }
        *param_3 = fVar31;
        fVar31 = fVar33 - fVar23;
        if (param_3[1] <= fVar31) {
          fVar31 = param_3[1];
        }
        param_3[1] = fVar31;
        fVar31 = fVar28 - fVar23;
        if (param_3[2] <= fVar31) {
          fVar31 = param_3[2];
        }
        param_3[2] = fVar31;
        fVar32 = fVar23 + fVar32;
        if (fVar32 <= *param_4) {
          fVar32 = *param_4;
        }
        *param_4 = fVar32;
        fVar33 = fVar23 + fVar33;
        if (fVar33 <= param_4[1]) {
          fVar33 = param_4[1];
        }
        fVar23 = fVar23 + fVar28;
        param_4[1] = fVar33;
        if (fVar23 <= param_4[2]) {
          fVar23 = param_4[2];
        }
        param_4[2] = fVar23;
      }
      uVar25 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar25;
    } while (uVar25 < uVar14);
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    *param_2 = 0x3f800000;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined8 *)((longlong)param_2 + 0x14) = 0x3f800000;
    *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    param_2[5] = 0x3f800000;
    param_2[6] = 0;
    *(undefined4 *)(param_2 + 7) = 0;
    *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3f800000;
    return 1;
  }
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x80))();
  uVar9 = puVar10[1];
  *param_2 = *puVar10;
  param_2[1] = uVar9;
  uVar9 = puVar10[3];
  param_2[2] = puVar10[2];
  param_2[3] = uVar9;
  uVar9 = puVar10[5];
  param_2[4] = puVar10[4];
  param_2[5] = uVar9;
  uVar9 = puVar10[7];
  param_2[6] = puVar10[6];
  param_2[7] = uVar9;
  return 1;
}

