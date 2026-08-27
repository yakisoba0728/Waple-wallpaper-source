// Function: FUN_140207b50
// Addr: 140207b50
// Size: 2834 bytes


void FUN_140207b50(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  char cVar51;
  undefined8 *puVar52;
  float *pfVar53;
  undefined8 uVar54;
  longlong *plVar55;
  longlong lVar56;
  undefined8 *puVar57;
  uint uVar58;
  longlong *plVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  fVar62 = DAT_140492704;
  if (((*(uint *)((longlong)param_1 + 0x304) & 0x820) == 0) ||
     ((*(byte *)(param_1[0x93] + 0x1f8) & 4) == 0)) {
    lVar56 = param_1[0x19];
    fVar60 = DAT_140492704;
    if ((*(uint *)(lVar56 + 0x118) & 0x2000) != 0) {
      fVar60 = *(float *)(param_1 + 0x68);
    }
    fVar61 = *(float *)(param_1 + 0x67);
    *(ulonglong *)(lVar56 + 0x124) =
         CONCAT44((float)((ulonglong)param_1[0x66] >> 0x20) * fVar60,(float)param_1[0x66] * fVar60);
    *(float *)(lVar56 + 300) = fVar60 * fVar61;
    *(undefined4 *)(param_1[0x19] + 0x120) = *(undefined4 *)((longlong)param_1 + 0x33c);
  }
  else {
    *(undefined4 *)(param_1[0x19] + 300) = 0x3f800000;
    *(undefined4 *)(param_1[0x19] + 0x128) = 0x3f800000;
    *(undefined4 *)(param_1[0x19] + 0x124) = 0x3f800000;
    *(undefined4 *)(param_1[0x19] + 0x120) = 0x3f800000;
  }
  if ((char)param_1[0x96] != '\0') {
    lVar56 = param_1[0x19];
    puVar52 = *(undefined8 **)(lVar56 + 0x30);
    *(undefined1 *)(lVar56 + 0x1ca) = 1;
    *(undefined8 **)(lVar56 + 0x30) = puVar52 + 8;
    puVar52[8] = *puVar52;
    puVar52[9] = puVar52[1];
    puVar52[10] = puVar52[2];
    puVar52[0xb] = puVar52[3];
    puVar52[0xc] = puVar52[4];
    puVar52[0xd] = puVar52[5];
    puVar52[0xe] = puVar52[6];
    puVar52[0xf] = puVar52[7];
    lVar56 = *(longlong *)(param_1[0x93] + 0xd0);
    fVar60 = (float)*(int *)(param_1[0x19] + 0x1218);
    fVar60 = fVar60 + fVar60;
    if ((*(byte *)(lVar56 + 0x1c) & 4) == 0) {
      uVar58 = *(uint *)(lVar56 + 0x2c);
      uVar7 = *(uint *)(lVar56 + 0x30);
    }
    else {
      uVar58 = *(uint *)(lVar56 + 0xb0);
      uVar7 = *(uint *)(lVar56 + 0xb4);
    }
    fVar61 = (float)uVar58 / fVar60;
    puVar52 = *(undefined8 **)(param_1[0x19] + 0x30);
    uVar1 = puVar52[4];
    uVar2 = puVar52[5];
    uVar3 = puVar52[2];
    uVar4 = puVar52[3];
    uVar5 = *puVar52;
    uVar6 = puVar52[1];
    fVar60 = (float)uVar7 / fVar60;
    *puVar52 = *puVar52;
    puVar52[1] = puVar52[1];
    puVar52[2] = puVar52[2];
    puVar52[3] = puVar52[3];
    puVar52[4] = puVar52[4];
    puVar52[5] = puVar52[5];
    puVar52[6] = CONCAT44(fVar61 * (float)((ulonglong)uVar5 >> 0x20) +
                          fVar60 * (float)((ulonglong)uVar3 >> 0x20) +
                          (float)((ulonglong)uVar1 >> 0x20) * 0.0 +
                          (float)((ulonglong)puVar52[6] >> 0x20),
                          fVar61 * (float)uVar5 + fVar60 * (float)uVar3 + (float)uVar1 * 0.0 +
                          (float)puVar52[6]);
    puVar52[7] = CONCAT44(fVar61 * (float)((ulonglong)uVar6 >> 0x20) +
                          fVar60 * (float)((ulonglong)uVar4 >> 0x20) +
                          (float)((ulonglong)uVar2 >> 0x20) * 0.0 +
                          (float)((ulonglong)puVar52[7] >> 0x20),
                          fVar61 * (float)uVar6 + fVar60 * (float)uVar4 + (float)uVar2 * 0.0 +
                          (float)puVar52[7]);
    puVar52 = (undefined8 *)(**(code **)(*param_1 + 0x80))(param_1);
    lVar8 = param_1[0x19];
    uVar1 = puVar52[1];
    uVar10 = *(undefined4 *)(puVar52 + 2);
    uVar11 = *(undefined4 *)((longlong)puVar52 + 0x14);
    uVar12 = *(undefined4 *)(puVar52 + 3);
    uVar13 = *(undefined4 *)((longlong)puVar52 + 0x1c);
    uVar14 = *(undefined4 *)(puVar52 + 4);
    uVar15 = *(undefined4 *)((longlong)puVar52 + 0x24);
    uVar16 = *(undefined4 *)(puVar52 + 5);
    uVar17 = *(undefined4 *)((longlong)puVar52 + 0x2c);
    uVar18 = *(undefined4 *)(puVar52 + 6);
    uVar19 = *(undefined4 *)((longlong)puVar52 + 0x34);
    uVar20 = *(undefined4 *)(puVar52 + 7);
    uVar21 = *(undefined4 *)((longlong)puVar52 + 0x3c);
    *(undefined8 *)(lVar8 + 0xa70) = *puVar52;
    *(undefined8 *)(lVar8 + 0xa78) = uVar1;
    *(undefined4 *)(lVar8 + 0xa80) = uVar10;
    *(undefined4 *)(lVar8 + 0xa84) = uVar11;
    *(undefined4 *)(lVar8 + 0xa88) = uVar12;
    *(undefined4 *)(lVar8 + 0xa8c) = uVar13;
    *(undefined4 *)(lVar8 + 0xa90) = uVar14;
    *(undefined4 *)(lVar8 + 0xa94) = uVar15;
    *(undefined4 *)(lVar8 + 0xa98) = uVar16;
    *(undefined4 *)(lVar8 + 0xa9c) = uVar17;
    *(undefined4 *)(lVar8 + 0xaa0) = uVar18;
    *(undefined4 *)(lVar8 + 0xaa4) = uVar19;
    *(undefined4 *)(lVar8 + 0xaa8) = uVar20;
    *(undefined4 *)(lVar8 + 0xaac) = uVar21;
    uVar58 = *(uint *)((longlong)param_1 + 0x304);
    if ((uVar58 >> 0xb & 1) != 0) {
      if ((*(byte *)(lVar56 + 0x1c) & 4) == 0) {
        uVar58 = *(uint *)(lVar56 + 0x2c);
        uVar7 = *(uint *)(lVar56 + 0x30);
      }
      else {
        uVar58 = *(uint *)(*(longlong *)(param_1[0x93] + 0xd0) + 0xb0);
        uVar7 = *(uint *)(*(longlong *)(param_1[0x93] + 0xd0) + 0xb4);
      }
      fVar60 = *(float *)(param_1 + 0x5e) / (float)uVar58;
      lVar8 = param_1[0x19];
      fVar61 = *(float *)((longlong)param_1 + 0x2f4) / (float)uVar7;
      *(float *)(lVar8 + 0xa70) = *(float *)(lVar8 + 0xa70) * fVar60;
      *(float *)(lVar8 + 0xa74) = *(float *)(lVar8 + 0xa74) * fVar60;
      *(float *)(lVar8 + 0xa78) = *(float *)(lVar8 + 0xa78) * fVar60;
      *(float *)(lVar8 + 0xa7c) = *(float *)(lVar8 + 0xa7c) * fVar60;
      *(float *)(lVar8 + 0xa80) = *(float *)(lVar8 + 0xa80) * fVar61;
      *(float *)(lVar8 + 0xa84) = *(float *)(lVar8 + 0xa84) * fVar61;
      *(float *)(lVar8 + 0xa88) = *(float *)(lVar8 + 0xa88) * fVar61;
      *(float *)(lVar8 + 0xa8c) = *(float *)(lVar8 + 0xa8c) * fVar61;
      *(undefined8 *)(lVar8 + 0xa90) = *(undefined8 *)(lVar8 + 0xa90);
      *(undefined8 *)(lVar8 + 0xa98) = *(undefined8 *)(lVar8 + 0xa98);
      *(undefined4 *)(lVar8 + 0xaa0) = *(undefined4 *)(lVar8 + 0xaa0);
      *(undefined4 *)(lVar8 + 0xaa4) = *(undefined4 *)(lVar8 + 0xaa4);
      *(undefined4 *)(lVar8 + 0xaa8) = *(undefined4 *)(lVar8 + 0xaa8);
      *(undefined4 *)(lVar8 + 0xaac) = *(undefined4 *)(lVar8 + 0xaac);
      uVar58 = *(uint *)((longlong)param_1 + 0x304);
    }
    lVar8 = param_1[0x19];
    if ((1 < *(int *)(lVar8 + 0x1218)) && ((*(byte *)(lVar56 + 0x1c) & 0x20) == 0)) {
      fVar60 = (float)*(int *)(lVar8 + 0x1218);
      if ((uVar58 & 0x10) == 0) {
        *(float *)(lVar8 + 0xa70) = fVar60 * *(float *)(lVar8 + 0xa70);
        *(float *)(lVar8 + 0xa74) = fVar60 * *(float *)(lVar8 + 0xa74);
        *(float *)(lVar8 + 0xa78) = fVar60 * *(float *)(lVar8 + 0xa78);
        *(float *)(lVar8 + 0xa7c) = fVar60 * *(float *)(lVar8 + 0xa7c);
        *(float *)(lVar8 + 0xa80) = fVar60 * *(float *)(lVar8 + 0xa80);
        *(float *)(lVar8 + 0xa84) = fVar60 * *(float *)(lVar8 + 0xa84);
        *(float *)(lVar8 + 0xa88) = fVar60 * *(float *)(lVar8 + 0xa88);
        *(float *)(lVar8 + 0xa8c) = fVar60 * *(float *)(lVar8 + 0xa8c);
        *(undefined8 *)(lVar8 + 0xa90) = *(undefined8 *)(lVar8 + 0xa90);
        *(undefined8 *)(lVar8 + 0xa98) = *(undefined8 *)(lVar8 + 0xa98);
        *(undefined4 *)(lVar8 + 0xaa0) = *(undefined4 *)(lVar8 + 0xaa0);
        *(undefined4 *)(lVar8 + 0xaa4) = *(undefined4 *)(lVar8 + 0xaa4);
        *(undefined4 *)(lVar8 + 0xaa8) = *(undefined4 *)(lVar8 + 0xaa8);
        *(undefined4 *)(lVar8 + 0xaac) = *(undefined4 *)(lVar8 + 0xaac);
      }
      else {
        lVar56 = *(longlong *)(lVar8 + 0x30);
        pfVar53 = (float *)FUN_14005f5b0(lVar56,0);
        fVar61 = *pfVar53;
        fVar22 = pfVar53[1];
        fVar23 = pfVar53[2];
        fVar24 = pfVar53[3];
        pfVar53 = (float *)FUN_14005f5b0(lVar56,1);
        fVar25 = *pfVar53;
        fVar26 = pfVar53[1];
        fVar27 = pfVar53[2];
        fVar28 = pfVar53[3];
        puVar52 = (undefined8 *)FUN_14005f5b0(lVar56,2);
        fVar29 = *(float *)(lVar56 + 0x30);
        fVar30 = *(float *)(lVar56 + 0x34);
        fVar31 = *(float *)(lVar56 + 0x38);
        fVar32 = *(float *)(lVar56 + 0x3c);
        uVar1 = *puVar52;
        uVar2 = puVar52[1];
        fVar60 = fVar62 / fVar60;
        pfVar53 = *(float **)(param_1[0x19] + 0x30);
        *pfVar53 = fVar60 * fVar61;
        pfVar53[1] = fVar60 * fVar22;
        pfVar53[2] = fVar60 * fVar23;
        pfVar53[3] = fVar60 * fVar24;
        pfVar53[4] = fVar60 * fVar25;
        pfVar53[5] = fVar60 * fVar26;
        pfVar53[6] = fVar60 * fVar27;
        pfVar53[7] = fVar60 * fVar28;
        *(undefined8 *)(pfVar53 + 8) = uVar1;
        *(undefined8 *)(pfVar53 + 10) = uVar2;
        pfVar53[0xc] = fVar29;
        pfVar53[0xd] = fVar30;
        pfVar53[0xe] = fVar31;
        pfVar53[0xf] = fVar32;
      }
    }
    if ((((param_1[0x94] != 0) && (lVar56 = param_1[0x97], lVar56 != 0)) &&
        (*(longlong *)(lVar56 + 8) != 0)) &&
       ((*(uint *)(*(longlong *)(lVar56 + 0x18) + 0x38) & 0x10000) != 0)) {
      FUN_14020cff0(param_1);
    }
  }
  lVar56 = param_1[0x94];
  if (lVar56 == 0) {
    lVar56 = param_1[0x93];
  }
  FUN_140155fc0(lVar56);
  (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x128))
            (*(longlong **)(param_1[0x19] + 0x1518),0);
  if ((*(uint *)((longlong)param_1 + 0x304) & 0x20) == 0) {
    if (((char)param_1[0x96] == '\0') ||
       (plVar55 = (longlong *)param_1[0x92], plVar55 == (longlong *)0x0)) {
      plVar55 = (longlong *)param_1[0x5b];
    }
    else {
      lVar8 = param_1[0x97];
      if ((lVar8 != 0) && (*(longlong *)(lVar8 + 8) != 0)) {
        plVar55 = *(longlong **)(lVar8 + 0x400);
      }
    }
LAB_14020806e:
    (**(code **)(*plVar55 + 8))();
  }
  else {
    if ((*(uint *)((longlong)param_1 + 0x304) & 0x40) != 0) {
      plVar55 = (longlong *)param_1[0x5d];
      goto LAB_14020806e;
    }
    (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x118))
              (*(longlong **)(param_1[0x19] + 0x1518),0,0,0,0);
    (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x120))
              (*(longlong **)(param_1[0x19] + 0x1518),1,0);
  }
  FUN_140157430(lVar56);
  lVar56 = param_1[0x97];
  if ((lVar56 == 0) || (*(longlong *)(lVar56 + 0x408) == 0)) {
LAB_1402081fb:
    if ((char)param_1[0x96] == '\0') goto LAB_140208217;
  }
  else if ((char)param_1[0x96] == '\0') {
    *(undefined1 *)(param_1[0x19] + 0x12e9) =
         *(undefined1 *)
          ((longlong)*(int *)(lVar56 + 0x390) * 200 + 0x1c + *(longlong *)(lVar56 + 0x18));
    FUN_1404210f0(param_1[0x19] + 0x12ec,param_1[0x97] + 0x350,
                  (ulonglong)*(byte *)(param_1[0x19] + 0x12e9) << 4);
    lVar56 = param_1[0x19];
    puVar52 = *(undefined8 **)(lVar56 + 0x30);
    *(undefined1 *)(lVar56 + 0x1ca) = 1;
    *(undefined8 **)(lVar56 + 0x30) = puVar52 + 8;
    puVar52[8] = *puVar52;
    puVar52[9] = puVar52[1];
    puVar52[10] = puVar52[2];
    puVar52[0xb] = puVar52[3];
    puVar52[0xc] = puVar52[4];
    puVar52[0xd] = puVar52[5];
    puVar52[0xe] = puVar52[6];
    puVar52[0xf] = puVar52[7];
    puVar52 = *(undefined8 **)(param_1[0x19] + 0x30);
    fVar62 = fVar62 / (float)*(int *)(param_1[0x19] + 0x1218);
    *puVar52 = CONCAT44(fVar62 * (float)((ulonglong)*puVar52 >> 0x20),fVar62 * (float)*puVar52);
    puVar52[1] = CONCAT44(fVar62 * (float)((ulonglong)puVar52[1] >> 0x20),fVar62 * (float)puVar52[1]
                         );
    puVar52[2] = CONCAT44(fVar62 * (float)((ulonglong)puVar52[2] >> 0x20),fVar62 * (float)puVar52[2]
                         );
    puVar52[3] = CONCAT44(fVar62 * (float)((ulonglong)puVar52[3] >> 0x20),fVar62 * (float)puVar52[3]
                         );
    *(undefined4 *)(puVar52 + 4) = *(undefined4 *)(puVar52 + 4);
    *(undefined4 *)((longlong)puVar52 + 0x24) = *(undefined4 *)((longlong)puVar52 + 0x24);
    *(undefined4 *)(puVar52 + 5) = *(undefined4 *)(puVar52 + 5);
    *(undefined4 *)((longlong)puVar52 + 0x2c) = *(undefined4 *)((longlong)puVar52 + 0x2c);
    puVar52[6] = puVar52[6];
    puVar52[7] = puVar52[7];
    FUN_140155fc0(*(undefined8 *)(param_1[0x97] + 0x408));
    (**(code **)(**(longlong **)(param_1[0x97] + 0x3f8) + 8))();
    FUN_140157430(*(undefined8 *)(param_1[0x97] + 0x408));
    lVar56 = param_1[0x19];
    plVar55 = (longlong *)(lVar56 + 0x30);
    *plVar55 = *plVar55 + -0x40;
    *(undefined1 *)(lVar56 + 0x1ca) = 1;
    *(undefined1 *)(param_1[0x19] + 0x12e9) = 0;
    goto LAB_1402081fb;
  }
  lVar56 = param_1[0x19];
  plVar55 = (longlong *)(lVar56 + 0x30);
  *plVar55 = *plVar55 + -0x40;
  *(undefined1 *)(lVar56 + 0x1ca) = 1;
LAB_140208217:
  if (((*(byte *)(param_1 + 0x24) & 4) != 0) && (param_1[0x33] != param_1[0x34])) {
    lVar56 = param_1[0x19];
    puVar52 = *(undefined8 **)(lVar56 + 0x30);
    uVar1 = *puVar52;
    uVar2 = puVar52[1];
    uVar3 = puVar52[2];
    uVar4 = puVar52[3];
    uVar5 = puVar52[4];
    uVar6 = puVar52[5];
    uVar33 = puVar52[6];
    uVar34 = puVar52[7];
    puVar52 = *(undefined8 **)(lVar56 + 0x38);
    uVar35 = *puVar52;
    uVar36 = puVar52[1];
    uVar37 = puVar52[2];
    uVar38 = puVar52[3];
    uVar39 = puVar52[4];
    uVar40 = puVar52[5];
    uVar41 = puVar52[6];
    uVar42 = puVar52[7];
    puVar52 = *(undefined8 **)(lVar56 + 0x40);
    uVar43 = puVar52[4];
    uVar44 = puVar52[5];
    uVar45 = *puVar52;
    uVar46 = puVar52[1];
    uVar47 = puVar52[2];
    uVar48 = puVar52[3];
    uVar49 = puVar52[6];
    uVar50 = puVar52[7];
    if ((*(byte *)((longlong)param_1 + 0x304) & 2) == 0) {
      uVar54 = (**(code **)(*param_1 + 0x80))(param_1);
      FUN_14005f730(&local_108,uVar54);
      puVar52 = *(undefined8 **)(param_1[0x19] + 0x30);
      *puVar52 = local_108;
      puVar52[1] = uStack_100;
      uVar58 = DAT_140492ff0;
      puVar52[2] = local_f8;
      puVar52[3] = uStack_f0;
      fVar62 = DAT_1404926c0;
      puVar52[4] = local_e8;
      puVar52[5] = uStack_e0;
      puVar52[6] = local_d8;
      puVar52[7] = uStack_d0;
      puVar52 = *(undefined8 **)(param_1[0x19] + 0x38);
      *puVar52 = 0x3f800000;
      puVar52[1] = 0;
      *(undefined4 *)(puVar52 + 2) = 0;
      *(undefined8 *)((longlong)puVar52 + 0x14) = 0x3f800000;
      *(undefined8 *)((longlong)puVar52 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar52 + 0x24) = 0;
      puVar52[5] = 0x3f800000;
      puVar52[6] = 0;
      *(undefined4 *)(puVar52 + 7) = 0;
      *(undefined4 *)((longlong)puVar52 + 0x3c) = 0x3f800000;
      plVar55 = *(longlong **)(param_1[0x19] + 0x1518);
      (**(code **)(*plVar55 + 0x18))
                (plVar55,*(undefined8 *)(param_1[0x19] + 0x40),
                 (float)((uint)*(float *)(param_1 + 0x5e) ^ uVar58) * fVar62,
                 *(float *)(param_1 + 0x5e) * fVar62,
                 (float)((uint)*(float *)((longlong)param_1 + 0x2f4) ^ uVar58) * fVar62,
                 *(float *)((longlong)param_1 + 0x2f4) * fVar62,DAT_140492a18,DAT_140492944);
    }
    lVar56 = param_1[0x19];
    puVar52 = *(undefined8 **)(lVar56 + 0x30);
    uVar54 = puVar52[1];
    *(undefined8 *)(lVar56 + 0xaf0) = *puVar52;
    *(undefined8 *)(lVar56 + 0xaf8) = uVar54;
    uVar54 = puVar52[3];
    *(undefined8 *)(lVar56 + 0xb00) = puVar52[2];
    *(undefined8 *)(lVar56 + 0xb08) = uVar54;
    uVar54 = puVar52[5];
    *(undefined8 *)(lVar56 + 0xb10) = puVar52[4];
    *(undefined8 *)(lVar56 + 0xb18) = uVar54;
    uVar10 = *(undefined4 *)((longlong)puVar52 + 0x34);
    uVar11 = *(undefined4 *)(puVar52 + 7);
    uVar12 = *(undefined4 *)((longlong)puVar52 + 0x3c);
    *(undefined4 *)(lVar56 + 0xb20) = *(undefined4 *)(puVar52 + 6);
    *(undefined4 *)(lVar56 + 0xb24) = uVar10;
    *(undefined4 *)(lVar56 + 0xb28) = uVar11;
    *(undefined4 *)(lVar56 + 0xb2c) = uVar12;
    uVar58 = *(uint *)((longlong)param_1 + 0x304) & 0x40;
    if (uVar58 == 0) {
      *(char *)(param_1[0x19] + 0x1c9) = *(char *)(param_1[0x19] + 0x1c9) + '\x01';
      (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0xe8))
                (*(longlong **)(param_1[0x19] + 0x1518),1);
    }
    plVar55 = (longlong *)param_1[0x34];
    for (plVar59 = (longlong *)param_1[0x33]; plVar59 != plVar55; plVar59 = plVar59 + 1) {
      plVar9 = (longlong *)*plVar59;
      cVar51 = (**(code **)(*plVar9 + 0x68))(plVar9);
      if (cVar51 != '\0') {
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      if ((*(byte *)(plVar9 + 0x24) & 4) == 0) {
        puVar52 = (undefined8 *)plVar9[0x34];
        for (puVar57 = (undefined8 *)plVar9[0x33]; puVar57 != puVar52; puVar57 = puVar57 + 1) {
          plVar9 = (longlong *)*puVar57;
          (**(code **)(*plVar9 + 0x50))(plVar9);
          FUN_1401eca70(param_1,plVar9);
        }
      }
    }
    if (uVar58 == 0) {
      *(char *)(param_1[0x19] + 0x1c9) = *(char *)(param_1[0x19] + 0x1c9) + -1;
      if (*(char *)(param_1[0x19] + 0x1c9) == '\0') {
        plVar55 = *(longlong **)(param_1[0x19] + 0x1518);
        (**(code **)(*plVar55 + 0xe8))(plVar55,0);
      }
    }
    local_118 = (undefined4)uVar49;
    uStack_114 = (undefined4)((ulonglong)uVar49 >> 0x20);
    uStack_110 = (undefined4)uVar50;
    uStack_10c = (undefined4)((ulonglong)uVar50 >> 0x20);
    puVar52 = *(undefined8 **)(param_1[0x19] + 0x40);
    *puVar52 = uVar45;
    puVar52[1] = uVar46;
    puVar52[2] = uVar47;
    puVar52[3] = uVar48;
    puVar52[4] = uVar43;
    puVar52[5] = uVar44;
    *(undefined4 *)(puVar52 + 6) = local_118;
    *(undefined4 *)((longlong)puVar52 + 0x34) = uStack_114;
    *(undefined4 *)(puVar52 + 7) = uStack_110;
    *(undefined4 *)((longlong)puVar52 + 0x3c) = uStack_10c;
    puVar52 = *(undefined8 **)(param_1[0x19] + 0x38);
    *puVar52 = uVar35;
    puVar52[1] = uVar36;
    puVar52[2] = uVar37;
    puVar52[3] = uVar38;
    puVar52[4] = uVar39;
    puVar52[5] = uVar40;
    puVar52[6] = uVar41;
    puVar52[7] = uVar42;
    puVar52 = *(undefined8 **)(param_1[0x19] + 0x30);
    *puVar52 = uVar1;
    puVar52[1] = uVar2;
    puVar52[2] = uVar3;
    puVar52[3] = uVar4;
    puVar52[4] = uVar5;
    puVar52[5] = uVar6;
    puVar52[6] = uVar33;
    puVar52[7] = uVar34;
    lVar56 = param_1[0x19];
    *(undefined8 *)(lVar56 + 0xaf0) = 0x3f800000;
    *(undefined8 *)(lVar56 + 0xaf8) = 0;
    *(undefined4 *)(lVar56 + 0xb00) = 0;
    *(undefined8 *)(lVar56 + 0xb04) = 0x3f800000;
    *(undefined8 *)(lVar56 + 0xb0c) = 0;
    *(undefined4 *)(lVar56 + 0xb14) = 0;
    *(undefined8 *)(lVar56 + 0xb18) = 0x3f800000;
    *(undefined8 *)(lVar56 + 0xb20) = 0;
    *(undefined4 *)(lVar56 + 0xb28) = 0;
    *(undefined4 *)(lVar56 + 0xb2c) = 0x3f800000;
    (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0xd8))
              (*(longlong **)(param_1[0x19] + 0x1518),1);
  }
  return;
}

