// Function: FUN_1402810a0
// Addr: 1402810a0
// Size: 1551 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1402810a0(longlong *param_1,undefined4 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  undefined8 uVar20;
  longlong *plVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar27;
  double dVar25;
  uint uVar28;
  uint uVar29;
  double dVar26;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  double local_res8;
  double local_res20;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_f8;
  double dStack_f0;
  
  uVar38 = param_2[1];
  uVar39 = param_2[2];
  uVar40 = param_2[3];
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar38;
  *(undefined4 *)(param_1 + 2) = uVar39;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar40;
  lVar11 = param_1[6];
  if (lVar11 != param_1[7]) {
    do {
      FUN_140284480(lVar11,param_2);
      lVar11 = lVar11 + 0x40;
    } while (lVar11 != param_1[7]);
  }
  plVar9 = (longlong *)*param_1;
  plVar19 = (longlong *)*plVar9;
  lVar11 = param_1[9];
  if (param_1[9] == param_1[10]) {
    lVar11 = 0;
  }
  if (plVar19 != (longlong *)plVar9[1]) {
    do {
      puVar4 = (undefined8 *)plVar19[1];
      puVar12 = (undefined8 *)*plVar19;
      if (puVar12 != puVar4) {
        lVar13 = *plVar9;
        lVar5 = param_1[6];
        if ((ulonglong)((longlong)puVar4 - (longlong)puVar12) < 0x10) {
          uVar20 = *puVar12;
        }
        else {
          uVar20 = puVar4[-2];
        }
        uVar6 = puVar4[-1];
        lVar22 = lVar11;
        do {
          uVar16 = uVar6;
          uVar6 = *puVar12;
          lVar11 = lVar22 + 0x38;
          FUN_140284550((longlong)((int)((longlong)plVar19 - lVar13 >> 3) * -0x55555555) * 0x40 +
                        lVar5,lVar22,uVar20,uVar16,uVar6);
          puVar12 = puVar12 + 1;
          uVar20 = uVar16;
          lVar22 = lVar11;
        } while (puVar12 != (undefined8 *)plVar19[1]);
      }
      plVar9 = (longlong *)*param_1;
      plVar19 = plVar19 + 3;
    } while (plVar19 != (longlong *)plVar9[1]);
  }
  uVar8 = _UNK_1404930a4;
  uVar7 = _DAT_1404930a0;
  dVar34 = (double)param_1[1];
  dVar26 = (double)param_1[2];
  uVar38 = 0;
  uVar39 = 0;
  local_res8 = 0.0;
  local_120 = 0.0;
  dVar30 = (dVar34 - 0.0) * (dVar34 - 0.0) + (dVar26 - 0.0) * (dVar26 - 0.0);
  if (dVar30 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041f850(SUB84(dVar30,0));
  }
  plVar19 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  plVar21 = (longlong *)0x0;
  uVar14 = 0;
  local_108 = 0;
  local_118 = 0.0;
  uVar40 = 0;
  uVar41 = 0;
  dVar30 = SQRT(dVar30) * DAT_140492850 * DAT_140492aa0 + _DAT_140492b00;
  uVar23 = SUB84(dVar30,0) & _DAT_1404930a0;
  uVar27 = (uint)((ulonglong)dVar30 >> 0x20) & _UNK_1404930a4;
  local_128 = (double)CONCAT44(uVar27,uVar23);
  uVar43 = uVar23 ^ (uint)DAT_1404930b0;
  uVar44 = uVar27 ^ DAT_1404930b0._4_4_;
  local_f8 = (double)CONCAT44(uVar27,uVar23);
  dStack_f0 = 0.0;
  iVar17 = (int)(param_1[7] - param_1[6] >> 6);
  uVar15 = uVar23;
  uVar29 = uVar27;
  uVar37 = uVar43;
  uVar42 = uVar44;
  uVar35 = uVar43;
  uVar36 = uVar44;
  dVar32 = dVar30;
  local_res20 = dVar30;
  if (0 < iVar17) {
    do {
      lVar13 = uVar14 * 0x40;
      dVar25 = (double)func_0x000140284af0(param_1[6] + lVar13);
      lVar11 = param_1[6];
      dVar31 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar8,SUB84(dVar30,0) & uVar7);
      dVar1 = *(double *)(lVar13 + lVar11);
      dVar2 = *(double *)(lVar13 + 8 + lVar11);
      dVar33 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar8,SUB84(dVar1,0) & uVar7);
      if ((dVar33 < dVar31) || ((dVar33 == dVar31 && (dVar2 < local_res8)))) {
        local_118 = *(double *)(lVar13 + 0x28 + lVar11);
        plVar19 = *(longlong **)(lVar13 + 0x20 + lVar11);
        dVar30 = dVar1;
        local_res8 = dVar2;
      }
      dVar31 = *(double *)(lVar13 + 0x10 + lVar11);
      uVar15 = SUB84(dVar31,0);
      uVar29 = (uint)((ulonglong)dVar31 >> 0x20);
      if ((double)CONCAT44(uVar36,uVar35) <= dVar31 && dVar31 != (double)CONCAT44(uVar36,uVar35)) {
        uVar35 = uVar15;
        uVar36 = uVar29;
      }
      dVar3 = *(double *)(lVar13 + 0x18 + lVar11);
      if (dVar3 < local_f8) {
        local_f8 = dVar3;
      }
      iVar18 = *(int *)(param_1[3] + uVar14 * 4);
      if (iVar18 < 1) {
        if ((iVar18 < 0) && (dVar25 <= 0.0)) {
          uVar24 = SUB84(local_res20,0) & uVar7;
          uVar28 = (uint)((ulonglong)local_res20 >> 0x20) & uVar8;
          if ((dVar33 <= (double)CONCAT44(uVar28,uVar24) &&
               (double)CONCAT44(uVar28,uVar24) != dVar33) ||
             ((dVar33 == (double)CONCAT44(uVar28,uVar24) && (dVar2 < local_120)))) {
            local_108 = *(undefined8 *)(lVar13 + 0x28 + lVar11);
            plVar21 = *(longlong **)(lVar13 + 0x20 + lVar11);
            local_res20 = dVar1;
            local_120 = dVar2;
          }
          if ((double)CONCAT44(uVar42,uVar37) <= dVar31 && dVar31 != (double)CONCAT44(uVar42,uVar37)
             ) {
            uVar37 = uVar15;
            uVar42 = uVar29;
          }
          if (dVar3 < local_128) {
            local_128 = dVar3;
          }
        }
      }
      else if (0.0 <= dVar25) {
        uVar24 = SUB84(dVar32,0) & uVar7;
        uVar28 = (uint)((ulonglong)dVar32 >> 0x20) & uVar8;
        if ((dVar33 <= (double)CONCAT44(uVar28,uVar24) && (double)CONCAT44(uVar28,uVar24) != dVar33)
           || ((dVar33 == (double)CONCAT44(uVar28,uVar24) &&
               (dVar2 <= (double)CONCAT44(uVar39,uVar38) && (double)CONCAT44(uVar39,uVar38) != dVar2
               )))) {
          plVar9 = *(longlong **)(lVar13 + 0x20 + lVar11);
          uVar20 = *(undefined8 *)(lVar13 + 0x28 + lVar11);
          uVar40 = (undefined4)uVar20;
          uVar41 = (undefined4)((ulonglong)uVar20 >> 0x20);
          uVar38 = SUB84(dVar2,0);
          uVar39 = (undefined4)((ulonglong)dVar2 >> 0x20);
          dVar32 = dVar1;
        }
        if ((double)CONCAT44(uVar44,uVar43) <= dVar31 && dVar31 != (double)CONCAT44(uVar44,uVar43))
        {
          uVar43 = uVar15;
          uVar44 = uVar29;
        }
        if (dVar3 <= (double)CONCAT44(uVar27,uVar23) && (double)CONCAT44(uVar27,uVar23) != dVar3) {
          uVar23 = SUB84(dVar3,0);
          uVar27 = (uint)((ulonglong)dVar3 >> 0x20);
        }
      }
      uVar15 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar15;
    } while ((int)uVar15 < iVar17);
    uVar15 = (uint)local_f8;
    uVar29 = local_f8._4_4_;
  }
  dVar1 = local_118;
  if (0.0 <= dVar30) {
    uVar35 = uVar15;
    uVar36 = uVar29;
  }
  if (plVar19 == (longlong *)0x0) {
LAB_1402814bd:
    uVar15 = uVar35;
    uVar29 = uVar36;
  }
  else {
    dStack_f0 = local_res8;
    local_118 = dVar34;
    local_110 = dVar26;
    local_f8 = dVar30;
    (**(code **)(*plVar19 + 0x40))(plVar19,&local_f8,&local_118,dVar1);
    uVar29 = (uint)((ulonglong)local_f8 >> 0x20);
    dVar30 = (double)CONCAT44(uVar29 & uVar8,SUB84(local_f8,0) & uVar7);
    uVar15 = SUB84(local_f8,0);
    if ((double)CONCAT44(uVar36 & uVar8,uVar35 & uVar7) < dVar30 ||
        (double)CONCAT44(uVar36 & uVar8,uVar35 & uVar7) == dVar30) goto LAB_1402814bd;
  }
  if (0.0 <= dVar32) {
    uVar43 = uVar23;
    uVar44 = uVar27;
  }
  if (plVar9 == (longlong *)0x0) {
LAB_140281547:
    uVar35 = uVar43;
    uVar36 = uVar44;
  }
  else {
    dStack_f0 = (double)CONCAT44(uVar39,uVar38);
    local_118 = dVar34;
    local_110 = dVar26;
    local_f8 = dVar32;
    (**(code **)(*plVar9 + 0x40))(plVar9,&local_f8,&local_118,CONCAT44(uVar41,uVar40));
    uVar36 = (uint)((ulonglong)local_f8 >> 0x20);
    dVar30 = (double)CONCAT44(uVar36 & uVar8,SUB84(local_f8,0) & uVar7);
    uVar35 = SUB84(local_f8,0);
    if ((double)CONCAT44(uVar44 & uVar8,uVar43 & uVar7) < dVar30 ||
        (double)CONCAT44(uVar44 & uVar8,uVar43 & uVar7) == dVar30) goto LAB_140281547;
  }
  if (0.0 <= local_res20) {
    uVar37 = SUB84(local_128,0);
    uVar42 = (uint)((ulonglong)local_128 >> 0x20);
  }
  if (plVar21 == (longlong *)0x0) {
LAB_1402815bb:
    dVar34 = (double)CONCAT44(uVar42,uVar37);
  }
  else {
    dStack_f0 = local_120;
    local_f8 = local_res20;
    local_118 = dVar34;
    local_110 = dVar26;
    (**(code **)(*plVar21 + 0x40))(plVar21,&local_f8,&local_118,local_108);
    dVar26 = (double)CONCAT44((uint)((ulonglong)local_f8 >> 0x20) & uVar8,SUB84(local_f8,0) & uVar7)
    ;
    dVar34 = local_f8;
    if ((double)CONCAT44(uVar42 & uVar8,uVar37 & uVar7) < dVar26 ||
        (double)CONCAT44(uVar42 & uVar8,uVar37 & uVar7) == dVar26) goto LAB_1402815bb;
  }
  uVar43 = (uint)((ulonglong)dVar34 >> 0x20);
  if ((double)CONCAT44(uVar36,uVar35) < 0.0) {
LAB_140281627:
    if (0.0 < dVar34) {
      return (double)CONCAT44(uVar29,uVar15);
    }
    uVar35 = uVar35 & uVar7;
    uVar36 = uVar36 & uVar8;
    uVar44 = SUB84(dVar34,0) & uVar7;
    uVar43 = uVar43 & uVar8;
    if ((double)CONCAT44(uVar36,uVar35) < (double)CONCAT44(uVar43,uVar44) ||
        (double)CONCAT44(uVar36,uVar35) == (double)CONCAT44(uVar43,uVar44)) {
      return (double)CONCAT44(uVar29,uVar15);
    }
    uVar14 = 0;
    iVar18 = -1;
    if (iVar17 < 1) goto LAB_1402816e6;
    do {
      if (((*(int *)(param_1[3] + uVar14 * 4) < 0) &&
          (dVar26 = (double)func_0x000140284af0(uVar14 * 0x40 + param_1[6]),
          dVar30 = (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar8,
                                    SUB84(dVar26,0) & uVar7),
          dVar30 <= (double)CONCAT44(uVar36,uVar35) && (double)CONCAT44(uVar36,uVar35) != dVar30))
         && (dVar26 < dVar34)) {
        dVar34 = dVar26;
      }
      uVar43 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar43;
    } while ((int)uVar43 < iVar17);
  }
  else {
    uVar44 = SUB84(dVar34,0) & uVar7;
    uVar37 = uVar43 & uVar8;
    if ((double)CONCAT44(uVar37,uVar44) < (double)CONCAT44(uVar36 & uVar8,uVar35 & uVar7))
    goto LAB_140281627;
    uVar14 = 0;
    iVar18 = 1;
    dVar26 = (double)CONCAT44(uVar36,uVar35);
    dVar34 = (double)CONCAT44(uVar36,uVar35);
    if (iVar17 < 1) goto LAB_1402816e6;
    do {
      dVar34 = dVar26;
      if (((0 < *(int *)(param_1[3] + uVar14 * 4)) &&
          (dVar30 = (double)func_0x000140284af0(uVar14 * 0x40 + param_1[6]),
          dVar32 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar8,
                                    SUB84(dVar30,0) & uVar7),
          dVar32 <= (double)CONCAT44(uVar37,uVar44) && (double)CONCAT44(uVar37,uVar44) != dVar32))
         && (dVar34 = dVar30, dVar30 <= dVar26)) {
        dVar34 = dVar26;
      }
      uVar43 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar43;
      dVar26 = dVar34;
    } while ((int)uVar43 < iVar17);
  }
  iVar10 = 0;
  do {
    if (*(int *)(param_1[3] + (longlong)iVar10 * 4) != iVar18) {
      dVar26 = (double)func_0x000140284af0((longlong)iVar10 * 0x40 + param_1[6]);
      if ((0.0 <= dVar26 * dVar34) &&
         ((double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & uVar8,SUB84(dVar26,0) & uVar7) <
          (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar8,SUB84(dVar34,0) & uVar7))) {
        dVar34 = dVar26;
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < iVar17);
LAB_1402816e6:
  if (dVar34 == (double)CONCAT44(uVar29,uVar15)) {
    dVar34 = (double)CONCAT44(uVar29,uVar15);
  }
  return dVar34;
}

