// Function: FUN_14027ed10
// Addr: 14027ed10
// Size: 1546 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

BADSPACEBASE *
FUN_14027ed10(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,float param_6,float param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  double *pdVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  double dVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  double dVar24;
  undefined4 uVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar40;
  undefined1 local_b8 [9] [16];
  
  uVar40 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  dVar34 = (double)param_6 / (double)(param_6 - param_7);
  if ((DAT_140492708 < dVar34) && (dVar34 < DAT_140492770)) {
    uVar25 = FUN_14027ba30(param_4,param_5,dVar34);
    dVar24 = DAT_140492778;
    uVar20 = CONCAT44(uVar40,param_2);
    uVar12 = FUN_14027b660(param_1);
    if ((uVar12 & 1) == 0) {
      register0x00000020 = (BADSPACEBASE *)0x0;
    }
    else if ((uVar12 & 2) == 0) {
      pdVar6 = *(double **)(param_1 + 0x10);
      iVar19 = *(int *)(pdVar6 + 0x13);
      dVar10 = *(double *)(param_1 + 0x18) * dVar34;
      dVar34 = *(double *)(param_1 + 0x20) * dVar34;
      dVar35 = dVar10 + pdVar6[2];
      dVar37 = dVar34 + pdVar6[3];
      dVar26 = (double)iVar19;
      if ((dVar35 < 0.0) || (dVar26 < dVar35)) {
        dVar35 = (double)(0.0 < dVar35) * dVar26;
      }
      iVar5 = *(int *)((longlong)pdVar6 + 0x9c);
      dVar26 = (double)iVar5;
      if ((dVar37 < 0.0) || (dVar26 < dVar37)) {
        dVar37 = (double)(0.0 < dVar37) * dVar26;
      }
      dVar35 = dVar35 - DAT_140492758;
      dVar37 = dVar37 - DAT_140492758;
      dVar26 = (double)FUN_14041a500();
      iVar15 = (int)dVar26;
      dVar26 = (double)FUN_14041a500();
      iVar21 = iVar15 + 1;
      iVar19 = iVar19 + -1;
      iVar13 = (int)dVar26;
      iVar1 = iVar13 + 1;
      if (((iVar15 < 0) || (iVar23 = iVar15, iVar19 < iVar15)) && (iVar23 = 0, 0 < iVar15)) {
        iVar23 = iVar19;
      }
      if (((iVar21 < 0) || (iVar22 = iVar21, iVar19 < iVar21)) && (iVar22 = 0, 0 < iVar21)) {
        iVar22 = iVar19;
      }
      iVar5 = iVar5 + -1;
      if (((iVar13 < 0) || (iVar19 = iVar13, iVar5 < iVar13)) && (iVar19 = 0, 0 < iVar13)) {
        iVar19 = iVar5;
      }
      if (((iVar1 < 0) || (iVar21 = iVar1, iVar5 < iVar1)) && (iVar21 = 0, 0 < iVar1)) {
        iVar21 = iVar5;
      }
      dVar26 = pdVar6[0x12];
      lVar14 = (longlong)(*(int *)(pdVar6 + 0x14) * iVar19);
      dVar35 = dVar35 - (double)iVar15;
      iVar21 = *(int *)(pdVar6 + 0x14) * iVar21;
      dVar37 = dVar37 - (double)iVar13;
      lVar2 = lVar14 + iVar23 * 3;
      dVar32 = dVar24 - dVar35;
      dVar30 = dVar24 - dVar37;
      lVar14 = lVar14 + iVar22 * 3;
      lVar3 = (longlong)iVar21 + (longlong)(iVar23 * 3);
      lVar4 = (longlong)iVar21 + (longlong)(iVar22 * 3);
      fVar39 = (float)((double)(float)((double)*(float *)((longlong)dVar26 + lVar2 * 4) * dVar32 +
                                      (double)*(float *)((longlong)dVar26 + lVar14 * 4) * dVar35) *
                       dVar30 + (double)(float)((double)*(float *)((longlong)dVar26 + lVar3 * 4) *
                                                dVar32 + (double)*(float *)((longlong)dVar26 +
                                                                           lVar4 * 4) * dVar35) *
                                dVar37);
      fVar38 = (float)((double)(float)((double)*(float *)((longlong)dVar26 + 4 + lVar2 * 4) * dVar32
                                      + (double)*(float *)((longlong)dVar26 + 4 + lVar14 * 4) *
                                        dVar35) * dVar30 +
                      (double)(float)((double)*(float *)((longlong)dVar26 + 4 + lVar3 * 4) * dVar32
                                     + (double)*(float *)((longlong)dVar26 + 4 + lVar4 * 4) * dVar35
                                     ) * dVar37);
      pfVar7 = (float *)pdVar6[4];
      fVar27 = *pfVar7;
      fVar33 = pfVar7[2];
      fVar36 = (float)((double)(float)((double)*(float *)((longlong)dVar26 + 8 + lVar2 * 4) * dVar32
                                      + (double)*(float *)((longlong)dVar26 + 8 + lVar14 * 4) *
                                        dVar35) * dVar30 +
                      (double)(float)((double)*(float *)((longlong)dVar26 + 8 + lVar3 * 4) * dVar32
                                     + (double)*(float *)((longlong)dVar26 + 8 + lVar4 * 4) * dVar35
                                     ) * dVar37);
      fVar28 = pfVar7[1];
      dVar24 = (dVar24 - (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & _UNK_140492fd4,
                                          SUB84(dVar34,0) & _DAT_140492fd0)) *
               (dVar24 - (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_140492fd4,
                                          SUB84(dVar10,0) & _DAT_140492fd0));
      fVar29 = fVar28;
      if (fVar28 <= fVar27) {
        fVar29 = fVar27;
      }
      fVar11 = fVar28;
      if (fVar27 <= fVar28) {
        fVar11 = fVar27;
      }
      fVar31 = fVar33;
      if (fVar29 <= fVar33) {
        fVar31 = fVar29;
      }
      if (fVar31 <= fVar11) {
        fVar31 = fVar11;
      }
      fVar29 = (float)((double)(fVar31 - fVar27) * dVar24 + (double)fVar39);
      fVar27 = fVar38;
      if (fVar39 <= fVar38) {
        fVar27 = fVar39;
      }
      fVar11 = fVar38;
      if (fVar38 <= fVar39) {
        fVar11 = fVar39;
      }
      fVar39 = fVar36;
      if (fVar11 <= fVar36) {
        fVar39 = fVar11;
      }
      fVar28 = (float)((double)(fVar31 - fVar28) * dVar24 + (double)fVar38);
      if (fVar39 <= fVar27) {
        fVar39 = fVar27;
      }
      fVar27 = fVar28;
      if (fVar28 <= fVar29) {
        fVar27 = fVar29;
      }
      if (fVar29 <= fVar28) {
        fVar28 = fVar29;
      }
      fVar33 = (float)((double)(fVar31 - fVar33) * dVar24 + (double)fVar36);
      if (fVar27 <= fVar33) {
        fVar33 = fVar27;
      }
      if (fVar33 <= fVar28) {
        fVar33 = fVar28;
      }
      dVar34 = dVar34 * pdVar6[0x18] + pdVar6[1];
      local_b8[0]._8_4_ = SUB84(dVar34,0);
      local_b8[0]._0_8_ = dVar10 * pdVar6[0x17] + *pdVar6;
      local_b8[0]._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      FUN_1402843b0(pdVar6 + 7,local_b8,lVar4,iVar21,uVar20,param_3,uVar25);
      dVar34 = pdVar6[0xf];
      if (pdVar6[0xf] == pdVar6[0x10]) {
        dVar34 = 0.0;
      }
      plVar18 = *(longlong **)pdVar6[6];
      if (plVar18 != (longlong *)((longlong *)pdVar6[6])[1]) {
        do {
          puVar8 = (undefined8 *)plVar18[1];
          puVar16 = (undefined8 *)*plVar18;
          if (puVar16 != puVar8) {
            if ((ulonglong)((longlong)puVar8 - (longlong)puVar16) < 0x10) {
              uVar20 = *puVar16;
            }
            else {
              uVar20 = puVar8[-2];
            }
            uVar9 = puVar8[-1];
            dVar24 = dVar34;
            do {
              uVar17 = uVar9;
              uVar9 = *puVar16;
              dVar34 = (double)((longlong)dVar24 + 0x38);
              FUN_140284480(pdVar6 + 7,dVar24,uVar20,uVar17,uVar9);
              puVar16 = puVar16 + 1;
              uVar20 = uVar17;
              dVar24 = dVar34;
            } while (puVar16 != (undefined8 *)plVar18[1]);
          }
          plVar18 = plVar18 + 3;
        } while (plVar18 != *(longlong **)((longlong)pdVar6[6] + 8));
      }
      dVar34 = (double)FUN_140284a20(pdVar6 + 7);
      fVar27 = (float)((dVar34 + pdVar6[0x16]) * pdVar6[0x15]);
      register0x00000020 =
           (BADSPACEBASE *)
           (ulonglong)
           ((double)(float)((uint)(fVar33 - fVar27) & _DAT_140492fc0) *
            *(double *)(*(longlong *)(param_1 + 0x10) + 200) <
           (double)(float)((uint)(fVar39 - fVar27) & _DAT_140492fc0));
    }
    else {
      register0x00000020 = (BADSPACEBASE *)0x1;
    }
  }
  return register0x00000020;
}

