// Function: FUN_14022e3e0
// Addr: 14022e3e0
// Size: 2046 bytes


void FUN_14022e3e0(longlong *param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
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
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  float fVar90;
  undefined8 uVar91;
  undefined8 *puVar92;
  longlong lVar93;
  uint uVar94;
  float *pfVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [192];
  
  fVar90 = DAT_140492704;
  uVar94 = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    do {
      lVar17 = param_1[0x80];
      lVar93 = (ulonglong)uVar94 * 0xd0;
      uVar15 = *(uint *)(lVar17 + 0xc0 + lVar93);
      if ((uVar15 >> 0x10 & 1) == 0) {
        if ((uVar15 & 1) == 0) {
          if ((uVar15 & 4) == 0) {
            if (((uVar15 & 0x10005) == 0) &&
               (((*(byte *)((longlong)param_1 + 0x3f6) & 1) == 0 ||
                (uVar94 < *(byte *)((longlong)param_1 + 0x3f5))))) goto LAB_14022eb4c;
          }
          else {
            lVar18 = param_1[2];
            if ((lVar18 == 0) ||
               (uVar16 = *(uint *)(lVar17 + 0xc4 + lVar93), *(uint *)(lVar18 + 0x44) <= uVar16)) {
LAB_14022eb4c:
              FUN_14022a070(param_1,uVar94,*(undefined8 *)(*param_1 + 0x30));
            }
            else {
              pfVar95 = (float *)((ulonglong)uVar16 * 0xd0 + *(longlong *)(lVar18 + 0x400));
              if ((((*(byte *)(param_1 + 4) & 1) == 0) || ((*(byte *)(lVar18 + 0x20) & 1) == 0)) &&
                 ((uVar15 & 8) == 0)) {
                lVar19 = *param_1;
                if ((*(byte *)(param_1 + 4) & 1) == 0) {
                  if ((*(byte *)(lVar18 + 0x20) & 1) == 0) {
                    lVar18 = *(longlong *)(lVar19 + 0x30);
                    FUN_1402290d0(lVar18,&local_118);
                    puVar92 = (undefined8 *)FUN_14024f0e0(local_d8,lVar18 + -0x40,pfVar95);
                    uVar91 = puVar92[1];
                    *(undefined8 *)(lVar17 + lVar93) = *puVar92;
                    ((undefined8 *)(lVar17 + lVar93))[1] = uVar91;
                    uVar91 = puVar92[3];
                    puVar2 = (undefined8 *)(lVar17 + 0x10 + lVar93);
                    *puVar2 = puVar92[2];
                    puVar2[1] = uVar91;
                    uVar91 = puVar92[5];
                    puVar2 = (undefined8 *)(lVar17 + 0x20 + lVar93);
                    *puVar2 = puVar92[4];
                    puVar2[1] = uVar91;
                    uVar91 = puVar92[7];
                    puVar2 = (undefined8 *)(lVar17 + 0x30 + lVar93);
                    *puVar2 = puVar92[6];
                    puVar2[1] = uVar91;
                    fVar98 = *(float *)(lVar17 + 8 + lVar93);
                    fVar96 = *(float *)(lVar17 + 4 + lVar93);
                    fVar97 = *(float *)(lVar17 + 0xc + lVar93);
                    fVar99 = *(float *)(lVar17 + lVar93);
                    fVar100 = *(float *)(lVar17 + 0x1c + lVar93);
                    fVar4 = *(float *)(lVar17 + 0x18 + lVar93);
                    fVar5 = *(float *)(lVar17 + 0x10 + lVar93);
                    fVar6 = *(float *)(lVar17 + 0x28 + lVar93);
                    fVar7 = *(float *)(lVar17 + 0x14 + lVar93);
                    fVar8 = *(float *)(lVar17 + 0x2c + lVar93);
                    fVar9 = *(float *)(lVar17 + 0x20 + lVar93);
                    fVar10 = *(float *)(lVar17 + 0x38 + lVar93);
                    fVar11 = *(float *)(lVar17 + 0x24 + lVar93);
                    fVar12 = *(float *)(lVar17 + 0x3c + lVar93);
                    fVar13 = *(float *)(lVar17 + 0x34 + lVar93);
                    fVar14 = *(float *)(lVar17 + 0x30 + lVar93);
                    pfVar95 = (float *)(lVar17 + lVar93);
                    *pfVar95 = local_118 * fVar99 + local_108 * fVar96 + local_f8 * fVar98 +
                               fVar97 * local_e8;
                    pfVar95[1] = fStack_114 * fVar99 + fStack_104 * fVar96 + fStack_f4 * fVar98 +
                                 fVar97 * fStack_e4;
                    pfVar95[2] = fStack_110 * fVar99 + fStack_100 * fVar96 + fStack_f0 * fVar98 +
                                 fVar97 * fStack_e0;
                    pfVar95[3] = fStack_10c * fVar99 + fStack_fc * fVar96 + fStack_ec * fVar98 +
                                 fVar97 * fStack_dc;
                    pfVar95 = (float *)(lVar17 + 0x10 + lVar93);
                    *pfVar95 = local_118 * fVar5 + local_108 * fVar7 + local_f8 * fVar4 +
                               local_e8 * fVar100;
                    pfVar95[1] = fStack_114 * fVar5 + fStack_104 * fVar7 + fStack_f4 * fVar4 +
                                 fStack_e4 * fVar100;
                    pfVar95[2] = fStack_110 * fVar5 + fStack_100 * fVar7 + fStack_f0 * fVar4 +
                                 fStack_e0 * fVar100;
                    pfVar95[3] = fStack_10c * fVar5 + fStack_fc * fVar7 + fStack_ec * fVar4 +
                                 fStack_dc * fVar100;
                    pfVar95 = (float *)(lVar17 + 0x20 + lVar93);
                    *pfVar95 = local_118 * fVar9 + local_108 * fVar11 + local_f8 * fVar6 +
                               local_e8 * fVar8;
                    pfVar95[1] = fStack_114 * fVar9 + fStack_104 * fVar11 + fStack_f4 * fVar6 +
                                 fStack_e4 * fVar8;
                    pfVar95[2] = fStack_110 * fVar9 + fStack_100 * fVar11 + fStack_f0 * fVar6 +
                                 fStack_e0 * fVar8;
                    pfVar95[3] = fStack_10c * fVar9 + fStack_fc * fVar11 + fStack_ec * fVar6 +
                                 fStack_dc * fVar8;
                    pfVar95 = (float *)(lVar17 + 0x30 + lVar93);
                    *pfVar95 = fVar14 * local_118 + fVar13 * local_108 + local_f8 * fVar10 +
                               local_e8 * fVar12;
                    pfVar95[1] = fVar14 * fStack_114 + fVar13 * fStack_104 + fStack_f4 * fVar10 +
                                 fStack_e4 * fVar12;
                    pfVar95[2] = fVar14 * fStack_110 + fVar13 * fStack_100 + fStack_f0 * fVar10 +
                                 fStack_e0 * fVar12;
                    pfVar95[3] = fVar14 * fStack_10c + fVar13 * fStack_fc + fStack_ec * fVar10 +
                                 fStack_dc * fVar12;
                  }
                  else {
                    FUN_1402290d0(*(undefined8 *)(lVar19 + 0x30),&local_118);
                    fVar98 = pfVar95[1];
                    fVar96 = *pfVar95;
                    fVar97 = pfVar95[2];
                    fVar99 = pfVar95[3];
                    fVar100 = pfVar95[7];
                    fVar4 = pfVar95[5];
                    fVar5 = pfVar95[6];
                    fVar6 = pfVar95[4];
                    fVar7 = pfVar95[10];
                    fVar8 = pfVar95[0xb];
                    fVar9 = pfVar95[8];
                    fVar10 = pfVar95[0xe];
                    fVar11 = pfVar95[9];
                    fVar12 = pfVar95[0xf];
                    fVar13 = pfVar95[0xd];
                    fVar14 = pfVar95[0xc];
                    pfVar95 = (float *)(lVar17 + lVar93);
                    *pfVar95 = fVar96 * local_118 + fVar98 * local_108 + fVar97 * local_f8 +
                               fVar99 * local_e8;
                    pfVar95[1] = fVar96 * fStack_114 + fVar98 * fStack_104 + fVar97 * fStack_f4 +
                                 fVar99 * fStack_e4;
                    pfVar95[2] = fVar96 * fStack_110 + fVar98 * fStack_100 + fVar97 * fStack_f0 +
                                 fVar99 * fStack_e0;
                    pfVar95[3] = fVar96 * fStack_10c + fVar98 * fStack_fc + fVar97 * fStack_ec +
                                 fVar99 * fStack_dc;
                    pfVar95 = (float *)(lVar17 + 0x10 + lVar93);
                    *pfVar95 = local_118 * fVar6 + local_108 * fVar4 + local_f8 * fVar5 +
                               local_e8 * fVar100;
                    pfVar95[1] = fStack_114 * fVar6 + fStack_104 * fVar4 + fStack_f4 * fVar5 +
                                 fStack_e4 * fVar100;
                    pfVar95[2] = fStack_110 * fVar6 + fStack_100 * fVar4 + fStack_f0 * fVar5 +
                                 fStack_e0 * fVar100;
                    pfVar95[3] = fStack_10c * fVar6 + fStack_fc * fVar4 + fStack_ec * fVar5 +
                                 fStack_dc * fVar100;
                    pfVar95 = (float *)(lVar17 + 0x20 + lVar93);
                    *pfVar95 = local_118 * fVar9 + local_108 * fVar11 + local_f8 * fVar7 +
                               local_e8 * fVar8;
                    pfVar95[1] = fStack_114 * fVar9 + fStack_104 * fVar11 + fStack_f4 * fVar7 +
                                 fStack_e4 * fVar8;
                    pfVar95[2] = fStack_110 * fVar9 + fStack_100 * fVar11 + fStack_f0 * fVar7 +
                                 fStack_e0 * fVar8;
                    pfVar95[3] = fStack_10c * fVar9 + fStack_fc * fVar11 + fStack_ec * fVar7 +
                                 fStack_dc * fVar8;
                    pfVar95 = (float *)(lVar17 + 0x30 + lVar93);
                    *pfVar95 = local_118 * fVar14 + local_108 * fVar13 + local_f8 * fVar10 +
                               local_e8 * fVar12;
                    pfVar95[1] = fStack_114 * fVar14 + fStack_104 * fVar13 + fStack_f4 * fVar10 +
                                 fStack_e4 * fVar12;
                    pfVar95[2] = fStack_110 * fVar14 + fStack_100 * fVar13 + fStack_f0 * fVar10 +
                                 fStack_e0 * fVar12;
                    pfVar95[3] = fStack_10c * fVar14 + fStack_fc * fVar13 + fStack_ec * fVar10 +
                                 fStack_dc * fVar12;
                  }
                }
                else {
                  lVar18 = *(longlong *)(lVar19 + 0x30);
                  fVar98 = pfVar95[1];
                  fVar96 = *pfVar95;
                  fVar97 = pfVar95[2];
                  fVar99 = pfVar95[4];
                  fVar100 = pfVar95[3];
                  fVar28 = *(float *)(lVar18 + -0x10);
                  fVar29 = *(float *)(lVar18 + -0xc);
                  fVar30 = *(float *)(lVar18 + -8);
                  fVar31 = *(float *)(lVar18 + -4);
                  fVar32 = *(float *)(lVar18 + -0x20);
                  fVar33 = *(float *)(lVar18 + -0x1c);
                  fVar34 = *(float *)(lVar18 + -0x18);
                  fVar35 = *(float *)(lVar18 + -0x14);
                  fVar36 = *(float *)(lVar18 + -0x40);
                  fVar37 = *(float *)(lVar18 + -0x3c);
                  fVar38 = *(float *)(lVar18 + -0x38);
                  fVar39 = *(float *)(lVar18 + -0x34);
                  fVar40 = *(float *)(lVar18 + -0x40);
                  fVar41 = *(float *)(lVar18 + -0x3c);
                  fVar42 = *(float *)(lVar18 + -0x38);
                  fVar43 = *(float *)(lVar18 + -0x34);
                  fVar44 = *(float *)(lVar18 + -0x2c);
                  fVar45 = *(float *)(lVar18 + -0x28);
                  fVar46 = *(float *)(lVar18 + -0x24);
                  fVar47 = *(float *)(lVar18 + -0x1c);
                  fVar48 = *(float *)(lVar18 + -0x18);
                  fVar49 = *(float *)(lVar18 + -0x14);
                  fVar50 = *(float *)(lVar18 + -0xc);
                  fVar51 = *(float *)(lVar18 + -8);
                  fVar52 = *(float *)(lVar18 + -4);
                  fVar53 = *(float *)(lVar18 + -0x3c);
                  fVar54 = *(float *)(lVar18 + -0x38);
                  fVar55 = *(float *)(lVar18 + -0x34);
                  fVar56 = *(float *)(lVar18 + -0x40);
                  fVar57 = *(float *)(lVar18 + -0x3c);
                  fVar58 = *(float *)(lVar18 + -0x38);
                  fVar59 = *(float *)(lVar18 + -0x34);
                  fVar4 = pfVar95[5];
                  fVar60 = *(float *)(lVar18 + -0x30);
                  fVar61 = *(float *)(lVar18 + -0x2c);
                  fVar62 = *(float *)(lVar18 + -0x28);
                  fVar63 = *(float *)(lVar18 + -0x24);
                  fVar5 = pfVar95[6];
                  fVar64 = *(float *)(lVar18 + -0x20);
                  fVar65 = *(float *)(lVar18 + -0x1c);
                  fVar66 = *(float *)(lVar18 + -0x18);
                  fVar67 = *(float *)(lVar18 + -0x14);
                  fVar6 = pfVar95[0xb];
                  fVar7 = pfVar95[7];
                  fVar8 = pfVar95[10];
                  fVar9 = pfVar95[9];
                  fVar10 = pfVar95[8];
                  fVar68 = *(float *)(lVar18 + -0x10);
                  fVar69 = *(float *)(lVar18 + -0xc);
                  fVar70 = *(float *)(lVar18 + -8);
                  fVar71 = *(float *)(lVar18 + -4);
                  fVar11 = pfVar95[0xe];
                  fVar72 = *(float *)(lVar18 + -0x30);
                  fVar73 = *(float *)(lVar18 + -0x2c);
                  fVar74 = *(float *)(lVar18 + -0x28);
                  fVar75 = *(float *)(lVar18 + -0x24);
                  fVar12 = pfVar95[0xf];
                  fVar76 = *(float *)(lVar18 + -0x30);
                  fVar77 = *(float *)(lVar18 + -0x2c);
                  fVar78 = *(float *)(lVar18 + -0x28);
                  fVar79 = *(float *)(lVar18 + -0x24);
                  fVar80 = *(float *)(lVar18 + -0x20);
                  fVar81 = *(float *)(lVar18 + -0x1c);
                  fVar82 = *(float *)(lVar18 + -0x18);
                  fVar83 = *(float *)(lVar18 + -0x14);
                  fVar13 = pfVar95[0xc];
                  fVar84 = *(float *)(lVar18 + -0x10);
                  fVar85 = *(float *)(lVar18 + -0xc);
                  fVar86 = *(float *)(lVar18 + -8);
                  fVar87 = *(float *)(lVar18 + -4);
                  fVar14 = pfVar95[0xd];
                  pfVar95 = (float *)(lVar17 + lVar93);
                  *pfVar95 = fVar96 * *(float *)(lVar18 + -0x40) +
                             fVar98 * *(float *)(lVar18 + -0x30) +
                             fVar97 * *(float *)(lVar18 + -0x20) +
                             fVar100 * *(float *)(lVar18 + -0x10);
                  pfVar95[1] = fVar96 * fVar53 + fVar98 * fVar44 + fVar97 * fVar47 +
                               fVar100 * fVar50;
                  pfVar95[2] = fVar96 * fVar54 + fVar98 * fVar45 + fVar97 * fVar48 +
                               fVar100 * fVar51;
                  pfVar95[3] = fVar96 * fVar55 + fVar98 * fVar46 + fVar97 * fVar49 +
                               fVar100 * fVar52;
                  pfVar95 = (float *)(lVar17 + 0x10 + lVar93);
                  *pfVar95 = fVar99 * fVar56 + fVar4 * fVar60 + fVar5 * fVar64 + fVar7 * fVar68;
                  pfVar95[1] = fVar99 * fVar57 + fVar4 * fVar61 + fVar5 * fVar65 + fVar7 * fVar69;
                  pfVar95[2] = fVar99 * fVar58 + fVar4 * fVar62 + fVar5 * fVar66 + fVar7 * fVar70;
                  pfVar95[3] = fVar99 * fVar59 + fVar4 * fVar63 + fVar5 * fVar67 + fVar7 * fVar71;
                  pfVar95 = (float *)(lVar17 + 0x20 + lVar93);
                  *pfVar95 = fVar36 * fVar10 + fVar72 * fVar9 + fVar32 * fVar8 + fVar28 * fVar6;
                  pfVar95[1] = fVar37 * fVar10 + fVar73 * fVar9 + fVar33 * fVar8 + fVar29 * fVar6;
                  pfVar95[2] = fVar38 * fVar10 + fVar74 * fVar9 + fVar34 * fVar8 + fVar30 * fVar6;
                  pfVar95[3] = fVar39 * fVar10 + fVar75 * fVar9 + fVar35 * fVar8 + fVar31 * fVar6;
                  pfVar95 = (float *)(lVar17 + 0x30 + lVar93);
                  *pfVar95 = fVar40 * fVar13 + fVar76 * fVar14 + fVar80 * fVar11 + fVar84 * fVar12;
                  pfVar95[1] = fVar41 * fVar13 + fVar77 * fVar14 + fVar81 * fVar11 + fVar85 * fVar12
                  ;
                  pfVar95[2] = fVar42 * fVar13 + fVar78 * fVar14 + fVar82 * fVar11 + fVar86 * fVar12
                  ;
                  pfVar95[3] = fVar43 * fVar13 + fVar79 * fVar14 + fVar83 * fVar11 + fVar87 * fVar12
                  ;
                }
              }
              else {
                uVar91 = *(undefined8 *)(pfVar95 + 2);
                *(undefined8 *)(lVar17 + lVar93) = *(undefined8 *)pfVar95;
                ((undefined8 *)(lVar17 + lVar93))[1] = uVar91;
                uVar91 = *(undefined8 *)(pfVar95 + 6);
                puVar2 = (undefined8 *)(lVar17 + 0x10 + lVar93);
                *puVar2 = *(undefined8 *)(pfVar95 + 4);
                puVar2[1] = uVar91;
                fVar98 = pfVar95[9];
                fVar96 = pfVar95[10];
                fVar97 = pfVar95[0xb];
                pfVar1 = (float *)(lVar17 + 0x20 + lVar93);
                *pfVar1 = pfVar95[8];
                pfVar1[1] = fVar98;
                pfVar1[2] = fVar96;
                pfVar1[3] = fVar97;
                uVar91 = *(undefined8 *)(pfVar95 + 0xe);
                puVar2 = (undefined8 *)(lVar17 + 0x30 + lVar93);
                *puVar2 = *(undefined8 *)(pfVar95 + 0xc);
                puVar2[1] = uVar91;
              }
            }
          }
        }
        else {
          puVar2 = (undefined8 *)(lVar17 + 0x80 + lVar93);
          uVar91 = puVar2[1];
          puVar92 = (undefined8 *)(lVar17 + 0x90 + lVar93);
          uVar88 = *puVar92;
          uVar89 = puVar92[1];
          *(undefined8 *)(lVar17 + lVar93) = *puVar2;
          ((undefined8 *)(lVar17 + lVar93))[1] = uVar91;
          puVar3 = (undefined4 *)(lVar17 + 0xa0 + lVar93);
          uVar20 = *puVar3;
          uVar21 = puVar3[1];
          uVar22 = puVar3[2];
          uVar23 = puVar3[3];
          puVar2 = (undefined8 *)(lVar17 + 0x10 + lVar93);
          *puVar2 = uVar88;
          puVar2[1] = uVar89;
          puVar3 = (undefined4 *)(lVar17 + 0xb0 + lVar93);
          uVar24 = *puVar3;
          uVar25 = puVar3[1];
          uVar26 = puVar3[2];
          uVar27 = puVar3[3];
          puVar3 = (undefined4 *)(lVar17 + 0x20 + lVar93);
          *puVar3 = uVar20;
          puVar3[1] = uVar21;
          puVar3[2] = uVar22;
          puVar3[3] = uVar23;
          puVar3 = (undefined4 *)(lVar17 + 0x30 + lVar93);
          *puVar3 = uVar24;
          puVar3[1] = uVar25;
          puVar3[2] = uVar26;
          puVar3[3] = uVar27;
          lVar18 = *param_1;
          fVar98 = *(float *)(lVar18 + 0x8c);
          fVar96 = *(float *)(lVar18 + 0x90);
          uVar91 = FUN_14005ecb0(local_d8,*(undefined8 *)(lVar18 + 0x40),
                                 *(undefined8 *)(lVar18 + 0x38));
          FUN_14005f730(&local_118,uVar91);
          fVar98 = fVar98 - 0.0;
          fVar96 = (fVar90 - fVar96) - 0.0;
          fVar99 = (fVar98 + fVar98) - fVar90;
          fVar97 = (fVar96 + fVar96) - fVar90;
          fVar96 = fStack_10c * fVar99 + fStack_fc * fVar97 + fStack_ec * 0.0 + fStack_dc;
          fVar98 = (local_118 * fVar99 + local_108 * fVar97 + local_f8 * 0.0 + local_e8) / fVar96;
          fVar96 = (fStack_114 * fVar99 + fStack_104 * fVar97 + fStack_f4 * 0.0 + fStack_e4) /
                   fVar96;
          if ((*(byte *)(param_1 + 4) & 1) == 0) {
            FUN_14005f730(&local_118,*(undefined8 *)(*param_1 + 0x30));
            fVar99 = fStack_114 * fVar98;
            fVar100 = fStack_110 * fVar98;
            fVar97 = fStack_100 * fVar96;
            fVar98 = local_118 * fVar98 + local_108 * fVar96 + local_f8 * 0.0 + local_e8;
            fVar96 = fVar99 + fStack_104 * fVar96 + fStack_f4 * 0.0 + fStack_e4;
            fVar97 = fVar100 + fVar97 + fStack_f0 * 0.0 + fStack_e0;
          }
          else {
            fVar97 = 0.0;
          }
          *(float *)(lVar17 + 0x30 + lVar93) = fVar98;
          *(float *)(lVar17 + 0x34 + lVar93) = fVar96;
          *(float *)(lVar17 + 0x38 + lVar93) = fVar97;
        }
      }
      uVar94 = uVar94 + 1;
    } while (uVar94 < *(uint *)((longlong)param_1 + 0x44));
  }
  return;
}

