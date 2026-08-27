// Function: FUN_140280fd0
// Addr: 140280fd0
// Size: 1709 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140280fd0(longlong *param_1,undefined4 *param_2)

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
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  undefined8 uVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar26;
  double dVar24;
  uint uVar27;
  double dVar25;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  uint uVar33;
  uint uVar34;
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
  undefined8 uStack_f0;
  
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
      FUN_1402843b0(lVar11,param_2);
      lVar11 = lVar11 + 0x40;
    } while (lVar11 != param_1[7]);
  }
  plVar9 = (longlong *)*param_1;
  plVar18 = (longlong *)*plVar9;
  lVar11 = param_1[9];
  if (param_1[9] == param_1[10]) {
    lVar11 = 0;
  }
  if (plVar18 != (longlong *)plVar9[1]) {
    do {
      puVar4 = (undefined8 *)plVar18[1];
      puVar12 = (undefined8 *)*plVar18;
      if (puVar12 != puVar4) {
        lVar13 = *plVar9;
        lVar5 = param_1[6];
        if ((ulonglong)((longlong)puVar4 - (longlong)puVar12) < 0x10) {
          uVar19 = *puVar12;
        }
        else {
          uVar19 = puVar4[-2];
        }
        uVar6 = puVar4[-1];
        lVar21 = lVar11;
        do {
          uVar15 = uVar6;
          uVar6 = *puVar12;
          lVar11 = lVar21 + 0x38;
          FUN_140284480((longlong)((int)((longlong)plVar18 - lVar13 >> 3) * -0x55555555) * 0x40 +
                        lVar5,lVar21,uVar19,uVar15,uVar6);
          puVar12 = puVar12 + 1;
          uVar19 = uVar15;
          lVar21 = lVar11;
        } while (puVar12 != (undefined8 *)plVar18[1]);
      }
      plVar9 = (longlong *)*param_1;
      plVar18 = plVar18 + 3;
    } while (plVar18 != (longlong *)plVar9[1]);
  }
  dVar32 = (double)param_1[1];
  dVar25 = (double)param_1[2];
  lVar11 = param_1[7];
  lVar13 = param_1[6];
  uVar38 = 0;
  uVar39 = 0;
  local_res8 = 0.0;
  local_120 = 0.0;
  dVar28 = (dVar32 - 0.0) * (dVar32 - 0.0) + (dVar25 - 0.0) * (dVar25 - 0.0);
  if (dVar28 < 0.0) {
    dVar28 = (double)FUN_14041f780(SUB84(dVar28,0));
    uVar36 = extraout_XMM0_Dc;
    uVar37 = extraout_XMM0_Dd;
  }
  else {
    uVar36 = 0;
    uVar37 = 0;
    dVar28 = SQRT(dVar28);
  }
  uVar8 = _UNK_140492fd4;
  uVar7 = _DAT_140492fd0;
  plVar18 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  plVar20 = (longlong *)0x0;
  uVar14 = 0;
  local_108 = 0;
  local_118 = 0.0;
  uVar40 = 0;
  uVar41 = 0;
  dVar28 = dVar28 * DAT_140492780 * DAT_1404929d0 + DAT_140492a30;
  uVar22 = SUB84(dVar28,0) & _DAT_140492fd0;
  uVar26 = (uint)((ulonglong)dVar28 >> 0x20) & _UNK_140492fd4;
  local_128 = (double)CONCAT44(uVar26,uVar22);
  uVar43 = uVar22 ^ (uint)DAT_140492fe0;
  uVar44 = uVar26 ^ DAT_140492fe0._4_4_;
  local_f8 = (double)CONCAT44(uVar26,uVar22);
  uStack_f0 = (double)CONCAT44(uVar37 & _UNK_140492fdc,uVar36 & _UNK_140492fd8);
  iVar16 = (int)(lVar11 - lVar13 >> 6);
  uVar36 = uVar22;
  uVar37 = uVar26;
  uVar35 = uVar43;
  uVar42 = uVar44;
  uVar33 = uVar43;
  uVar34 = uVar44;
  dVar30 = dVar28;
  local_res20 = dVar28;
  if (0 < iVar16) {
    do {
      lVar13 = uVar14 * 0x40;
      dVar24 = (double)FUN_140284a20(param_1[6] + lVar13);
      lVar11 = param_1[6];
      dVar29 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar8,SUB84(dVar28,0) & uVar7);
      dVar1 = *(double *)(lVar13 + lVar11);
      dVar2 = *(double *)(lVar13 + 8 + lVar11);
      dVar31 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar8,SUB84(dVar1,0) & uVar7);
      if ((dVar31 < dVar29) || ((dVar31 == dVar29 && (dVar2 < local_res8)))) {
        local_118 = *(double *)(lVar13 + 0x28 + lVar11);
        plVar18 = *(longlong **)(lVar13 + 0x20 + lVar11);
        dVar28 = dVar1;
        local_res8 = dVar2;
      }
      dVar29 = *(double *)(lVar13 + 0x10 + lVar11);
      uVar36 = SUB84(dVar29,0);
      uVar37 = (uint)((ulonglong)dVar29 >> 0x20);
      if ((double)CONCAT44(uVar34,uVar33) <= dVar29 && dVar29 != (double)CONCAT44(uVar34,uVar33)) {
        uVar33 = uVar36;
        uVar34 = uVar37;
      }
      dVar3 = *(double *)(lVar13 + 0x18 + lVar11);
      if (dVar3 < local_f8) {
        local_f8 = dVar3;
      }
      iVar17 = *(int *)(param_1[3] + uVar14 * 4);
      if (iVar17 < 1) {
        if ((iVar17 < 0) && (dVar24 <= 0.0)) {
          uVar23 = SUB84(local_res20,0) & uVar7;
          uVar27 = (uint)((ulonglong)local_res20 >> 0x20) & uVar8;
          if ((dVar31 <= (double)CONCAT44(uVar27,uVar23) &&
               (double)CONCAT44(uVar27,uVar23) != dVar31) ||
             ((dVar31 == (double)CONCAT44(uVar27,uVar23) && (dVar2 < local_120)))) {
            local_108 = *(undefined8 *)(lVar13 + 0x28 + lVar11);
            plVar20 = *(longlong **)(lVar13 + 0x20 + lVar11);
            local_res20 = dVar1;
            local_120 = dVar2;
          }
          if ((double)CONCAT44(uVar42,uVar35) <= dVar29 && dVar29 != (double)CONCAT44(uVar42,uVar35)
             ) {
            uVar35 = uVar36;
            uVar42 = uVar37;
          }
          if (dVar3 < local_128) {
            local_128 = dVar3;
          }
        }
      }
      else if (0.0 <= dVar24) {
        uVar23 = SUB84(dVar30,0) & uVar7;
        uVar27 = (uint)((ulonglong)dVar30 >> 0x20) & uVar8;
        if ((dVar31 <= (double)CONCAT44(uVar27,uVar23) && (double)CONCAT44(uVar27,uVar23) != dVar31)
           || ((dVar31 == (double)CONCAT44(uVar27,uVar23) &&
               (dVar2 <= (double)CONCAT44(uVar39,uVar38) && (double)CONCAT44(uVar39,uVar38) != dVar2
               )))) {
          plVar9 = *(longlong **)(lVar13 + 0x20 + lVar11);
          uVar19 = *(undefined8 *)(lVar13 + 0x28 + lVar11);
          uVar40 = (undefined4)uVar19;
          uVar41 = (undefined4)((ulonglong)uVar19 >> 0x20);
          uVar38 = SUB84(dVar2,0);
          uVar39 = (undefined4)((ulonglong)dVar2 >> 0x20);
          dVar30 = dVar1;
        }
        if ((double)CONCAT44(uVar44,uVar43) <= dVar29 && dVar29 != (double)CONCAT44(uVar44,uVar43))
        {
          uVar43 = uVar36;
          uVar44 = uVar37;
        }
        if (dVar3 <= (double)CONCAT44(uVar26,uVar22) && (double)CONCAT44(uVar26,uVar22) != dVar3) {
          uVar22 = SUB84(dVar3,0);
          uVar26 = (uint)((ulonglong)dVar3 >> 0x20);
        }
      }
      uVar36 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar36;
    } while ((int)uVar36 < iVar16);
    uVar36 = (uint)local_f8;
    uVar37 = local_f8._4_4_;
  }
  dVar1 = local_118;
  if (0.0 <= dVar28) {
    uVar33 = uVar36;
    uVar34 = uVar37;
  }
  if (plVar18 == (longlong *)0x0) {
LAB_1402813ed:
    uVar36 = uVar33;
    uVar37 = uVar34;
  }
  else {
    uStack_f0 = local_res8;
    local_118 = dVar32;
    local_110 = dVar25;
    local_f8 = dVar28;
    (**(code **)(*plVar18 + 0x40))(plVar18,&local_f8,&local_118,dVar1);
    uVar37 = (uint)((ulonglong)local_f8 >> 0x20);
    dVar28 = (double)CONCAT44(uVar37 & uVar8,SUB84(local_f8,0) & uVar7);
    uVar36 = SUB84(local_f8,0);
    if ((double)CONCAT44(uVar34 & uVar8,uVar33 & uVar7) < dVar28 ||
        (double)CONCAT44(uVar34 & uVar8,uVar33 & uVar7) == dVar28) goto LAB_1402813ed;
  }
  if (0.0 <= dVar30) {
    uVar43 = uVar22;
    uVar44 = uVar26;
  }
  if (plVar9 == (longlong *)0x0) {
LAB_140281477:
    uVar33 = uVar43;
    uVar34 = uVar44;
  }
  else {
    uStack_f0 = (double)CONCAT44(uVar39,uVar38);
    local_118 = dVar32;
    local_110 = dVar25;
    local_f8 = dVar30;
    (**(code **)(*plVar9 + 0x40))(plVar9,&local_f8,&local_118,CONCAT44(uVar41,uVar40));
    uVar34 = (uint)((ulonglong)local_f8 >> 0x20);
    dVar28 = (double)CONCAT44(uVar34 & uVar8,SUB84(local_f8,0) & uVar7);
    uVar33 = SUB84(local_f8,0);
    if ((double)CONCAT44(uVar44 & uVar8,uVar43 & uVar7) < dVar28 ||
        (double)CONCAT44(uVar44 & uVar8,uVar43 & uVar7) == dVar28) goto LAB_140281477;
  }
  if (0.0 <= local_res20) {
    uVar35 = SUB84(local_128,0);
    uVar42 = (uint)((ulonglong)local_128 >> 0x20);
  }
  if (plVar20 == (longlong *)0x0) {
LAB_1402814eb:
    dVar32 = (double)CONCAT44(uVar42,uVar35);
  }
  else {
    uStack_f0 = local_120;
    local_f8 = local_res20;
    local_118 = dVar32;
    local_110 = dVar25;
    (**(code **)(*plVar20 + 0x40))(plVar20,&local_f8,&local_118,local_108);
    dVar25 = (double)CONCAT44((uint)((ulonglong)local_f8 >> 0x20) & uVar8,SUB84(local_f8,0) & uVar7)
    ;
    dVar32 = local_f8;
    if ((double)CONCAT44(uVar42 & uVar8,uVar35 & uVar7) < dVar25 ||
        (double)CONCAT44(uVar42 & uVar8,uVar35 & uVar7) == dVar25) goto LAB_1402814eb;
  }
  uVar43 = (uint)((ulonglong)dVar32 >> 0x20);
  if ((double)CONCAT44(uVar34,uVar33) < 0.0) {
LAB_140281557:
    if (0.0 < dVar32) {
      return (double)CONCAT44(uVar37,uVar36);
    }
    uVar33 = uVar33 & uVar7;
    uVar34 = uVar34 & uVar8;
    uVar44 = SUB84(dVar32,0) & uVar7;
    uVar43 = uVar43 & uVar8;
    if ((double)CONCAT44(uVar34,uVar33) < (double)CONCAT44(uVar43,uVar44) ||
        (double)CONCAT44(uVar34,uVar33) == (double)CONCAT44(uVar43,uVar44)) {
      return (double)CONCAT44(uVar37,uVar36);
    }
    uVar14 = 0;
    iVar17 = -1;
    if (iVar16 < 1) goto LAB_140281616;
    do {
      if (((*(int *)(param_1[3] + uVar14 * 4) < 0) &&
          (dVar25 = (double)FUN_140284a20(uVar14 * 0x40 + param_1[6]),
          dVar28 = (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar8,
                                    SUB84(dVar25,0) & uVar7),
          dVar28 <= (double)CONCAT44(uVar34,uVar33) && (double)CONCAT44(uVar34,uVar33) != dVar28))
         && (dVar25 < dVar32)) {
        dVar32 = dVar25;
      }
      uVar43 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar43;
    } while ((int)uVar43 < iVar16);
  }
  else {
    uVar44 = SUB84(dVar32,0) & uVar7;
    uVar35 = uVar43 & uVar8;
    if ((double)CONCAT44(uVar35,uVar44) < (double)CONCAT44(uVar34 & uVar8,uVar33 & uVar7))
    goto LAB_140281557;
    uVar14 = 0;
    iVar17 = 1;
    dVar25 = (double)CONCAT44(uVar34,uVar33);
    dVar32 = (double)CONCAT44(uVar34,uVar33);
    if (iVar16 < 1) goto LAB_140281616;
    do {
      dVar32 = dVar25;
      if (((0 < *(int *)(param_1[3] + uVar14 * 4)) &&
          (dVar28 = (double)FUN_140284a20(uVar14 * 0x40 + param_1[6]),
          dVar30 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar8,
                                    SUB84(dVar28,0) & uVar7),
          dVar30 <= (double)CONCAT44(uVar35,uVar44) && (double)CONCAT44(uVar35,uVar44) != dVar30))
         && (dVar32 = dVar28, dVar28 <= dVar25)) {
        dVar32 = dVar25;
      }
      uVar43 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar43;
      dVar25 = dVar32;
    } while ((int)uVar43 < iVar16);
  }
  iVar10 = 0;
  do {
    if (*(int *)(param_1[3] + (longlong)iVar10 * 4) != iVar17) {
      dVar25 = (double)FUN_140284a20((longlong)iVar10 * 0x40 + param_1[6]);
      if ((0.0 <= dVar25 * dVar32) &&
         ((double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar8,SUB84(dVar25,0) & uVar7) <
          (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar8,SUB84(dVar32,0) & uVar7))) {
        dVar32 = dVar25;
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < iVar16);
LAB_140281616:
  if (dVar32 == (double)CONCAT44(uVar37,uVar36)) {
    dVar32 = (double)CONCAT44(uVar37,uVar36);
  }
  return dVar32;
}

