// Function: FUN_14025d420
// Addr: 14025d420
// Size: 1626 bytes


void FUN_14025d420(longlong *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  longlong *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_188 [17];
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [44];
  float local_fc;
  undefined1 local_e8 [224];
  
  if ((char)param_1[0x58] == '\0') {
    lVar4 = param_1[0x19];
    cVar3 = *(char *)(lVar4 + 0x1ac);
    fVar10 = DAT_1404928f4;
    if (((cVar3 != '\x01') && (cVar3 != '\x02')) && (fVar10 = DAT_1404928f0, cVar3 != '\x03')) {
      fVar10 = DAT_1404928ec;
    }
    fVar11 = DAT_140492704;
    if (((*(uint *)(lVar4 + 0x118) & 0x400) == 0) &&
       (fVar11 = DAT_140492644, DAT_140492644 <= *(float *)((longlong)param_1 + 0x30c))) {
      fVar11 = *(float *)((longlong)param_1 + 0x30c);
    }
    fVar14 = *(float *)(param_1 + 0x5d);
    if (*(float *)(param_1 + 0x5d) <= fVar11 + DAT_140492620) {
      fVar14 = fVar11 + DAT_140492620;
    }
    (**(code **)(**(longlong **)(lVar4 + 0x1518) + 0x10))
              (*(longlong **)(lVar4 + 0x1518),param_1 + 0x67,fVar10 * DAT_140492628,DAT_140492704,
               fVar11,fVar14);
  }
  else if ((char)param_1[0x58] == '\x01') {
    pfVar7 = (float *)(**(code **)(*param_1 + 0x80))(param_1);
    local_138 = pfVar7[0xd];
    local_188[0x10] = pfVar7[0xe];
    fVar10 = pfVar7[4];
    fVar11 = pfVar7[5];
    fVar14 = pfVar7[6];
    fVar1 = pfVar7[8];
    fVar2 = pfVar7[9];
    fVar5 = pfVar7[10];
    fVar15 = 0.0 - *pfVar7;
    local_188[0xf] = pfVar7[0xf];
    fVar16 = 0.0 - pfVar7[1];
    fStack_144 = local_188[0x10];
    fStack_140 = local_188[0x10];
    fStack_13c = local_188[0x10];
    fVar17 = 0.0 - pfVar7[2];
    local_188[3] = pfVar7[0xb];
    local_188[7] = (float)(int)((ulonglong)*(undefined8 *)(pfVar7 + 6) >> 0x20);
    local_188[0xc] = pfVar7[0xc];
    local_fc = 0.0 - pfVar7[3];
    local_188[0xe] = local_188[0x10];
    local_188[0xb] = 0.0 - pfVar7[3];
    local_188[0xd] = local_138;
    fStack_134 = local_138;
    fStack_130 = local_138;
    fStack_12c = local_138;
    fVar12 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
    fVar6 = (float)(0x5f375a86 - ((uint)fVar12 >> 1));
    fVar6 = (DAT_140492740 - fVar12 * DAT_1404926c0 * fVar6 * fVar6) * fVar6;
    fVar13 = fVar10 * fVar10 + fVar11 * fVar11 + fVar14 * fVar14;
    fVar12 = (float)(0x5f375a86 - ((uint)fVar13 >> 1));
    fVar12 = (DAT_140492740 - fVar13 * DAT_1404926c0 * fVar12 * fVar12) * fVar12;
    fVar13 = fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5;
    local_188[1] = fVar12 * fVar10;
    fVar10 = (float)(0x5f375a86 - ((uint)fVar13 >> 1));
    iVar9 = 0;
    fVar10 = (DAT_140492740 - fVar13 * DAT_1404926c0 * fVar10 * fVar10) * fVar10;
    local_188[0] = fVar10 * fVar1;
    local_188[4] = fVar10 * fVar2;
    local_188[2] = fVar6 * fVar15;
    local_188[5] = fVar12 * fVar11;
    local_188[9] = fVar12 * fVar14;
    local_188[6] = fVar6 * fVar16;
    local_188[8] = fVar10 * fVar5;
    local_188[10] = fVar6 * fVar17;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar14 = 0.0;
LAB_14025d760:
    do {
      fVar1 = local_188[(longlong)iVar9 * 4 + 2];
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          iVar9 = 2;
          fVar10 = fVar1;
          goto LAB_14025d760;
        }
        if (iVar9 == 2) {
          iVar9 = 3;
          fVar14 = fVar1;
          goto LAB_14025d760;
        }
        if (iVar9 == 3) break;
      }
      iVar9 = iVar9 + 1;
      fVar11 = fVar1;
    } while (iVar9 < 4);
    fVar1 = pfVar7[0xc];
    iVar9 = 0;
    local_188[0xe] =
         (float)((uint)(fVar11 * fVar1 + fVar10 * local_138 + fVar14 * local_188[0x10]) ^
                DAT_140492ff0);
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar14 = 0.0;
LAB_14025d7e0:
    do {
      fVar2 = local_188[(longlong)iVar9 * 4 + 1];
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          iVar9 = 2;
          fVar11 = fVar2;
          goto LAB_14025d7e0;
        }
        if (iVar9 == 2) {
          iVar9 = 3;
          fVar14 = fVar2;
          goto LAB_14025d7e0;
        }
        if (iVar9 == 3) break;
      }
      iVar9 = iVar9 + 1;
      fVar10 = fVar2;
    } while (iVar9 < 4);
    iVar9 = 0;
    local_188[0xd] =
         (float)((uint)(fVar10 * fVar1 + fVar11 * local_138 + fVar14 * local_188[0x10]) ^
                DAT_140492ff0);
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar14 = 0.0;
LAB_14025d840:
    do {
      fVar2 = local_188[(longlong)iVar9 * 4];
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          iVar9 = 2;
          fVar11 = fVar2;
          goto LAB_14025d840;
        }
        if (iVar9 == 2) {
          iVar9 = 3;
          fVar14 = fVar2;
          goto LAB_14025d840;
        }
        if (iVar9 == 3) goto LAB_14025d873;
      }
      iVar9 = iVar9 + 1;
      fVar10 = fVar2;
      if (3 < iVar9) {
LAB_14025d873:
        local_188[0xc] =
             (float)((uint)(fVar10 * fVar1 + fVar11 * local_138 + fVar14 * local_188[0x10]) ^
                    DAT_140492ff0);
        fVar10 = DAT_140492644;
        if ((*(uint *)(param_1[0x19] + 0x118) & 0x400) != 0) {
          fVar10 = DAT_140492704;
        }
        plVar8 = *(longlong **)(param_1[0x19] + 0x1518);
        fVar11 = *(float *)(param_1 + 0x5d);
        if (*(float *)(param_1 + 0x5d) <= fVar10 + DAT_140492620) {
          fVar11 = fVar10 + DAT_140492620;
        }
        (**(code **)(*plVar8 + 0x10))
                  (plVar8,local_e8,
                   (*(float *)((longlong)param_1 + 0x2f4) + *(float *)((longlong)param_1 + 0x2f4)) *
                   DAT_140492628,DAT_140492704,fVar10,fVar11);
        plVar8 = (longlong *)FUN_14005ecb0(local_128,local_e8,local_188);
        lVar4 = plVar8[1];
        param_1[0x67] = *plVar8;
        param_1[0x68] = lVar4;
        lVar4 = plVar8[3];
        param_1[0x69] = plVar8[2];
        param_1[0x6a] = lVar4;
        lVar4 = plVar8[5];
        param_1[0x6b] = plVar8[4];
        param_1[0x6c] = lVar4;
        lVar4 = plVar8[7];
        param_1[0x6d] = plVar8[6];
        param_1[0x6e] = lVar4;
        return;
      }
    } while( true );
  }
  return;
}

