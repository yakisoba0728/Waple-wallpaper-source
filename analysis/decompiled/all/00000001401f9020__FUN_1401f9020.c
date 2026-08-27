// Function: FUN_1401f9020
// Addr: 1401f9020
// Size: 2038 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401f9020(float *param_1,float *param_2,float param_3,uint param_4,longlong param_5,
                  longlong param_6,longlong param_7,int param_8,int param_9,longlong param_10)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
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
  
  fVar61 = DAT_140492704 - param_3;
  if (param_4 != 0) {
    fVar52 = *param_1;
    fVar53 = param_1[1];
    fVar54 = param_1[2];
    fVar55 = param_1[3];
    fVar48 = *param_2;
    fVar34 = param_2[1];
    fVar35 = param_2[2];
    fVar36 = param_2[3];
    lVar1 = param_7 + (longlong)(int)(param_4 * param_8 * 10) * 4;
    uVar16 = param_4 * 2;
    param_7 = param_7 + (longlong)(int)(param_4 * param_9 * 10) * 4;
    uVar13 = param_4 * 5;
    uVar14 = param_4 * 3;
    uVar21 = param_4 * 4;
    uVar17 = param_4 * 6;
    uVar22 = param_4 * 7;
    uVar18 = param_4 * 8;
    uVar15 = param_4 * 9;
    uVar20 = 0;
    do {
      lVar19 = (longlong)(int)uVar20;
      auVar47 = *(undefined1 (*) [16])(param_6 + lVar19 * 4);
      pfVar2 = (float *)(param_7 + (longlong)(int)param_4 * 4 + lVar19 * 4);
      fVar37 = *pfVar2;
      fVar40 = pfVar2[1];
      fVar42 = pfVar2[2];
      fVar44 = pfVar2[3];
      pfVar2 = (float *)(lVar1 + lVar19 * 4);
      pfVar3 = (float *)(lVar1 + (longlong)(int)param_4 * 4 + lVar19 * 4);
      fVar41 = *pfVar3;
      fVar43 = pfVar3[1];
      fVar45 = pfVar3[2];
      fVar46 = pfVar3[3];
      pfVar3 = (float *)(lVar1 + (longlong)(int)uVar16 * 4 + lVar19 * 4);
      fVar56 = *pfVar3;
      fVar62 = pfVar3[1];
      fVar63 = pfVar3[2];
      fVar64 = pfVar3[3];
      auVar38 = *(undefined1 (*) [16])(param_5 + lVar19 * 4);
      auVar24 = *(undefined1 (*) [16])(param_5 + (ulonglong)param_4 * 4 + lVar19 * 4);
      auVar26 = *(undefined1 (*) [16])(param_5 + (ulonglong)uVar16 * 4 + lVar19 * 4);
      pfVar3 = (float *)(param_7 + (longlong)(int)uVar16 * 4 + lVar19 * 4);
      fVar65 = *pfVar3;
      fVar66 = pfVar3[1];
      fVar67 = pfVar3[2];
      fVar68 = pfVar3[3];
      pfVar3 = (float *)(param_7 + lVar19 * 4);
      auVar23._0_4_ = (fVar48 * *pfVar2 + fVar52 * *pfVar3) * param_3 + auVar38._0_4_ * fVar61;
      auVar23._4_4_ = (fVar34 * pfVar2[1] + fVar53 * pfVar3[1]) * param_3 + auVar38._4_4_ * fVar61;
      auVar23._8_4_ = (fVar35 * pfVar2[2] + fVar54 * pfVar3[2]) * param_3 + auVar38._8_4_ * fVar61;
      auVar23._12_4_ = (fVar36 * pfVar2[3] + fVar55 * pfVar3[3]) * param_3 + auVar38._12_4_ * fVar61
      ;
      auVar38 = blendvps(auVar38,auVar23,auVar47);
      *(undefined1 (*) [16])(param_10 + lVar19 * 4) = auVar38;
      auVar38._0_4_ = auVar24._0_4_ * fVar61 + (fVar48 * fVar41 + fVar52 * fVar37) * param_3;
      auVar38._4_4_ = auVar24._4_4_ * fVar61 + (fVar34 * fVar43 + fVar53 * fVar40) * param_3;
      auVar38._8_4_ = auVar24._8_4_ * fVar61 + (fVar35 * fVar45 + fVar54 * fVar42) * param_3;
      auVar38._12_4_ = auVar24._12_4_ * fVar61 + (fVar36 * fVar46 + fVar55 * fVar44) * param_3;
      auVar38 = blendvps(auVar24,auVar38,auVar47);
      *(undefined1 (*) [16])(param_10 + (ulonglong)param_4 * 4 + lVar19 * 4) = auVar38;
      auVar24._0_4_ = auVar26._0_4_ * fVar61 + (fVar48 * fVar56 + fVar52 * fVar65) * param_3;
      auVar24._4_4_ = auVar26._4_4_ * fVar61 + (fVar34 * fVar62 + fVar53 * fVar66) * param_3;
      auVar24._8_4_ = auVar26._8_4_ * fVar61 + (fVar35 * fVar63 + fVar54 * fVar67) * param_3;
      auVar24._12_4_ = auVar26._12_4_ * fVar61 + (fVar36 * fVar64 + fVar55 * fVar68) * param_3;
      auVar38 = blendvps(auVar26,auVar24,auVar47);
      *(undefined1 (*) [16])(param_10 + (ulonglong)uVar16 * 4 + lVar19 * 4) = auVar38;
      auVar38 = *(undefined1 (*) [16])(param_5 + (ulonglong)uVar14 * 4 + lVar19 * 4);
      auVar24 = *(undefined1 (*) [16])(param_5 + (ulonglong)uVar21 * 4 + lVar19 * 4);
      pauVar4 = (undefined1 (*) [16])(param_5 + (ulonglong)uVar13 * 4 + lVar19 * 4);
      auVar23 = *pauVar4;
      pauVar5 = (undefined1 (*) [16])(param_5 + (ulonglong)uVar17 * 4 + lVar19 * 4);
      auVar31 = *pauVar5;
      pfVar2 = (float *)(lVar1 + (longlong)(int)uVar14 * 4 + lVar19 * 4);
      pfVar3 = (float *)(lVar1 + (longlong)(int)uVar21 * 4 + lVar19 * 4);
      pfVar6 = (float *)(lVar1 + (longlong)(int)uVar13 * 4 + lVar19 * 4);
      pfVar7 = (float *)(lVar1 + (longlong)(int)uVar17 * 4 + lVar19 * 4);
      pfVar8 = (float *)(param_7 + (longlong)(int)uVar14 * 4 + lVar19 * 4);
      pfVar9 = (float *)(param_7 + (longlong)(int)uVar21 * 4 + lVar19 * 4);
      pfVar10 = (float *)(param_7 + (longlong)(int)uVar13 * 4 + lVar19 * 4);
      pfVar11 = (float *)(param_7 + (longlong)(int)uVar17 * 4 + lVar19 * 4);
      fVar52 = (float)((uint)(*pfVar11 * *pfVar7 + *pfVar10 * *pfVar6 +
                             *pfVar9 * *pfVar3 + *pfVar8 * *pfVar2) & _DAT_140483730 ^
                      (uint)*param_1);
      fVar53 = (float)((uint)(pfVar11[1] * pfVar7[1] + pfVar10[1] * pfVar6[1] +
                             pfVar9[1] * pfVar3[1] + pfVar8[1] * pfVar2[1]) & _UNK_140483734 ^
                      (uint)param_1[1]);
      fVar54 = (float)((uint)(pfVar11[2] * pfVar7[2] + pfVar10[2] * pfVar6[2] +
                             pfVar9[2] * pfVar3[2] + pfVar8[2] * pfVar2[2]) & _UNK_140483738 ^
                      (uint)param_1[2]);
      fVar55 = (float)((uint)(pfVar11[3] * pfVar7[3] + pfVar10[3] * pfVar6[3] +
                             pfVar9[3] * pfVar3[3] + pfVar8[3] * pfVar2[3]) & _UNK_14048373c ^
                      (uint)param_1[3]);
      fVar66 = fVar48 * *pfVar2 + fVar52 * *pfVar8;
      fVar67 = fVar34 * pfVar2[1] + fVar53 * pfVar8[1];
      fVar68 = fVar35 * pfVar2[2] + fVar54 * pfVar8[2];
      fVar69 = fVar36 * pfVar2[3] + fVar55 * pfVar8[3];
      fVar62 = fVar48 * *pfVar3 + fVar52 * *pfVar9;
      fVar63 = fVar34 * pfVar3[1] + fVar53 * pfVar9[1];
      fVar64 = fVar35 * pfVar3[2] + fVar54 * pfVar9[2];
      fVar65 = fVar36 * pfVar3[3] + fVar55 * pfVar9[3];
      fVar56 = fVar48 * *pfVar6 + fVar52 * *pfVar10;
      fVar57 = fVar34 * pfVar6[1] + fVar53 * pfVar10[1];
      fVar58 = fVar35 * pfVar6[2] + fVar54 * pfVar10[2];
      fVar60 = fVar36 * pfVar6[3] + fVar55 * pfVar10[3];
      fVar40 = *param_2 * *pfVar7 + fVar52 * *pfVar11;
      fVar42 = param_2[1] * pfVar7[1] + fVar53 * pfVar11[1];
      fVar44 = param_2[2] * pfVar7[2] + fVar54 * pfVar11[2];
      fVar46 = param_2[3] * pfVar7[3] + fVar55 * pfVar11[3];
      fVar52 = (float)((ulonglong)*(undefined8 *)(*pauVar4 + 8) >> 0x20);
      auVar25._0_4_ = fVar62 * fVar62 + fVar66 * fVar66;
      auVar25._4_4_ = fVar63 * fVar63 + fVar67 * fVar67;
      auVar25._8_4_ = fVar64 * fVar64 + fVar68 * fVar68;
      auVar25._12_4_ = fVar65 * fVar65 + fVar69 * fVar69;
      fVar34 = fVar40 * fVar40 + fVar56 * fVar56 + auVar25._0_4_;
      fVar35 = fVar42 * fVar42 + fVar57 * fVar57 + auVar25._4_4_;
      fVar36 = fVar44 * fVar44 + fVar58 * fVar58 + auVar25._8_4_;
      fVar37 = fVar46 * fVar46 + fVar60 * fVar60 + auVar25._12_4_;
      auVar26._4_4_ = fVar35;
      auVar26._0_4_ = fVar34;
      auVar26._8_4_ = fVar36;
      auVar26._12_4_ = fVar37;
      auVar26 = rsqrtps(auVar25,auVar26);
      fVar53 = auVar26._0_4_;
      fVar54 = auVar26._4_4_;
      fVar55 = auVar26._8_4_;
      fVar48 = auVar26._12_4_;
      fVar34 = (_DAT_1404837a0 - fVar53 * fVar53 * fVar34) * fVar53 * _DAT_140483740;
      fVar54 = (_UNK_1404837a4 - fVar54 * fVar54 * fVar35) * fVar54 * _UNK_140483744;
      fVar55 = (_UNK_1404837a8 - fVar55 * fVar55 * fVar36) * fVar55 * _UNK_140483748;
      fVar48 = (_UNK_1404837ac - fVar48 * fVar48 * fVar37) * fVar48 * _UNK_14048374c;
      fVar53 = (float)((ulonglong)*(undefined8 *)(*pauVar5 + 8) >> 0x20);
      fVar41 = (float)*(undefined8 *)*pauVar4;
      fVar43 = (float)((ulonglong)*(undefined8 *)*pauVar4 >> 0x20);
      fVar45 = (float)*(undefined8 *)(*pauVar4 + 8);
      fVar49 = (float)*(undefined8 *)*pauVar5;
      fVar50 = (float)((ulonglong)*(undefined8 *)*pauVar5 >> 0x20);
      fVar59 = (float)*(undefined8 *)(*pauVar5 + 8);
      fVar35 = (float)((uint)(fVar34 * fVar40 * fVar49 + fVar34 * fVar56 * fVar41 +
                             fVar34 * fVar62 * auVar24._0_4_ + fVar34 * fVar66 * auVar38._0_4_) &
                       _DAT_140483730 ^ (uint)param_3);
      fVar36 = (float)((uint)(fVar54 * fVar42 * fVar50 + fVar54 * fVar57 * fVar43 +
                             fVar54 * fVar63 * auVar24._4_4_ + fVar54 * fVar67 * auVar38._4_4_) &
                       _UNK_140483734 ^ (uint)param_3);
      fVar37 = (float)((uint)(fVar55 * fVar44 * fVar59 + fVar55 * fVar58 * fVar45 +
                             fVar55 * fVar64 * auVar24._8_4_ + fVar55 * fVar68 * auVar38._8_4_) &
                       _UNK_140483738 ^ (uint)param_3);
      fVar51 = (float)((uint)(fVar48 * fVar46 * fVar53 + fVar48 * fVar60 * fVar52 +
                             fVar48 * fVar65 * auVar24._12_4_ + fVar48 * fVar69 * auVar38._12_4_) &
                       _UNK_14048373c ^ (uint)param_3);
      fVar66 = fVar35 * fVar34 * fVar66 + auVar38._0_4_ * fVar61;
      fVar67 = fVar36 * fVar54 * fVar67 + auVar38._4_4_ * fVar61;
      fVar68 = fVar37 * fVar55 * fVar68 + auVar38._8_4_ * fVar61;
      fVar69 = fVar51 * fVar48 * fVar69 + auVar38._12_4_ * fVar61;
      fVar62 = fVar35 * fVar34 * fVar62 + auVar24._0_4_ * fVar61;
      fVar63 = fVar36 * fVar54 * fVar63 + auVar24._4_4_ * fVar61;
      fVar64 = fVar37 * fVar55 * fVar64 + auVar24._8_4_ * fVar61;
      fVar65 = fVar51 * fVar48 * fVar65 + auVar24._12_4_ * fVar61;
      fVar41 = fVar35 * fVar34 * fVar56 + fVar41 * fVar61;
      fVar43 = fVar36 * fVar54 * fVar57 + fVar43 * fVar61;
      fVar45 = fVar37 * fVar55 * fVar58 + fVar45 * fVar61;
      fVar56 = fVar51 * fVar48 * fVar60 + fVar52 * fVar61;
      fVar49 = fVar35 * fVar34 * fVar40 + fVar49 * fVar61;
      fVar57 = fVar36 * fVar54 * fVar42 + fVar50 * fVar61;
      fVar50 = fVar37 * fVar55 * fVar44 + fVar59 * fVar61;
      fVar46 = fVar51 * fVar48 * fVar46 + fVar53 * fVar61;
      fVar52 = *param_1;
      fVar53 = param_1[1];
      fVar54 = param_1[2];
      fVar55 = param_1[3];
      auVar27._0_4_ = fVar62 * fVar62 + fVar66 * fVar66;
      auVar27._4_4_ = fVar63 * fVar63 + fVar67 * fVar67;
      auVar27._8_4_ = fVar64 * fVar64 + fVar68 * fVar68;
      auVar27._12_4_ = fVar65 * fVar65 + fVar69 * fVar69;
      fVar37 = fVar49 * fVar49 + fVar41 * fVar41 + auVar27._0_4_;
      fVar40 = fVar57 * fVar57 + fVar43 * fVar43 + auVar27._4_4_;
      fVar42 = fVar50 * fVar50 + fVar45 * fVar45 + auVar27._8_4_;
      fVar44 = fVar46 * fVar46 + fVar56 * fVar56 + auVar27._12_4_;
      auVar12._4_4_ = fVar40;
      auVar12._0_4_ = fVar37;
      auVar12._8_4_ = fVar42;
      auVar12._12_4_ = fVar44;
      auVar26 = rsqrtps(auVar27,auVar12);
      fVar48 = auVar26._0_4_;
      fVar34 = auVar26._4_4_;
      fVar35 = auVar26._8_4_;
      fVar36 = auVar26._12_4_;
      fVar48 = (_DAT_1404837a0 - fVar48 * fVar48 * fVar37) * fVar48 * _DAT_140483740;
      fVar34 = (_UNK_1404837a4 - fVar34 * fVar34 * fVar40) * fVar34 * _UNK_140483744;
      fVar35 = (_UNK_1404837a8 - fVar35 * fVar35 * fVar42) * fVar35 * _UNK_140483748;
      fVar36 = (_UNK_1404837ac - fVar36 * fVar36 * fVar44) * fVar36 * _UNK_14048374c;
      auVar28._0_4_ = fVar48 * fVar66;
      auVar28._4_4_ = fVar34 * fVar67;
      auVar28._8_4_ = fVar35 * fVar68;
      auVar28._12_4_ = fVar36 * fVar69;
      auVar38 = blendvps(auVar38,auVar28,auVar47);
      *(undefined1 (*) [16])(param_10 + (ulonglong)uVar14 * 4 + lVar19 * 4) = auVar38;
      auVar29._0_4_ = fVar48 * fVar62;
      auVar29._4_4_ = fVar34 * fVar63;
      auVar29._8_4_ = fVar35 * fVar64;
      auVar29._12_4_ = fVar36 * fVar65;
      auVar38 = blendvps(auVar24,auVar29,auVar47);
      *(undefined1 (*) [16])(param_10 + (ulonglong)uVar21 * 4 + lVar19 * 4) = auVar38;
      auVar30._0_4_ = fVar48 * fVar41;
      auVar30._4_4_ = fVar34 * fVar43;
      auVar30._8_4_ = fVar35 * fVar45;
      auVar30._12_4_ = fVar36 * fVar56;
      auVar39._0_4_ = fVar48 * fVar49;
      auVar39._4_4_ = fVar34 * fVar57;
      auVar39._8_4_ = fVar35 * fVar50;
      auVar39._12_4_ = fVar36 * fVar46;
      auVar38 = blendvps(auVar23,auVar30,auVar47);
      *(undefined1 (*) [16])(param_10 + (ulonglong)uVar13 * 4 + lVar19 * 4) = auVar38;
      auVar38 = blendvps(auVar31,auVar39,auVar47);
      *(undefined1 (*) [16])(param_10 + (ulonglong)uVar17 * 4 + lVar19 * 4) = auVar38;
      fVar48 = *param_2;
      fVar34 = param_2[1];
      fVar35 = param_2[2];
      fVar36 = param_2[3];
      auVar38 = *(undefined1 (*) [16])(param_5 + (ulonglong)uVar22 * 4 + lVar19 * 4);
      auVar24 = *(undefined1 (*) [16])(param_5 + (ulonglong)uVar18 * 4 + lVar19 * 4);
      auVar26 = *(undefined1 (*) [16])(param_5 + (ulonglong)uVar15 * 4 + lVar19 * 4);
      pfVar2 = (float *)(lVar1 + (longlong)(int)uVar18 * 4 + lVar19 * 4);
      fVar37 = *pfVar2;
      fVar40 = pfVar2[1];
      fVar42 = pfVar2[2];
      fVar44 = pfVar2[3];
      pfVar2 = (float *)(param_7 + (longlong)(int)uVar18 * 4 + lVar19 * 4);
      fVar41 = *pfVar2;
      fVar43 = pfVar2[1];
      fVar45 = pfVar2[2];
      fVar46 = pfVar2[3];
      pfVar2 = (float *)(lVar1 + (longlong)(int)uVar15 * 4 + lVar19 * 4);
      fVar56 = *pfVar2;
      fVar62 = pfVar2[1];
      fVar63 = pfVar2[2];
      fVar64 = pfVar2[3];
      pfVar2 = (float *)(param_7 + (longlong)(int)uVar15 * 4 + lVar19 * 4);
      fVar65 = *pfVar2;
      fVar66 = pfVar2[1];
      fVar67 = pfVar2[2];
      fVar68 = pfVar2[3];
      pfVar2 = (float *)(lVar1 + (longlong)(int)uVar22 * 4 + lVar19 * 4);
      pfVar3 = (float *)(param_7 + (longlong)(int)uVar22 * 4 + lVar19 * 4);
      auVar31._0_4_ = (fVar48 * *pfVar2 + fVar52 * *pfVar3) * param_3 + auVar38._0_4_ * fVar61;
      auVar31._4_4_ = (fVar34 * pfVar2[1] + fVar53 * pfVar3[1]) * param_3 + auVar38._4_4_ * fVar61;
      auVar31._8_4_ = (fVar35 * pfVar2[2] + fVar54 * pfVar3[2]) * param_3 + auVar38._8_4_ * fVar61;
      auVar31._12_4_ = (fVar36 * pfVar2[3] + fVar55 * pfVar3[3]) * param_3 + auVar38._12_4_ * fVar61
      ;
      auVar38 = blendvps(auVar38,auVar31,auVar47);
      *(undefined1 (*) [16])(param_10 + (ulonglong)uVar22 * 4 + lVar19 * 4) = auVar38;
      auVar32._0_4_ = auVar24._0_4_ * fVar61 + (fVar48 * fVar37 + fVar52 * fVar41) * param_3;
      auVar32._4_4_ = auVar24._4_4_ * fVar61 + (fVar34 * fVar40 + fVar53 * fVar43) * param_3;
      auVar32._8_4_ = auVar24._8_4_ * fVar61 + (fVar35 * fVar42 + fVar54 * fVar45) * param_3;
      auVar32._12_4_ = auVar24._12_4_ * fVar61 + (fVar36 * fVar44 + fVar55 * fVar46) * param_3;
      uVar20 = uVar20 + 4;
      auVar38 = blendvps(auVar24,auVar32,auVar47);
      *(undefined1 (*) [16])(param_10 + (ulonglong)uVar18 * 4 + lVar19 * 4) = auVar38;
      auVar33._0_4_ = auVar26._0_4_ * fVar61 + (fVar48 * fVar56 + fVar52 * fVar65) * param_3;
      auVar33._4_4_ = auVar26._4_4_ * fVar61 + (fVar34 * fVar62 + fVar53 * fVar66) * param_3;
      auVar33._8_4_ = auVar26._8_4_ * fVar61 + (fVar35 * fVar63 + fVar54 * fVar67) * param_3;
      auVar33._12_4_ = auVar26._12_4_ * fVar61 + (fVar36 * fVar64 + fVar55 * fVar68) * param_3;
      auVar47 = blendvps(auVar26,auVar33,auVar47);
      *(undefined1 (*) [16])(param_10 + (ulonglong)uVar15 * 4 + lVar19 * 4) = auVar47;
    } while (uVar20 < param_4);
  }
  return;
}

