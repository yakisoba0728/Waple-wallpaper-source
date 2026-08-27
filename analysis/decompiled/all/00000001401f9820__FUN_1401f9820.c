// Function: FUN_1401f9820
// Addr: 1401f9820
// Size: 2660 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401f9820(float *param_1,float *param_2,float param_3,uint param_4,longlong param_5,
                  longlong param_6,longlong param_7,longlong param_8,int param_9,int param_10,
                  longlong param_11)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  uint *puVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar44;
  float fVar52;
  float fVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar54;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
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
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  ulonglong uVar31;
  
  fVar32 = DAT_140492704 - param_3;
  if (param_4 != 0) {
    fVar70 = *param_1;
    fVar71 = param_1[1];
    fVar72 = param_1[2];
    fVar73 = param_1[3];
    fVar44 = *param_2;
    fVar52 = param_2[1];
    fVar53 = param_2[2];
    fVar54 = param_2[3];
    uVar29 = (ulonglong)param_4;
    lVar1 = param_8 + (longlong)(int)(param_4 * param_9 * 10) * 4;
    uVar22 = param_4 * 2;
    param_8 = param_8 + (longlong)(int)(param_4 * param_10 * 10) * 4;
    uVar19 = param_4 * 5;
    uVar20 = param_4 * 3;
    uVar30 = (ulonglong)uVar20;
    uVar26 = param_4 * 4;
    uVar23 = param_4 * 6;
    fVar33 = _DAT_140492e30 * fVar32;
    fVar39 = _UNK_140492e34 * fVar32;
    fVar41 = _UNK_140492e38 * fVar32;
    fVar43 = _UNK_140492e3c * fVar32;
    uVar28 = param_4 * 7;
    uVar31 = (ulonglong)uVar28;
    fVar34 = fVar32 * 0.0;
    fVar40 = fVar32 * 0.0;
    fVar42 = fVar32 * 0.0;
    fVar32 = fVar32 * 0.0;
    uVar24 = param_4 * 8;
    uVar21 = param_4 * 9;
    uVar27 = 0;
    do {
      lVar25 = (longlong)(int)uVar27;
      auVar51 = *(undefined1 (*) [16])(param_7 + lVar25 * 4);
      pfVar2 = (float *)((longlong)(int)param_4 * 4 + param_8 + lVar25 * 4);
      pfVar3 = (float *)(lVar1 + lVar25 * 4);
      pfVar4 = (float *)(lVar1 + (longlong)(int)param_4 * 4 + lVar25 * 4);
      auVar45 = *(undefined1 (*) [16])(param_5 + lVar25 * 4);
      auVar64 = *(undefined1 (*) [16])(param_5 + uVar29 * 4 + lVar25 * 4);
      auVar65 = *(undefined1 (*) [16])(param_5 + (ulonglong)uVar22 * 4 + lVar25 * 4);
      pfVar5 = (float *)(param_6 + uVar29 * 4 + lVar25 * 4);
      pfVar6 = (float *)(lVar1 + (longlong)(int)uVar22 * 4 + lVar25 * 4);
      pfVar7 = (float *)((longlong)(int)uVar22 * 4 + param_8 + lVar25 * 4);
      pfVar13 = (float *)(param_8 + lVar25 * 4);
      pfVar8 = (float *)(param_6 + (ulonglong)uVar22 * 4 + lVar25 * 4);
      auVar36._4_4_ =
           ((fVar52 * pfVar4[1] + fVar71 * pfVar2[1]) - pfVar5[1]) * param_3 + auVar64._4_4_;
      auVar36._0_4_ = ((fVar44 * *pfVar4 + fVar70 * *pfVar2) - *pfVar5) * param_3 + auVar64._0_4_;
      auVar36._8_4_ =
           ((fVar53 * pfVar4[2] + fVar72 * pfVar2[2]) - pfVar5[2]) * param_3 + auVar64._8_4_;
      auVar36._12_4_ =
           ((fVar54 * pfVar4[3] + fVar73 * pfVar2[3]) - pfVar5[3]) * param_3 + auVar64._12_4_;
      auVar63 = blendvps(auVar64,auVar36,auVar51);
      pfVar2 = (float *)(param_6 + lVar25 * 4);
      auVar64._4_4_ =
           ((fVar52 * pfVar6[1] + fVar71 * pfVar7[1]) - pfVar8[1]) * param_3 + auVar65._4_4_;
      auVar64._0_4_ = ((fVar44 * *pfVar6 + fVar70 * *pfVar7) - *pfVar8) * param_3 + auVar65._0_4_;
      auVar64._8_4_ =
           ((fVar53 * pfVar6[2] + fVar72 * pfVar7[2]) - pfVar8[2]) * param_3 + auVar65._8_4_;
      auVar64._12_4_ =
           ((fVar54 * pfVar6[3] + fVar73 * pfVar7[3]) - pfVar8[3]) * param_3 + auVar65._12_4_;
      auVar64 = blendvps(auVar65,auVar64,auVar51);
      auVar65._0_4_ = ((fVar44 * *pfVar3 + fVar70 * *pfVar13) - *pfVar2) * param_3 + auVar45._0_4_;
      auVar65._4_4_ =
           ((fVar52 * pfVar3[1] + fVar71 * pfVar13[1]) - pfVar2[1]) * param_3 + auVar45._4_4_;
      auVar65._8_4_ =
           ((fVar53 * pfVar3[2] + fVar72 * pfVar13[2]) - pfVar2[2]) * param_3 + auVar45._8_4_;
      auVar65._12_4_ =
           ((fVar54 * pfVar3[3] + fVar73 * pfVar13[3]) - pfVar2[3]) * param_3 + auVar45._12_4_;
      auVar45 = blendvps(auVar45,auVar65,auVar51);
      *(undefined1 (*) [16])(param_11 + lVar25 * 4) = auVar45;
      *(undefined1 (*) [16])(param_11 + uVar29 * 4 + lVar25 * 4) = auVar63;
      *(undefined1 (*) [16])(param_11 + (ulonglong)uVar22 * 4 + lVar25 * 4) = auVar64;
      auVar45 = *(undefined1 (*) [16])(param_5 + uVar30 * 4 + lVar25 * 4);
      fVar14 = auVar45._0_4_;
      fVar15 = auVar45._4_4_;
      fVar16 = auVar45._8_4_;
      fVar17 = auVar45._12_4_;
      pauVar9 = (undefined1 (*) [16])(param_5 + (ulonglong)uVar26 * 4 + lVar25 * 4);
      auVar64 = *pauVar9;
      pauVar10 = (undefined1 (*) [16])(param_5 + (ulonglong)uVar19 * 4 + lVar25 * 4);
      auVar65 = *pauVar10;
      pauVar11 = (undefined1 (*) [16])(param_5 + (ulonglong)uVar23 * 4 + lVar25 * 4);
      auVar63 = *pauVar11;
      pfVar2 = (float *)(param_6 + uVar30 * 4 + lVar25 * 4);
      fVar70 = *pfVar2;
      fVar71 = pfVar2[1];
      fVar72 = pfVar2[2];
      fVar73 = pfVar2[3];
      pfVar2 = (float *)(lVar1 + (longlong)(int)uVar20 * 4 + lVar25 * 4);
      pfVar3 = (float *)(lVar1 + (longlong)(int)uVar26 * 4 + lVar25 * 4);
      pfVar4 = (float *)(lVar1 + (longlong)(int)uVar19 * 4 + lVar25 * 4);
      pfVar5 = (float *)(lVar1 + (longlong)(int)uVar23 * 4 + lVar25 * 4);
      pfVar6 = (float *)((longlong)(int)uVar20 * 4 + param_8 + lVar25 * 4);
      pfVar7 = (float *)((longlong)(int)uVar26 * 4 + param_8 + lVar25 * 4);
      pfVar8 = (float *)((longlong)(int)uVar19 * 4 + param_8 + lVar25 * 4);
      pfVar13 = (float *)((longlong)(int)uVar23 * 4 + param_8 + lVar25 * 4);
      fVar90 = (float)((uint)(*pfVar13 * *pfVar5 + *pfVar8 * *pfVar4 +
                             *pfVar7 * *pfVar3 + *pfVar6 * *pfVar2) & _DAT_140483730 ^
                      (uint)*param_1);
      fVar92 = (float)((uint)(pfVar13[1] * pfVar5[1] + pfVar8[1] * pfVar4[1] +
                             pfVar7[1] * pfVar3[1] + pfVar6[1] * pfVar2[1]) & _UNK_140483734 ^
                      (uint)param_1[1]);
      fVar94 = (float)((uint)(pfVar13[2] * pfVar5[2] + pfVar8[2] * pfVar4[2] +
                             pfVar7[2] * pfVar3[2] + pfVar6[2] * pfVar2[2]) & _UNK_140483738 ^
                      (uint)param_1[2]);
      fVar96 = (float)((uint)(pfVar13[3] * pfVar5[3] + pfVar8[3] * pfVar4[3] +
                             pfVar7[3] * pfVar3[3] + pfVar6[3] * pfVar2[3]) & _UNK_14048373c ^
                      (uint)param_1[3]);
      fVar86 = fVar44 * *pfVar2 + fVar90 * *pfVar6;
      fVar87 = fVar52 * pfVar2[1] + fVar92 * pfVar6[1];
      fVar88 = fVar53 * pfVar2[2] + fVar94 * pfVar6[2];
      fVar89 = fVar54 * pfVar2[3] + fVar96 * pfVar6[3];
      fVar78 = fVar44 * *pfVar3 + fVar90 * *pfVar7;
      fVar80 = fVar52 * pfVar3[1] + fVar92 * pfVar7[1];
      fVar82 = fVar53 * pfVar3[2] + fVar94 * pfVar7[2];
      fVar84 = fVar54 * pfVar3[3] + fVar96 * pfVar7[3];
      fVar55 = fVar44 * *pfVar4 + fVar90 * *pfVar8;
      fVar56 = fVar52 * pfVar4[1] + fVar92 * pfVar8[1];
      fVar57 = fVar53 * pfVar4[2] + fVar94 * pfVar8[2];
      fVar58 = fVar54 * pfVar4[3] + fVar96 * pfVar8[3];
      fVar91 = fVar90 * *pfVar13 + fVar44 * *pfVar5;
      fVar93 = fVar92 * pfVar13[1] + fVar52 * pfVar5[1];
      fVar95 = fVar94 * pfVar13[2] + fVar53 * pfVar5[2];
      fVar97 = fVar96 * pfVar13[3] + fVar54 * pfVar5[3];
      auVar35._0_4_ = fVar78 * fVar78 + fVar86 * fVar86;
      auVar35._4_4_ = fVar80 * fVar80 + fVar87 * fVar87;
      auVar35._8_4_ = fVar82 * fVar82 + fVar88 * fVar88;
      auVar35._12_4_ = fVar84 * fVar84 + fVar89 * fVar89;
      auVar46._0_4_ = fVar91 * fVar91 + fVar55 * fVar55 + auVar35._0_4_;
      auVar46._4_4_ = fVar93 * fVar93 + fVar56 * fVar56 + auVar35._4_4_;
      auVar46._8_4_ = fVar95 * fVar95 + fVar57 * fVar57 + auVar35._8_4_;
      auVar46._12_4_ = fVar97 * fVar97 + fVar58 * fVar58 + auVar35._12_4_;
      auVar36 = rsqrtps(auVar35,auVar46);
      fVar44 = auVar36._0_4_;
      fVar52 = auVar36._4_4_;
      fVar53 = auVar36._8_4_;
      fVar54 = auVar36._12_4_;
      fVar74 = (_DAT_1404837a0 - fVar44 * fVar44 * auVar46._0_4_) * fVar44 * _DAT_140483740;
      fVar75 = (_UNK_1404837a4 - fVar52 * fVar52 * auVar46._4_4_) * fVar52 * _UNK_140483744;
      fVar76 = (_UNK_1404837a8 - fVar53 * fVar53 * auVar46._8_4_) * fVar53 * _UNK_140483748;
      fVar77 = (_UNK_1404837ac - fVar54 * fVar54 * auVar46._12_4_) * fVar54 * _UNK_14048374c;
      fVar78 = fVar74 * fVar78;
      fVar80 = fVar75 * fVar80;
      fVar82 = fVar76 * fVar82;
      fVar84 = fVar77 * fVar84;
      fVar55 = fVar74 * fVar55;
      fVar56 = fVar75 * fVar56;
      fVar57 = fVar76 * fVar57;
      fVar58 = fVar77 * fVar58;
      puVar12 = (uint *)(param_6 + (ulonglong)uVar26 * 4 + lVar25 * 4);
      fVar90 = (float)(DAT_140492ff0 ^ *puVar12);
      fVar92 = (float)(_UNK_140492ff4 ^ puVar12[1]);
      fVar94 = (float)(_UNK_140492ff8 ^ puVar12[2]);
      fVar96 = (float)(_UNK_140492ffc ^ puVar12[3]);
      fVar86 = fVar74 * fVar86;
      fVar87 = fVar75 * fVar87;
      fVar88 = fVar76 * fVar88;
      fVar89 = fVar77 * fVar89;
      puVar12 = (uint *)(param_6 + (ulonglong)uVar19 * 4 + lVar25 * 4);
      fVar59 = (float)(DAT_140492ff0 ^ *puVar12);
      fVar60 = (float)(_UNK_140492ff4 ^ puVar12[1]);
      fVar61 = (float)(_UNK_140492ff8 ^ puVar12[2]);
      fVar62 = (float)(_UNK_140492ffc ^ puVar12[3]);
      fVar74 = fVar74 * fVar91;
      fVar75 = fVar75 * fVar93;
      fVar76 = fVar76 * fVar95;
      fVar77 = fVar77 * fVar97;
      puVar12 = (uint *)(param_6 + (ulonglong)uVar23 * 4 + lVar25 * 4);
      fVar44 = (float)(DAT_140492ff0 ^ *puVar12);
      fVar52 = (float)(_UNK_140492ff4 ^ puVar12[1]);
      fVar53 = (float)(_UNK_140492ff8 ^ puVar12[2]);
      fVar54 = (float)(_UNK_140492ffc ^ puVar12[3]);
      fVar79 = ((fVar86 * fVar70 - fVar78 * fVar90) - fVar55 * fVar59) - fVar74 * fVar44;
      fVar81 = ((fVar87 * fVar71 - fVar80 * fVar92) - fVar56 * fVar60) - fVar75 * fVar52;
      fVar83 = ((fVar88 * fVar72 - fVar82 * fVar94) - fVar57 * fVar61) - fVar76 * fVar53;
      fVar85 = ((fVar89 * fVar73 - fVar84 * fVar96) - fVar58 * fVar62) - fVar77 * fVar54;
      fVar66 = (fVar86 * fVar90 + fVar78 * fVar70 + fVar74 * fVar59) - fVar55 * fVar44;
      fVar67 = (fVar87 * fVar92 + fVar80 * fVar71 + fVar75 * fVar60) - fVar56 * fVar52;
      fVar68 = (fVar88 * fVar94 + fVar82 * fVar72 + fVar76 * fVar61) - fVar57 * fVar53;
      fVar69 = (fVar89 * fVar96 + fVar84 * fVar73 + fVar77 * fVar62) - fVar58 * fVar54;
      fVar91 = (fVar86 * fVar59 + fVar55 * fVar70 + fVar78 * fVar44) - fVar74 * fVar90;
      fVar93 = (fVar87 * fVar60 + fVar56 * fVar71 + fVar80 * fVar52) - fVar75 * fVar92;
      fVar95 = (fVar88 * fVar61 + fVar57 * fVar72 + fVar82 * fVar53) - fVar76 * fVar94;
      fVar97 = (fVar89 * fVar62 + fVar58 * fVar73 + fVar84 * fVar54) - fVar77 * fVar96;
      fVar44 = (fVar86 * fVar44 + fVar74 * fVar70 + fVar55 * fVar90) - fVar78 * fVar59;
      fVar52 = (fVar87 * fVar52 + fVar75 * fVar71 + fVar56 * fVar92) - fVar80 * fVar60;
      fVar53 = (fVar88 * fVar53 + fVar76 * fVar72 + fVar57 * fVar94) - fVar82 * fVar61;
      fVar54 = (fVar89 * fVar54 + fVar77 * fVar73 + fVar58 * fVar96) - fVar84 * fVar62;
      fVar70 = (float)((uint)(fVar91 * 0.0 + fVar44 * 0.0 + fVar66 * 0.0 + fVar79 * _DAT_140492e30)
                       & _DAT_140483730 ^ (uint)param_3);
      fVar71 = (float)((uint)(fVar93 * 0.0 + fVar52 * 0.0 + fVar67 * 0.0 + fVar81 * _UNK_140492e34)
                       & _UNK_140483734 ^ (uint)param_3);
      fVar72 = (float)((uint)(fVar95 * 0.0 + fVar53 * 0.0 + fVar68 * 0.0 + fVar83 * _UNK_140492e38)
                       & _UNK_140483738 ^ (uint)param_3);
      fVar73 = (float)((uint)(fVar97 * 0.0 + fVar54 * 0.0 + fVar69 * 0.0 + fVar85 * _UNK_140492e3c)
                       & _UNK_14048373c ^ (uint)param_3);
      fVar60 = fVar70 * fVar91 + fVar34;
      fVar61 = fVar71 * fVar93 + fVar40;
      fVar62 = fVar72 * fVar95 + fVar42;
      fVar91 = fVar73 * fVar97 + fVar32;
      fVar93 = fVar70 * fVar66 + fVar34;
      fVar95 = fVar71 * fVar67 + fVar40;
      fVar97 = fVar72 * fVar68 + fVar42;
      fVar66 = fVar73 * fVar69 + fVar32;
      fVar67 = fVar70 * fVar79 + fVar33;
      fVar68 = fVar71 * fVar81 + fVar39;
      fVar69 = fVar72 * fVar83 + fVar41;
      fVar78 = fVar73 * fVar85 + fVar43;
      fVar44 = fVar70 * fVar44 + fVar34;
      fVar52 = fVar71 * fVar52 + fVar40;
      fVar53 = fVar72 * fVar53 + fVar42;
      fVar54 = fVar73 * fVar54 + fVar32;
      auVar37._0_4_ = fVar93 * fVar93 + fVar67 * fVar67;
      auVar37._4_4_ = fVar95 * fVar95 + fVar68 * fVar68;
      auVar37._8_4_ = fVar97 * fVar97 + fVar69 * fVar69;
      auVar37._12_4_ = fVar66 * fVar66 + fVar78 * fVar78;
      auVar47._0_4_ = fVar44 * fVar44 + fVar60 * fVar60 + auVar37._0_4_;
      auVar47._4_4_ = fVar52 * fVar52 + fVar61 * fVar61 + auVar37._4_4_;
      auVar47._8_4_ = fVar53 * fVar53 + fVar62 * fVar62 + auVar37._8_4_;
      auVar47._12_4_ = fVar54 * fVar54 + fVar91 * fVar91 + auVar37._12_4_;
      auVar36 = rsqrtps(auVar37,auVar47);
      fVar70 = auVar36._0_4_;
      fVar71 = auVar36._4_4_;
      fVar72 = auVar36._8_4_;
      fVar73 = auVar36._12_4_;
      fVar80 = (_DAT_1404837a0 - fVar70 * fVar70 * auVar47._0_4_) * fVar70 * _DAT_140483740;
      fVar82 = (_UNK_1404837a4 - fVar71 * fVar71 * auVar47._4_4_) * fVar71 * _UNK_140483744;
      fVar84 = (_UNK_1404837a8 - fVar72 * fVar72 * auVar47._8_4_) * fVar72 * _UNK_140483748;
      fVar74 = (_UNK_1404837ac - fVar73 * fVar73 * auVar47._12_4_) * fVar73 * _UNK_14048374c;
      fVar67 = fVar80 * fVar67;
      fVar68 = fVar82 * fVar68;
      fVar69 = fVar84 * fVar69;
      fVar78 = fVar74 * fVar78;
      fVar93 = fVar80 * fVar93;
      fVar95 = fVar82 * fVar95;
      fVar97 = fVar84 * fVar97;
      fVar66 = fVar74 * fVar66;
      fVar60 = fVar80 * fVar60;
      fVar61 = fVar82 * fVar61;
      fVar62 = fVar84 * fVar62;
      fVar91 = fVar74 * fVar91;
      fVar55 = (float)*(undefined8 *)*pauVar9;
      fVar56 = (float)((ulonglong)*(undefined8 *)*pauVar9 >> 0x20);
      fVar57 = (float)*(undefined8 *)(*pauVar9 + 8);
      fVar58 = (float)((ulonglong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
      fVar80 = fVar80 * fVar44;
      fVar82 = fVar82 * fVar52;
      fVar84 = fVar84 * fVar53;
      fVar74 = fVar74 * fVar54;
      fVar90 = (float)*(undefined8 *)*pauVar10;
      fVar92 = (float)((ulonglong)*(undefined8 *)*pauVar10 >> 0x20);
      fVar94 = (float)*(undefined8 *)(*pauVar10 + 8);
      fVar96 = (float)((ulonglong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
      fVar59 = (float)((ulonglong)*(undefined8 *)(*pauVar11 + 8) >> 0x20);
      fVar44 = *param_2;
      fVar52 = param_2[1];
      fVar53 = param_2[2];
      fVar54 = param_2[3];
      fVar75 = (float)*(undefined8 *)*pauVar11;
      fVar76 = (float)((ulonglong)*(undefined8 *)*pauVar11 >> 0x20);
      fVar77 = (float)*(undefined8 *)(*pauVar11 + 8);
      auVar48._0_4_ = ((fVar67 * fVar14 - fVar93 * fVar55) - fVar60 * fVar90) - fVar80 * fVar75;
      auVar48._4_4_ = ((fVar68 * fVar15 - fVar95 * fVar56) - fVar61 * fVar92) - fVar82 * fVar76;
      auVar48._8_4_ = ((fVar69 * fVar16 - fVar97 * fVar57) - fVar62 * fVar94) - fVar84 * fVar77;
      auVar48._12_4_ = ((fVar78 * fVar17 - fVar66 * fVar58) - fVar91 * fVar96) - fVar74 * fVar59;
      auVar45 = blendvps(auVar45,auVar48,auVar51);
      *(undefined1 (*) [16])(param_11 + uVar30 * 4 + lVar25 * 4) = auVar45;
      auVar49._0_4_ = (fVar67 * fVar55 + fVar93 * fVar14 + fVar80 * fVar90) - fVar60 * fVar75;
      auVar49._4_4_ = (fVar68 * fVar56 + fVar95 * fVar15 + fVar82 * fVar92) - fVar61 * fVar76;
      auVar49._8_4_ = (fVar69 * fVar57 + fVar97 * fVar16 + fVar84 * fVar94) - fVar62 * fVar77;
      auVar49._12_4_ = (fVar78 * fVar58 + fVar66 * fVar17 + fVar74 * fVar96) - fVar91 * fVar59;
      auVar45 = blendvps(auVar64,auVar49,auVar51);
      *(undefined1 (*) [16])(param_11 + (ulonglong)uVar26 * 4 + lVar25 * 4) = auVar45;
      fVar70 = *param_1;
      fVar71 = param_1[1];
      fVar72 = param_1[2];
      fVar73 = param_1[3];
      auVar50._0_4_ = (fVar67 * fVar90 + fVar60 * fVar14 + fVar93 * fVar75) - fVar80 * fVar55;
      auVar50._4_4_ = (fVar68 * fVar92 + fVar61 * fVar15 + fVar95 * fVar76) - fVar82 * fVar56;
      auVar50._8_4_ = (fVar69 * fVar94 + fVar62 * fVar16 + fVar97 * fVar77) - fVar84 * fVar57;
      auVar50._12_4_ = (fVar78 * fVar96 + fVar91 * fVar17 + fVar66 * fVar59) - fVar74 * fVar58;
      auVar45 = blendvps(auVar65,auVar50,auVar51);
      *(undefined1 (*) [16])(param_11 + (ulonglong)uVar19 * 4 + lVar25 * 4) = auVar45;
      auVar45._4_4_ = (fVar68 * fVar76 + fVar82 * fVar15 + fVar61 * fVar56) - fVar95 * fVar92;
      auVar45._0_4_ = (fVar67 * fVar75 + fVar80 * fVar14 + fVar60 * fVar55) - fVar93 * fVar90;
      auVar45._8_4_ = (fVar69 * fVar77 + fVar84 * fVar16 + fVar62 * fVar57) - fVar97 * fVar94;
      auVar45._12_4_ = (fVar78 * fVar59 + fVar74 * fVar17 + fVar91 * fVar58) - fVar66 * fVar96;
      auVar45 = blendvps(auVar63,auVar45,auVar51);
      *(undefined1 (*) [16])(param_11 + (ulonglong)uVar23 * 4 + lVar25 * 4) = auVar45;
      auVar45 = *(undefined1 (*) [16])(param_5 + uVar31 * 4 + lVar25 * 4);
      auVar64 = *(undefined1 (*) [16])(param_5 + (ulonglong)uVar24 * 4 + lVar25 * 4);
      auVar65 = *(undefined1 (*) [16])(param_5 + (ulonglong)uVar21 * 4 + lVar25 * 4);
      pfVar2 = (float *)(lVar1 + (longlong)(int)uVar24 * 4 + lVar25 * 4);
      pfVar3 = (float *)((longlong)(int)uVar24 * 4 + param_8 + lVar25 * 4);
      pfVar4 = (float *)(param_6 + (ulonglong)uVar24 * 4 + lVar25 * 4);
      pfVar5 = (float *)(lVar1 + (longlong)(int)uVar21 * 4 + lVar25 * 4);
      pfVar6 = (float *)((longlong)(int)uVar21 * 4 + param_8 + lVar25 * 4);
      pfVar7 = (float *)(param_6 + (ulonglong)uVar21 * 4 + lVar25 * 4);
      pfVar8 = (float *)(lVar1 + (longlong)(int)uVar28 * 4 + lVar25 * 4);
      uVar27 = uVar27 + 4;
      pfVar13 = (float *)((longlong)(int)uVar28 * 4 + param_8 + lVar25 * 4);
      auVar18._4_4_ =
           ((fVar52 * pfVar2[1] + fVar71 * pfVar3[1]) - pfVar4[1]) * param_3 + auVar64._4_4_;
      auVar18._0_4_ = ((fVar44 * *pfVar2 + fVar70 * *pfVar3) - *pfVar4) * param_3 + auVar64._0_4_;
      auVar18._8_4_ =
           ((fVar53 * pfVar2[2] + fVar72 * pfVar3[2]) - pfVar4[2]) * param_3 + auVar64._8_4_;
      auVar18._12_4_ =
           ((fVar54 * pfVar2[3] + fVar73 * pfVar3[3]) - pfVar4[3]) * param_3 + auVar64._12_4_;
      auVar64 = blendvps(auVar64,auVar18,auVar51);
      auVar63._4_4_ =
           ((fVar52 * pfVar5[1] + fVar71 * pfVar6[1]) - pfVar7[1]) * param_3 + auVar65._4_4_;
      auVar63._0_4_ = ((fVar44 * *pfVar5 + fVar70 * *pfVar6) - *pfVar7) * param_3 + auVar65._0_4_;
      auVar63._8_4_ =
           ((fVar53 * pfVar5[2] + fVar72 * pfVar6[2]) - pfVar7[2]) * param_3 + auVar65._8_4_;
      auVar63._12_4_ =
           ((fVar54 * pfVar5[3] + fVar73 * pfVar6[3]) - pfVar7[3]) * param_3 + auVar65._12_4_;
      auVar65 = blendvps(auVar65,auVar63,auVar51);
      pfVar2 = (float *)(param_6 + uVar31 * 4 + lVar25 * 4);
      auVar38._0_4_ = ((fVar44 * *pfVar8 + fVar70 * *pfVar13) - *pfVar2) * param_3 + auVar45._0_4_;
      auVar38._4_4_ =
           ((fVar52 * pfVar8[1] + fVar71 * pfVar13[1]) - pfVar2[1]) * param_3 + auVar45._4_4_;
      auVar38._8_4_ =
           ((fVar53 * pfVar8[2] + fVar72 * pfVar13[2]) - pfVar2[2]) * param_3 + auVar45._8_4_;
      auVar38._12_4_ =
           ((fVar54 * pfVar8[3] + fVar73 * pfVar13[3]) - pfVar2[3]) * param_3 + auVar45._12_4_;
      auVar51 = blendvps(auVar45,auVar38,auVar51);
      *(undefined1 (*) [16])(param_11 + uVar31 * 4 + lVar25 * 4) = auVar51;
      *(undefined1 (*) [16])(param_11 + (ulonglong)uVar24 * 4 + lVar25 * 4) = auVar64;
      *(undefined1 (*) [16])(param_11 + (ulonglong)uVar21 * 4 + lVar25 * 4) = auVar65;
    } while (uVar27 < param_4);
  }
  return;
}

