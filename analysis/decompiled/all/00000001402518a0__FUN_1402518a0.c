// Function: FUN_1402518a0
// Addr: 1402518a0
// Size: 70 bytes


void FUN_1402518a0(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  ulonglong uVar61;
  longlong lVar62;
  float *pfVar63;
  uint uVar64;
  int iVar65;
  ulonglong uVar66;
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
  undefined1 auVar79 [16];
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  
  lVar16 = *param_4;
  uVar66 = param_4[1] - lVar16 >> 4;
  iVar65 = (int)uVar66;
  if (iVar65 != 0) {
    lVar17 = param_3[0xe];
    lVar18 = param_3[0xd];
    lVar19 = param_3[0xb];
    lVar20 = param_3[0xc];
    lVar21 = param_3[0xf];
    uVar30 = *(uint *)(param_3 + 0x1d) / 10000;
    lVar22 = param_4[3];
    lVar23 = param_4[6];
    lVar24 = param_4[9];
    lVar25 = param_4[0xc];
    lVar26 = param_4[0xf];
    lVar27 = param_4[0x12];
    lVar28 = param_4[0x15];
    lVar29 = param_3[0x10];
    uVar64 = *(uint *)(param_1 + 0x144) % (uVar30 + 1) << 2;
    if (uVar64 < *(uint *)(param_3 + 0x1d)) {
      do {
        uVar61 = (ulonglong)uVar64;
        puVar1 = (undefined4 *)(lVar21 + uVar61 * 4);
        puVar2 = (undefined4 *)(lVar29 + uVar61 * 4);
        uVar31 = *puVar2;
        uVar32 = puVar2[1];
        uVar33 = puVar2[2];
        uVar34 = puVar2[3];
        puVar2 = (undefined4 *)(lVar29 + uVar61 * 4);
        uVar35 = *puVar1;
        uVar36 = puVar1[1];
        uVar37 = puVar1[2];
        uVar38 = puVar1[3];
        pfVar3 = (float *)(lVar18 + uVar61 * 4);
        pfVar4 = (float *)(lVar19 + uVar61 * 4);
        fVar39 = *pfVar4;
        fVar40 = pfVar4[1];
        fVar41 = pfVar4[2];
        fVar42 = pfVar4[3];
        fVar43 = *pfVar3;
        fVar44 = pfVar3[1];
        fVar45 = pfVar3[2];
        fVar46 = pfVar3[3];
        pfVar4 = (float *)(lVar19 + uVar61 * 4);
        puVar5 = (undefined4 *)(lVar17 + uVar61 * 4);
        uVar47 = *puVar5;
        uVar48 = puVar5[1];
        uVar49 = puVar5[2];
        uVar50 = puVar5[3];
        puVar5 = (undefined4 *)(lVar17 + uVar61 * 4);
        pfVar63 = (float *)(uVar61 * 4 + lVar20);
        uVar80 = 0;
        uVar81 = 0;
        uVar82 = 0;
        uVar83 = 0;
        fVar51 = *pfVar63;
        fVar52 = pfVar63[1];
        fVar53 = pfVar63[2];
        fVar54 = pfVar63[3];
        if (iVar65 != 0) {
          uVar61 = uVar66 & 0xffffffff;
          lVar62 = 0;
          do {
            pfVar6 = (float *)(lVar24 + lVar62 * 0x10);
            pfVar7 = (float *)(lVar16 + lVar62 * 0x10);
            pfVar14 = (float *)(lVar22 + lVar62 * 0x10);
            pfVar8 = (float *)(lVar23 + lVar62 * 0x10);
            pfVar9 = (float *)(lVar25 + lVar62 * 0x10);
            pfVar15 = (float *)(lVar26 + lVar62 * 0x10);
            pfVar10 = (float *)(lVar28 + lVar62 * 0x10);
            auVar79._0_4_ =
                 (fVar51 - *pfVar14) * *pfVar9 + (fVar39 - *pfVar7) * *pfVar6 +
                 (fVar43 - *pfVar8) * *pfVar15;
            auVar79._4_4_ =
                 (fVar52 - pfVar14[1]) * pfVar9[1] + (fVar40 - pfVar7[1]) * pfVar6[1] +
                 (fVar44 - pfVar8[1]) * pfVar15[1];
            auVar79._8_4_ =
                 (fVar53 - pfVar14[2]) * pfVar9[2] + (fVar41 - pfVar7[2]) * pfVar6[2] +
                 (fVar45 - pfVar8[2]) * pfVar15[2];
            auVar79._12_4_ =
                 (fVar54 - pfVar14[3]) * pfVar9[3] + (fVar42 - pfVar7[3]) * pfVar6[3] +
                 (fVar46 - pfVar8[3]) * pfVar15[3];
            auVar79 = maxps(auVar79,ZEXT816(0));
            auVar79 = minps(auVar79,*(undefined1 (*) [16])(lVar27 + lVar62 * 0x10));
            fVar67 = auVar79._0_4_;
            fVar68 = auVar79._4_4_;
            fVar70 = auVar79._12_4_;
            fVar69 = auVar79._8_4_;
            fVar71 = fVar39 - (fVar67 * *pfVar6 + *pfVar7);
            fVar72 = fVar40 - (fVar68 * pfVar6[1] + pfVar7[1]);
            fVar73 = fVar41 - (fVar69 * pfVar6[2] + pfVar7[2]);
            fVar74 = fVar42 - (fVar70 * pfVar6[3] + pfVar7[3]);
            fVar75 = fVar51 - (fVar67 * *pfVar9 + *pfVar14);
            fVar76 = fVar52 - (fVar68 * pfVar9[1] + pfVar14[1]);
            fVar77 = fVar53 - (fVar69 * pfVar9[2] + pfVar14[2]);
            fVar78 = fVar54 - (fVar70 * pfVar9[3] + pfVar14[3]);
            fVar67 = fVar43 - (fVar67 * *pfVar15 + *pfVar8);
            fVar68 = fVar44 - (fVar68 * pfVar15[1] + pfVar8[1]);
            fVar69 = fVar45 - (fVar69 * pfVar15[2] + pfVar8[2]);
            fVar70 = fVar46 - (fVar70 * pfVar15[3] + pfVar8[3]);
            uVar80 = uVar80 | -(uint)(fVar75 * fVar75 + fVar71 * fVar71 + fVar67 * fVar67 <
                                     *pfVar10 * *pfVar10);
            uVar81 = uVar81 | -(uint)(fVar76 * fVar76 + fVar72 * fVar72 + fVar68 * fVar68 <
                                     pfVar10[1] * pfVar10[1]);
            uVar82 = uVar82 | -(uint)(fVar77 * fVar77 + fVar73 * fVar73 + fVar69 * fVar69 <
                                     pfVar10[2] * pfVar10[2]);
            uVar83 = uVar83 | -(uint)(fVar78 * fVar78 + fVar74 * fVar74 + fVar70 * fVar70 <
                                     pfVar10[3] * pfVar10[3]);
            uVar60 = (int)uVar61 - 1;
            uVar61 = (ulonglong)uVar60;
            lVar62 = lVar62 + 1;
          } while (uVar60 != 0);
        }
        lVar62 = (longlong)(int)uVar64;
        uVar64 = uVar64 + uVar30 * 4 + 4;
        puVar11 = (uint *)(param_3[1] + lVar62 * 4);
        uVar60 = puVar11[1];
        uVar55 = puVar11[2];
        uVar56 = puVar11[3];
        puVar12 = (uint *)(*param_3 + lVar62 * 4);
        uVar57 = puVar12[1];
        uVar58 = puVar12[2];
        uVar59 = puVar12[3];
        puVar13 = (uint *)(*param_3 + lVar62 * 4);
        *puVar13 = uVar80 & *puVar11 | ~uVar80 & *puVar12;
        puVar13[1] = uVar81 & uVar60 | ~uVar81 & uVar57;
        puVar13[2] = uVar82 & uVar55 | ~uVar82 & uVar58;
        puVar13[3] = uVar83 & uVar56 | ~uVar83 & uVar59;
        *pfVar4 = fVar39;
        pfVar4[1] = fVar40;
        pfVar4[2] = fVar41;
        pfVar4[3] = fVar42;
        *pfVar63 = fVar51;
        pfVar63[1] = fVar52;
        pfVar63[2] = fVar53;
        pfVar63[3] = fVar54;
        *pfVar3 = fVar43;
        pfVar3[1] = fVar44;
        pfVar3[2] = fVar45;
        pfVar3[3] = fVar46;
        *puVar5 = uVar47;
        puVar5[1] = uVar48;
        puVar5[2] = uVar49;
        puVar5[3] = uVar50;
        *puVar2 = uVar31;
        puVar2[1] = uVar32;
        puVar2[2] = uVar33;
        puVar2[3] = uVar34;
        *puVar1 = uVar35;
        puVar1[1] = uVar36;
        puVar1[2] = uVar37;
        puVar1[3] = uVar38;
      } while (uVar64 < *(uint *)(param_3 + 0x1d));
    }
  }
  return;
}

