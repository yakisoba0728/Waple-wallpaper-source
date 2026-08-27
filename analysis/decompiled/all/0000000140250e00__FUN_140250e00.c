// Function: FUN_140250e00
// Addr: 140250e00
// Size: 1299 bytes


void FUN_140250e00(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  uint *puVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
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
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  longlong lVar38;
  float *pfVar39;
  int iVar40;
  ulonglong uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
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
  float fVar65;
  undefined1 auVar64 [16];
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
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
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  ulonglong uVar37;
  
  lVar13 = *param_4;
  uVar41 = param_4[1] - lVar13 >> 4;
  iVar40 = (int)uVar41;
  if (iVar40 != 0) {
    lVar14 = *(longlong *)(param_3 + 0x70);
    lVar15 = *(longlong *)(param_3 + 0x80);
    lVar16 = *(longlong *)(param_3 + 0x78);
    lVar17 = *(longlong *)(param_3 + 0x58);
    lVar18 = *(longlong *)(param_3 + 0x60);
    uVar12 = *(uint *)(param_3 + 0xe8);
    uVar27 = uVar12 / 10000;
    lVar19 = param_4[3];
    lVar20 = param_4[6];
    lVar21 = param_4[9];
    lVar22 = param_4[0xc];
    lVar23 = param_4[0xf];
    lVar24 = param_4[0x12];
    lVar25 = param_4[0x15];
    lVar26 = *(longlong *)(param_3 + 0x68);
    for (uVar36 = *(uint *)(param_1 + 0x144) % (uVar27 + 1) << 2; uVar36 < uVar12;
        uVar36 = uVar36 + uVar27 * 4 + 4) {
      uVar37 = (ulonglong)uVar36;
      pfVar1 = (float *)(lVar16 + uVar37 * 4);
      fVar28 = *pfVar1;
      fVar29 = pfVar1[1];
      fVar30 = pfVar1[2];
      fVar31 = pfVar1[3];
      pfVar1 = (float *)(lVar14 + uVar37 * 4);
      pfVar2 = (float *)(lVar15 + uVar37 * 4);
      fVar32 = *pfVar2;
      fVar33 = pfVar2[1];
      fVar34 = pfVar2[2];
      fVar35 = pfVar2[3];
      puVar3 = (uint *)(lVar16 + uVar37 * 4);
      pfVar2 = (float *)(lVar17 + uVar37 * 4);
      fVar47 = *pfVar2;
      fVar46 = pfVar2[1];
      fVar48 = pfVar2[2];
      fVar49 = pfVar2[3];
      puVar4 = (uint *)(lVar15 + uVar37 * 4);
      pfVar2 = (float *)(lVar26 + uVar37 * 4);
      fVar69 = *pfVar2;
      fVar70 = pfVar2[1];
      fVar71 = pfVar2[2];
      fVar72 = pfVar2[3];
      fVar56 = *pfVar1;
      fVar58 = pfVar1[1];
      fVar60 = pfVar1[2];
      fVar62 = pfVar1[3];
      pfVar2 = (float *)(lVar17 + uVar37 * 4);
      pfVar39 = (float *)(uVar37 * 4 + lVar18);
      pfVar5 = (float *)(lVar26 + uVar37 * 4);
      uVar73 = 0;
      uVar74 = 0;
      uVar75 = 0;
      uVar76 = 0;
      fVar81 = 0.0;
      fVar82 = 0.0;
      fVar83 = 0.0;
      fVar84 = 0.0;
      fVar50 = *pfVar39;
      fVar51 = pfVar39[1];
      fVar52 = pfVar39[2];
      fVar53 = pfVar39[3];
      fVar85 = 0.0;
      fVar86 = 0.0;
      fVar87 = 0.0;
      fVar88 = 0.0;
      fVar89 = 0.0;
      fVar90 = 0.0;
      fVar91 = 0.0;
      fVar92 = 0.0;
      fVar77 = 0.0;
      fVar78 = 0.0;
      fVar79 = 0.0;
      fVar80 = 0.0;
      if (iVar40 != 0) {
        uVar37 = uVar41 & 0xffffffff;
        lVar38 = 0;
        while( true ) {
          pfVar6 = (float *)(lVar13 + lVar38 * 0x10);
          pfVar7 = (float *)(lVar19 + lVar38 * 0x10);
          pfVar8 = (float *)(lVar20 + lVar38 * 0x10);
          pfVar9 = (float *)(lVar21 + lVar38 * 0x10);
          pfVar11 = (float *)(lVar22 + lVar38 * 0x10);
          auVar64 = *(undefined1 (*) [16])(lVar23 + lVar38 * 0x10);
          pfVar10 = (float *)(lVar25 + lVar38 * 0x10);
          fVar56 = *pfVar10;
          fVar58 = pfVar10[1];
          fVar60 = pfVar10[2];
          fVar62 = pfVar10[3];
          auVar67._0_4_ =
               (fVar50 - *pfVar7) * *pfVar11 + (fVar47 - *pfVar6) * *pfVar9 +
               (fVar69 - *pfVar8) * auVar64._0_4_;
          auVar67._4_4_ =
               (fVar51 - pfVar7[1]) * pfVar11[1] + (fVar46 - pfVar6[1]) * pfVar9[1] +
               (fVar70 - pfVar8[1]) * auVar64._4_4_;
          auVar67._8_4_ =
               (fVar52 - pfVar7[2]) * pfVar11[2] + (fVar48 - pfVar6[2]) * pfVar9[2] +
               (fVar71 - pfVar8[2]) * auVar64._8_4_;
          auVar67._12_4_ =
               (fVar53 - pfVar7[3]) * pfVar11[3] + (fVar49 - pfVar6[3]) * pfVar9[3] +
               (fVar72 - pfVar8[3]) * auVar64._12_4_;
          auVar67 = maxps(auVar67,ZEXT816(0));
          auVar67 = minps(auVar67,*(undefined1 (*) [16])(lVar24 + lVar38 * 0x10));
          fVar55 = auVar67._0_4_;
          fVar57 = auVar67._4_4_;
          fVar61 = auVar67._12_4_;
          fVar47 = auVar67._8_4_;
          fVar46 = *pfVar2 - (fVar55 * *pfVar9 + *pfVar6);
          fVar48 = pfVar2[1] - (fVar57 * pfVar9[1] + pfVar6[1]);
          fVar49 = pfVar2[2] - (fVar47 * pfVar9[2] + pfVar6[2]);
          fVar50 = pfVar2[3] - (fVar61 * pfVar9[3] + pfVar6[3]);
          fVar69 = *pfVar5;
          fVar70 = pfVar5[1];
          fVar71 = pfVar5[2];
          fVar72 = pfVar5[3];
          fVar51 = *pfVar39 - (fVar55 * *pfVar11 + *pfVar7);
          fVar52 = pfVar39[1] - (fVar57 * pfVar11[1] + pfVar7[1]);
          fVar53 = pfVar39[2] - (fVar47 * pfVar11[2] + pfVar7[2]);
          fVar54 = pfVar39[3] - (fVar61 * pfVar11[3] + pfVar7[3]);
          fVar55 = fVar69 - (fVar55 * auVar64._0_4_ + *pfVar8);
          fVar57 = fVar70 - (fVar57 * auVar64._4_4_ + pfVar8[1]);
          fVar59 = fVar71 - (fVar47 * auVar64._8_4_ + pfVar8[2]);
          fVar61 = fVar72 - (fVar61 * auVar64._12_4_ + pfVar8[3]);
          auVar68._0_4_ = fVar51 * fVar51 + fVar46 * fVar46 + fVar55 * fVar55;
          auVar68._4_4_ = fVar52 * fVar52 + fVar48 * fVar48 + fVar57 * fVar57;
          auVar68._8_4_ = fVar53 * fVar53 + fVar49 * fVar49 + fVar59 * fVar59;
          auVar68._12_4_ = fVar54 * fVar54 + fVar50 * fVar50 + fVar61 * fVar61;
          auVar64 = rsqrtps(auVar64,auVar68);
          uVar42 = -(uint)(auVar68._0_4_ < fVar56 * fVar56);
          uVar43 = -(uint)(auVar68._4_4_ < fVar58 * fVar58);
          uVar44 = -(uint)(auVar68._8_4_ < fVar60 * fVar60);
          uVar45 = -(uint)(auVar68._12_4_ < fVar62 * fVar62);
          fVar63 = auVar64._0_4_;
          fVar65 = auVar64._4_4_;
          fVar66 = auVar64._12_4_;
          fVar47 = auVar64._8_4_;
          uVar73 = uVar73 | uVar42;
          uVar74 = uVar74 | uVar43;
          uVar75 = uVar75 | uVar44;
          uVar76 = uVar76 | uVar45;
          fVar81 = (float)((uint)(fVar63 * fVar46) & uVar42 | ~uVar42 & (uint)fVar81);
          fVar82 = (float)((uint)(fVar65 * fVar48) & uVar43 | ~uVar43 & (uint)fVar82);
          fVar83 = (float)((uint)(fVar47 * fVar49) & uVar44 | ~uVar44 & (uint)fVar83);
          fVar84 = (float)((uint)(fVar66 * fVar50) & uVar45 | ~uVar45 & (uint)fVar84);
          fVar85 = (float)((uint)(fVar63 * fVar51) & uVar42 | ~uVar42 & (uint)fVar85);
          fVar86 = (float)((uint)(fVar65 * fVar52) & uVar43 | ~uVar43 & (uint)fVar86);
          fVar87 = (float)((uint)(fVar47 * fVar53) & uVar44 | ~uVar44 & (uint)fVar87);
          fVar88 = (float)((uint)(fVar66 * fVar54) & uVar45 | ~uVar45 & (uint)fVar88);
          fVar50 = *pfVar39;
          fVar51 = pfVar39[1];
          fVar52 = pfVar39[2];
          fVar53 = pfVar39[3];
          fVar89 = (float)((uint)(fVar63 * fVar55) & uVar42 | ~uVar42 & (uint)fVar89);
          fVar90 = (float)((uint)(fVar65 * fVar57) & uVar43 | ~uVar43 & (uint)fVar90);
          fVar91 = (float)((uint)(fVar47 * fVar59) & uVar44 | ~uVar44 & (uint)fVar91);
          fVar92 = (float)((uint)(fVar66 * fVar61) & uVar45 | ~uVar45 & (uint)fVar92);
          fVar77 = (float)((uint)(fVar63 * auVar68._0_4_ - fVar56) & uVar42 | ~uVar42 & (uint)fVar77
                          );
          fVar78 = (float)((uint)(fVar65 * auVar68._4_4_ - fVar58) & uVar43 | ~uVar43 & (uint)fVar78
                          );
          fVar79 = (float)((uint)(fVar47 * auVar68._8_4_ - fVar60) & uVar44 | ~uVar44 & (uint)fVar79
                          );
          fVar80 = (float)((uint)(fVar66 * auVar68._12_4_ - fVar62) & uVar45 |
                          ~uVar45 & (uint)fVar80);
          uVar42 = (int)uVar37 - 1;
          uVar37 = (ulonglong)uVar42;
          if (uVar42 == 0) break;
          fVar47 = *pfVar2;
          fVar46 = pfVar2[1];
          fVar48 = pfVar2[2];
          fVar49 = pfVar2[3];
          lVar38 = lVar38 + 1;
        }
        fVar56 = *pfVar1;
        fVar58 = pfVar1[1];
        fVar60 = pfVar1[2];
        fVar62 = pfVar1[3];
      }
      fVar47 = fVar85 * fVar28 + fVar81 * fVar56 + fVar89 * fVar32;
      fVar46 = fVar86 * fVar29 + fVar82 * fVar58 + fVar90 * fVar33;
      fVar48 = fVar87 * fVar30 + fVar83 * fVar60 + fVar91 * fVar34;
      fVar49 = fVar88 * fVar31 + fVar84 * fVar62 + fVar92 * fVar35;
      *pfVar2 = (float)((uint)(*pfVar2 - fVar77 * fVar81) & uVar73 | ~uVar73 & (uint)*pfVar2);
      pfVar2[1] = (float)((uint)(pfVar2[1] - fVar78 * fVar82) & uVar74 | ~uVar74 & (uint)pfVar2[1]);
      pfVar2[2] = (float)((uint)(pfVar2[2] - fVar79 * fVar83) & uVar75 | ~uVar75 & (uint)pfVar2[2]);
      pfVar2[3] = (float)((uint)(pfVar2[3] - fVar80 * fVar84) & uVar76 | ~uVar76 & (uint)pfVar2[3]);
      *pfVar39 = (float)((uint)(fVar50 - fVar77 * fVar85) & uVar73 | ~uVar73 & (uint)fVar50);
      pfVar39[1] = (float)((uint)(fVar51 - fVar78 * fVar86) & uVar74 | ~uVar74 & (uint)fVar51);
      pfVar39[2] = (float)((uint)(fVar52 - fVar79 * fVar87) & uVar75 | ~uVar75 & (uint)fVar52);
      pfVar39[3] = (float)((uint)(fVar53 - fVar80 * fVar88) & uVar76 | ~uVar76 & (uint)fVar53);
      *pfVar5 = (float)((uint)(fVar69 - fVar77 * fVar89) & uVar73 | ~uVar73 & (uint)fVar69);
      pfVar5[1] = (float)((uint)(fVar70 - fVar78 * fVar90) & uVar74 | ~uVar74 & (uint)fVar70);
      pfVar5[2] = (float)((uint)(fVar71 - fVar79 * fVar91) & uVar75 | ~uVar75 & (uint)fVar71);
      pfVar5[3] = (float)((uint)(fVar72 - fVar80 * fVar92) & uVar76 | ~uVar76 & (uint)fVar72);
      *pfVar1 = (float)((uint)(fVar56 - fVar47 * fVar81) & uVar73 | ~uVar73 & (uint)fVar56);
      pfVar1[1] = (float)((uint)(fVar58 - fVar46 * fVar82) & uVar74 | ~uVar74 & (uint)fVar58);
      pfVar1[2] = (float)((uint)(fVar60 - fVar48 * fVar83) & uVar75 | ~uVar75 & (uint)fVar60);
      pfVar1[3] = (float)((uint)(fVar62 - fVar49 * fVar84) & uVar76 | ~uVar76 & (uint)fVar62);
      *puVar3 = (uint)(fVar28 - fVar47 * fVar85) & uVar73 | ~uVar73 & (uint)fVar28;
      puVar3[1] = (uint)(fVar29 - fVar46 * fVar86) & uVar74 | ~uVar74 & (uint)fVar29;
      puVar3[2] = (uint)(fVar30 - fVar48 * fVar87) & uVar75 | ~uVar75 & (uint)fVar30;
      puVar3[3] = (uint)(fVar31 - fVar49 * fVar88) & uVar76 | ~uVar76 & (uint)fVar31;
      *puVar4 = (uint)(fVar32 - fVar47 * fVar89) & uVar73 | ~uVar73 & (uint)fVar32;
      puVar4[1] = (uint)(fVar33 - fVar46 * fVar90) & uVar74 | ~uVar74 & (uint)fVar33;
      puVar4[2] = (uint)(fVar34 - fVar48 * fVar91) & uVar75 | ~uVar75 & (uint)fVar34;
      puVar4[3] = (uint)(fVar35 - fVar49 * fVar92) & uVar76 | ~uVar76 & (uint)fVar35;
    }
  }
  return;
}

