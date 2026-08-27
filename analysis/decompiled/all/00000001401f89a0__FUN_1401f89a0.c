// Function: FUN_1401f89a0
// Addr: 1401f89a0
// Size: 1664 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401f89a0(float *param_1,float *param_2,uint param_3,longlong param_4,longlong param_5,
                  longlong param_6,int param_7,int param_8,longlong param_9)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar41;
  float fVar42;
  undefined1 auVar39 [16];
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
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
  
  if (param_3 != 0) {
    uVar27 = param_3 * 4;
    uVar10 = param_3 * 3;
    uVar26 = 0;
    fVar15 = *param_2;
    fVar16 = param_2[1];
    fVar17 = param_2[2];
    fVar18 = param_2[3];
    fVar19 = *param_1;
    fVar20 = param_1[1];
    fVar21 = param_1[2];
    fVar22 = param_1[3];
    uVar11 = param_3 * 5;
    lVar1 = param_6 + (longlong)(int)(param_3 * param_7 * 10) * 4;
    param_6 = param_6 + (longlong)(int)(param_3 * param_8 * 10) * 4;
    uVar13 = param_3 * 2;
    uVar14 = param_3 * 6;
    uVar24 = param_3 * 8;
    uVar12 = param_3 * 9;
    uVar25 = param_3 * 7;
    do {
      lVar23 = (longlong)(int)uVar26;
      pfVar2 = (float *)(param_6 + (longlong)(int)param_3 * 4 + lVar23 * 4);
      auVar34 = *(undefined1 (*) [16])(param_5 + lVar23 * 4);
      pfVar3 = (float *)(lVar1 + (longlong)(int)param_3 * 4 + lVar23 * 4);
      pfVar4 = (float *)(lVar1 + lVar23 * 4);
      auVar39._0_4_ = fVar15 * *pfVar3 + fVar19 * *pfVar2;
      auVar39._4_4_ = fVar16 * pfVar3[1] + fVar20 * pfVar2[1];
      auVar39._8_4_ = fVar17 * pfVar3[2] + fVar21 * pfVar2[2];
      auVar39._12_4_ = fVar18 * pfVar3[3] + fVar22 * pfVar2[3];
      auVar44 = blendvps(*(undefined1 (*) [16])(param_4 + (ulonglong)param_3 * 4 + lVar23 * 4),
                         auVar39,auVar34);
      pfVar2 = (float *)(param_6 + (longlong)(int)uVar13 * 4 + lVar23 * 4);
      pfVar3 = (float *)(lVar1 + (longlong)(int)uVar13 * 4 + lVar23 * 4);
      auVar40._0_4_ = fVar15 * *pfVar3 + fVar19 * *pfVar2;
      auVar40._4_4_ = fVar16 * pfVar3[1] + fVar20 * pfVar2[1];
      auVar40._8_4_ = fVar17 * pfVar3[2] + fVar21 * pfVar2[2];
      auVar40._12_4_ = fVar18 * pfVar3[3] + fVar22 * pfVar2[3];
      auVar39 = blendvps(*(undefined1 (*) [16])(param_4 + (ulonglong)uVar13 * 4 + lVar23 * 4),
                         auVar40,auVar34);
      pfVar2 = (float *)(param_6 + lVar23 * 4);
      auVar35._0_4_ = fVar15 * *pfVar4 + fVar19 * *pfVar2;
      auVar35._4_4_ = fVar16 * pfVar4[1] + fVar20 * pfVar2[1];
      auVar35._8_4_ = fVar17 * pfVar4[2] + fVar21 * pfVar2[2];
      auVar35._12_4_ = fVar18 * pfVar4[3] + fVar22 * pfVar2[3];
      auVar28 = blendvps(*(undefined1 (*) [16])(param_4 + lVar23 * 4),auVar35,auVar34);
      *(undefined1 (*) [16])(param_9 + lVar23 * 4) = auVar28;
      *(undefined1 (*) [16])(param_9 + (ulonglong)param_3 * 4 + lVar23 * 4) = auVar44;
      *(undefined1 (*) [16])(param_9 + (ulonglong)uVar13 * 4 + lVar23 * 4) = auVar39;
      pfVar2 = (float *)(lVar1 + (longlong)(int)uVar10 * 4 + lVar23 * 4);
      pfVar3 = (float *)(lVar1 + (longlong)(int)uVar27 * 4 + lVar23 * 4);
      pfVar4 = (float *)(lVar1 + (longlong)(int)uVar11 * 4 + lVar23 * 4);
      pfVar5 = (float *)(lVar1 + (longlong)(int)uVar14 * 4 + lVar23 * 4);
      pfVar6 = (float *)(param_6 + (longlong)(int)uVar10 * 4 + lVar23 * 4);
      pfVar7 = (float *)(param_6 + (longlong)(int)uVar27 * 4 + lVar23 * 4);
      pfVar8 = (float *)(param_6 + (longlong)(int)uVar11 * 4 + lVar23 * 4);
      pfVar9 = (float *)(param_6 + (longlong)(int)uVar14 * 4 + lVar23 * 4);
      fVar49 = (float)((uint)(*pfVar9 * *pfVar5 + *pfVar8 * *pfVar4 +
                             *pfVar7 * *pfVar3 + *pfVar6 * *pfVar2) & _DAT_140483730 ^ (uint)fVar19)
      ;
      fVar50 = (float)((uint)(pfVar9[1] * pfVar5[1] + pfVar8[1] * pfVar4[1] +
                             pfVar7[1] * pfVar3[1] + pfVar6[1] * pfVar2[1]) & _UNK_140483734 ^
                      (uint)fVar20);
      fVar51 = (float)((uint)(pfVar9[2] * pfVar5[2] + pfVar8[2] * pfVar4[2] +
                             pfVar7[2] * pfVar3[2] + pfVar6[2] * pfVar2[2]) & _UNK_140483738 ^
                      (uint)fVar21);
      fVar52 = (float)((uint)(pfVar9[3] * pfVar5[3] + pfVar8[3] * pfVar4[3] +
                             pfVar7[3] * pfVar3[3] + pfVar6[3] * pfVar2[3]) & _UNK_14048373c ^
                      (uint)fVar22);
      fVar57 = fVar15 * *pfVar2 + fVar49 * *pfVar6;
      fVar58 = fVar16 * pfVar2[1] + fVar50 * pfVar6[1];
      fVar59 = fVar17 * pfVar2[2] + fVar51 * pfVar6[2];
      fVar60 = fVar18 * pfVar2[3] + fVar52 * pfVar6[3];
      fVar53 = fVar15 * *pfVar3 + fVar49 * *pfVar7;
      fVar54 = fVar16 * pfVar3[1] + fVar50 * pfVar7[1];
      fVar55 = fVar17 * pfVar3[2] + fVar51 * pfVar7[2];
      fVar56 = fVar18 * pfVar3[3] + fVar52 * pfVar7[3];
      fVar38 = fVar15 * *pfVar4 + fVar49 * *pfVar8;
      fVar41 = fVar16 * pfVar4[1] + fVar50 * pfVar8[1];
      fVar42 = fVar17 * pfVar4[2] + fVar51 * pfVar8[2];
      fVar43 = fVar18 * pfVar4[3] + fVar52 * pfVar8[3];
      fVar45 = fVar15 * *pfVar5 + fVar49 * *pfVar9;
      fVar46 = fVar16 * pfVar5[1] + fVar50 * pfVar9[1];
      fVar47 = fVar17 * pfVar5[2] + fVar51 * pfVar9[2];
      fVar48 = fVar18 * pfVar5[3] + fVar52 * pfVar9[3];
      auVar44._0_4_ = fVar53 * fVar53 + fVar57 * fVar57;
      auVar44._4_4_ = fVar54 * fVar54 + fVar58 * fVar58;
      auVar44._8_4_ = fVar55 * fVar55 + fVar59 * fVar59;
      auVar44._12_4_ = fVar56 * fVar56 + fVar60 * fVar60;
      auVar36._0_4_ = fVar45 * fVar45 + fVar38 * fVar38 + auVar44._0_4_;
      auVar36._4_4_ = fVar46 * fVar46 + fVar41 * fVar41 + auVar44._4_4_;
      auVar36._8_4_ = fVar47 * fVar47 + fVar42 * fVar42 + auVar44._8_4_;
      auVar36._12_4_ = fVar48 * fVar48 + fVar43 * fVar43 + auVar44._12_4_;
      auVar28 = rsqrtps(auVar44,auVar36);
      fVar49 = auVar28._0_4_;
      fVar50 = auVar28._4_4_;
      fVar51 = auVar28._8_4_;
      fVar52 = auVar28._12_4_;
      fVar49 = (_DAT_1404837a0 - fVar49 * fVar49 * auVar36._0_4_) * fVar49 * _DAT_140483740;
      fVar50 = (_UNK_1404837a4 - fVar50 * fVar50 * auVar36._4_4_) * fVar50 * _UNK_140483744;
      fVar51 = (_UNK_1404837a8 - fVar51 * fVar51 * auVar36._8_4_) * fVar51 * _UNK_140483748;
      fVar52 = (_UNK_1404837ac - fVar52 * fVar52 * auVar36._12_4_) * fVar52 * _UNK_14048374c;
      auVar29._0_4_ = fVar49 * fVar53;
      auVar29._4_4_ = fVar50 * fVar54;
      auVar29._8_4_ = fVar51 * fVar55;
      auVar29._12_4_ = fVar52 * fVar56;
      auVar44 = blendvps(*(undefined1 (*) [16])(param_4 + (ulonglong)uVar27 * 4 + lVar23 * 4),
                         auVar29,auVar34);
      auVar30._0_4_ = fVar49 * fVar38;
      auVar30._4_4_ = fVar50 * fVar41;
      auVar30._8_4_ = fVar51 * fVar42;
      auVar30._12_4_ = fVar52 * fVar43;
      auVar40 = blendvps(*(undefined1 (*) [16])(param_4 + (ulonglong)uVar11 * 4 + lVar23 * 4),
                         auVar30,auVar34);
      auVar31._0_4_ = fVar49 * fVar45;
      auVar31._4_4_ = fVar50 * fVar46;
      auVar31._8_4_ = fVar51 * fVar47;
      auVar31._12_4_ = fVar52 * fVar48;
      auVar39 = blendvps(*(undefined1 (*) [16])(param_4 + (ulonglong)uVar14 * 4 + lVar23 * 4),
                         auVar31,auVar34);
      auVar28._4_4_ = fVar50 * fVar58;
      auVar28._0_4_ = fVar49 * fVar57;
      auVar28._8_4_ = fVar51 * fVar59;
      auVar28._12_4_ = fVar52 * fVar60;
      auVar28 = blendvps(*(undefined1 (*) [16])(param_4 + (ulonglong)uVar10 * 4 + lVar23 * 4),
                         auVar28,auVar34);
      *(undefined1 (*) [16])(param_9 + (ulonglong)uVar10 * 4 + lVar23 * 4) = auVar28;
      *(undefined1 (*) [16])(param_9 + (ulonglong)uVar27 * 4 + lVar23 * 4) = auVar44;
      *(undefined1 (*) [16])(param_9 + (ulonglong)uVar11 * 4 + lVar23 * 4) = auVar40;
      *(undefined1 (*) [16])(param_9 + (ulonglong)uVar14 * 4 + lVar23 * 4) = auVar39;
      pfVar2 = (float *)(lVar1 + (longlong)(int)uVar24 * 4 + lVar23 * 4);
      pfVar3 = (float *)(param_6 + (longlong)(int)uVar24 * 4 + lVar23 * 4);
      auVar32._0_4_ = fVar15 * *pfVar2 + fVar19 * *pfVar3;
      auVar32._4_4_ = fVar16 * pfVar2[1] + fVar20 * pfVar3[1];
      auVar32._8_4_ = fVar17 * pfVar2[2] + fVar21 * pfVar3[2];
      auVar32._12_4_ = fVar18 * pfVar2[3] + fVar22 * pfVar3[3];
      auVar39 = blendvps(*(undefined1 (*) [16])(param_4 + (ulonglong)uVar24 * 4 + lVar23 * 4),
                         auVar32,auVar34);
      pfVar2 = (float *)(lVar1 + (longlong)(int)uVar12 * 4 + lVar23 * 4);
      pfVar3 = (float *)(param_6 + (longlong)(int)uVar12 * 4 + lVar23 * 4);
      auVar33._0_4_ = fVar15 * *pfVar2 + fVar19 * *pfVar3;
      auVar33._4_4_ = fVar16 * pfVar2[1] + fVar20 * pfVar3[1];
      auVar33._8_4_ = fVar17 * pfVar2[2] + fVar21 * pfVar3[2];
      auVar33._12_4_ = fVar18 * pfVar2[3] + fVar22 * pfVar3[3];
      pfVar2 = (float *)(lVar1 + (longlong)(int)uVar25 * 4 + lVar23 * 4);
      auVar28 = blendvps(*(undefined1 (*) [16])(param_4 + (ulonglong)uVar12 * 4 + lVar23 * 4),
                         auVar33,auVar34);
      pfVar3 = (float *)(param_6 + (longlong)(int)uVar25 * 4 + lVar23 * 4);
      auVar37._0_4_ = fVar15 * *pfVar2 + fVar19 * *pfVar3;
      auVar37._4_4_ = fVar16 * pfVar2[1] + fVar20 * pfVar3[1];
      auVar37._8_4_ = fVar17 * pfVar2[2] + fVar21 * pfVar3[2];
      auVar37._12_4_ = fVar18 * pfVar2[3] + fVar22 * pfVar3[3];
      auVar34 = blendvps(*(undefined1 (*) [16])(param_4 + (ulonglong)uVar25 * 4 + lVar23 * 4),
                         auVar37,auVar34);
      *(undefined1 (*) [16])(param_9 + (ulonglong)uVar25 * 4 + lVar23 * 4) = auVar34;
      *(undefined1 (*) [16])(param_9 + (ulonglong)uVar24 * 4 + lVar23 * 4) = auVar39;
      uVar26 = uVar26 + 4;
      *(undefined1 (*) [16])(param_9 + (ulonglong)uVar12 * 4 + lVar23 * 4) = auVar28;
    } while (uVar26 < param_3);
  }
  return;
}

