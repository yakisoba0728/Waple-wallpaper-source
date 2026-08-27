// Function: FUN_14027fc30
// Addr: 14027fc30
// Size: 1403 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

BADSPACEBASE *
FUN_14027fc30(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,float param_6,float param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  double *pdVar7;
  float *pfVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double local_c8;
  double dStack_c0;
  
  dVar25 = (double)param_6 / (double)(param_6 - param_7);
  if ((DAT_140492708 < dVar25) && (dVar25 < DAT_140492770)) {
    uVar19 = FUN_14027ba30(param_4,param_5,dVar25);
    dVar9 = DAT_140492778;
    uVar11 = FUN_14027b660(param_1);
    if ((uVar11 & 1) == 0) {
      register0x00000020 = (BADSPACEBASE *)0x0;
    }
    else if ((uVar11 & 2) == 0) {
      pdVar7 = *(double **)(param_1 + 0x10);
      iVar15 = *(int *)(pdVar7 + 0x13);
      dVar10 = *(double *)(param_1 + 0x18) * dVar25;
      dVar25 = *(double *)(param_1 + 0x20) * dVar25;
      dVar20 = (double)iVar15;
      dVar26 = dVar10 + pdVar7[2];
      dVar28 = dVar25 + pdVar7[3];
      if ((dVar26 < 0.0) || (dVar20 < dVar26)) {
        dVar26 = (double)(0.0 < dVar26) * dVar20;
      }
      iVar6 = *(int *)((longlong)pdVar7 + 0x9c);
      dVar20 = (double)iVar6;
      if ((dVar28 < 0.0) || (dVar20 < dVar28)) {
        dVar28 = (double)(0.0 < dVar28) * dVar20;
      }
      dVar26 = dVar26 - DAT_140492758;
      dVar28 = dVar28 - DAT_140492758;
      dVar20 = (double)FUN_14041a500();
      iVar14 = (int)dVar20;
      dVar20 = (double)FUN_14041a500();
      iVar15 = iVar15 + -1;
      iVar16 = iVar14 + 1;
      iVar12 = (int)dVar20;
      iVar1 = iVar12 + 1;
      if (((iVar14 < 0) || (iVar18 = iVar14, iVar15 < iVar14)) && (iVar18 = 0, 0 < iVar14)) {
        iVar18 = iVar15;
      }
      if (((iVar16 < 0) || (iVar17 = iVar16, iVar15 < iVar16)) && (iVar17 = 0, 0 < iVar16)) {
        iVar17 = iVar15;
      }
      iVar6 = iVar6 + -1;
      if (((iVar12 < 0) || (iVar15 = iVar12, iVar6 < iVar12)) && (iVar15 = 0, 0 < iVar12)) {
        iVar15 = iVar6;
      }
      if (((iVar1 < 0) || (iVar16 = iVar1, iVar6 < iVar1)) && (iVar16 = 0, 0 < iVar1)) {
        iVar16 = iVar6;
      }
      dVar20 = pdVar7[0x12];
      lVar13 = (longlong)(*(int *)(pdVar7 + 0x14) * iVar15);
      dVar26 = dVar26 - (double)iVar14;
      iVar16 = *(int *)(pdVar7 + 0x14) * iVar16;
      dVar28 = dVar28 - (double)iVar12;
      lVar2 = lVar13 + iVar18 * 3;
      dVar23 = dVar9 - dVar26;
      dVar22 = dVar9 - dVar28;
      lVar13 = lVar13 + iVar17 * 3;
      lVar3 = (longlong)iVar16 + (longlong)(iVar18 * 3);
      lVar4 = (longlong)iVar16 + (longlong)(iVar17 * 3);
      fVar33 = (float)((double)(float)((double)*(float *)((longlong)dVar20 + lVar2 * 4) * dVar23 +
                                      (double)*(float *)((longlong)dVar20 + lVar13 * 4) * dVar26) *
                       dVar22 + (double)(float)((double)*(float *)((longlong)dVar20 + lVar3 * 4) *
                                                dVar23 + (double)*(float *)((longlong)dVar20 +
                                                                           lVar4 * 4) * dVar26) *
                                dVar28);
      fVar32 = (float)((double)(float)((double)*(float *)((longlong)dVar20 + 4 + lVar2 * 4) * dVar23
                                      + (double)*(float *)((longlong)dVar20 + 4 + lVar13 * 4) *
                                        dVar26) * dVar22 +
                      (double)(float)((double)*(float *)((longlong)dVar20 + 4 + lVar3 * 4) * dVar23
                                     + (double)*(float *)((longlong)dVar20 + 4 + lVar4 * 4) * dVar26
                                     ) * dVar28);
      pfVar8 = (float *)pdVar7[4];
      fVar21 = *pfVar8;
      fVar31 = (float)((double)(float)((double)*(float *)((longlong)dVar20 + 8 + lVar2 * 4) * dVar23
                                      + (double)*(float *)((longlong)dVar20 + 8 + lVar13 * 4) *
                                        dVar26) * dVar22 +
                      (double)(float)((double)*(float *)((longlong)dVar20 + 8 + lVar3 * 4) * dVar23
                                     + (double)*(float *)((longlong)dVar20 + 8 + lVar4 * 4) * dVar26
                                     ) * dVar28);
      fVar29 = pfVar8[1];
      dVar9 = (dVar9 - (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & _UNK_140492fd4,
                                        SUB84(dVar25,0) & _DAT_140492fd0)) *
              (dVar9 - (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_140492fd4,
                                        SUB84(dVar10,0) & _DAT_140492fd0));
      fVar5 = pfVar8[2];
      fVar27 = fVar29;
      if (fVar29 <= fVar21) {
        fVar27 = fVar21;
      }
      fVar24 = fVar29;
      if (fVar21 <= fVar29) {
        fVar24 = fVar21;
      }
      fVar30 = fVar5;
      if (fVar27 <= fVar5) {
        fVar30 = fVar27;
      }
      if (fVar30 <= fVar24) {
        fVar30 = fVar24;
      }
      fVar27 = (float)((double)(fVar30 - fVar21) * dVar9 + (double)fVar33);
      local_c8 = *pdVar7 + pdVar7[0x17] * dVar10;
      dStack_c0 = pdVar7[1] + pdVar7[0x18] * dVar25;
      fVar29 = (float)((double)(fVar30 - fVar29) * dVar9 + (double)fVar32);
      dVar25 = (double)FUN_140280fd0(pdVar7 + 6,&local_c8,lVar4,iVar16,param_2,param_3,uVar19);
      fVar21 = fVar32;
      if (fVar33 <= fVar32) {
        fVar21 = fVar33;
      }
      if (fVar32 <= fVar33) {
        fVar32 = fVar33;
      }
      fVar33 = fVar29;
      if (fVar29 <= fVar27) {
        fVar33 = fVar27;
      }
      if (fVar27 <= fVar29) {
        fVar29 = fVar27;
      }
      fVar24 = (float)((dVar25 + pdVar7[0x16]) * pdVar7[0x15]);
      fVar27 = fVar31;
      if (fVar32 <= fVar31) {
        fVar27 = fVar32;
      }
      if (fVar27 <= fVar21) {
        fVar27 = fVar21;
      }
      fVar21 = (float)((double)(fVar30 - fVar5) * dVar9 + (double)fVar31);
      if (fVar33 <= fVar21) {
        fVar21 = fVar33;
      }
      if (fVar21 <= fVar29) {
        fVar21 = fVar29;
      }
      register0x00000020 =
           (BADSPACEBASE *)
           (ulonglong)
           ((double)(float)((uint)(fVar21 - fVar24) & _DAT_140492fc0) *
            *(double *)(*(longlong *)(param_1 + 0x10) + 200) <
           (double)(float)((uint)(fVar27 - fVar24) & _DAT_140492fc0));
    }
    else {
      register0x00000020 = (BADSPACEBASE *)0x1;
    }
  }
  return register0x00000020;
}

