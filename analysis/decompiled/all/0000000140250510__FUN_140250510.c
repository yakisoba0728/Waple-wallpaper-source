// Function: FUN_140250510
// Addr: 140250510
// Size: 866 bytes


void FUN_140250510(undefined8 param_1,longlong *param_2,float *param_3,float *param_4,float *param_5
                  ,float *param_6,float *param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
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
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  longlong lVar57;
  uint uVar58;
  ulonglong uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = *param_5;
  fVar9 = param_7[1];
  lVar22 = param_2[0xb];
  lVar23 = param_2[0xc];
  lVar24 = param_2[0xd];
  lVar25 = param_2[0xe];
  lVar26 = param_2[0xf];
  lVar27 = param_2[0x10];
  fVar10 = param_5[1];
  fVar11 = param_5[2];
  fVar12 = *param_4;
  uVar59 = 0;
  fVar13 = *param_3;
  fVar14 = param_3[1];
  fVar15 = param_3[2];
  fVar16 = *param_7;
  fVar17 = param_7[2];
  fVar18 = *param_6;
  fVar19 = param_6[1];
  fVar20 = param_6[2];
  fVar21 = param_7[3];
  if ((int)param_2[0x1d] != 0) {
    do {
      pfVar1 = (float *)(lVar23 + uVar59 * 4);
      fVar28 = *pfVar1;
      fVar29 = pfVar1[1];
      fVar30 = pfVar1[2];
      fVar31 = pfVar1[3];
      pfVar1 = (float *)(lVar22 + uVar59 * 4);
      fVar32 = *pfVar1;
      fVar33 = pfVar1[1];
      fVar34 = pfVar1[2];
      fVar35 = pfVar1[3];
      pfVar1 = (float *)(lVar24 + uVar59 * 4);
      fVar36 = *pfVar1;
      fVar37 = pfVar1[1];
      fVar38 = pfVar1[2];
      fVar39 = pfVar1[3];
      puVar2 = (undefined4 *)(lVar25 + uVar59 * 4);
      uVar40 = *puVar2;
      uVar41 = puVar2[1];
      uVar42 = puVar2[2];
      uVar43 = puVar2[3];
      puVar2 = (undefined4 *)(lVar26 + uVar59 * 4);
      uVar44 = *puVar2;
      uVar45 = puVar2[1];
      uVar46 = puVar2[2];
      uVar47 = puVar2[3];
      puVar2 = (undefined4 *)(lVar27 + uVar59 * 4);
      uVar48 = *puVar2;
      uVar49 = puVar2[1];
      uVar50 = puVar2[2];
      uVar51 = puVar2[3];
      lVar57 = (longlong)(int)uVar59;
      uVar60 = -(uint)(((fVar28 * fVar6 + fVar32 * fVar12 + fVar36 * fVar7 < fVar9 ||
                        fVar28 * fVar14 + fVar32 * fVar13 + fVar36 * fVar15 < fVar16) ||
                       fVar28 * fVar10 + fVar32 * fVar8 + fVar36 * fVar11 < fVar17) ||
                      fVar28 * fVar19 + fVar32 * fVar18 + fVar36 * fVar20 < fVar21);
      uVar61 = -(uint)(((fVar29 * fVar6 + fVar33 * fVar12 + fVar37 * fVar7 < fVar9 ||
                        fVar29 * fVar14 + fVar33 * fVar13 + fVar37 * fVar15 < fVar16) ||
                       fVar29 * fVar10 + fVar33 * fVar8 + fVar37 * fVar11 < fVar17) ||
                      fVar29 * fVar19 + fVar33 * fVar18 + fVar37 * fVar20 < fVar21);
      uVar62 = -(uint)(((fVar30 * fVar6 + fVar34 * fVar12 + fVar38 * fVar7 < fVar9 ||
                        fVar30 * fVar14 + fVar34 * fVar13 + fVar38 * fVar15 < fVar16) ||
                       fVar30 * fVar10 + fVar34 * fVar8 + fVar38 * fVar11 < fVar17) ||
                      fVar30 * fVar19 + fVar34 * fVar18 + fVar38 * fVar20 < fVar21);
      uVar63 = -(uint)(((fVar31 * fVar6 + fVar35 * fVar12 + fVar39 * fVar7 < fVar9 ||
                        fVar31 * fVar14 + fVar35 * fVar13 + fVar39 * fVar15 < fVar16) ||
                       fVar31 * fVar10 + fVar35 * fVar8 + fVar39 * fVar11 < fVar17) ||
                      fVar31 * fVar19 + fVar35 * fVar18 + fVar39 * fVar20 < fVar21);
      puVar3 = (uint *)(param_2[1] + lVar57 * 4);
      uVar58 = puVar3[1];
      uVar52 = puVar3[2];
      uVar53 = puVar3[3];
      puVar4 = (uint *)(*param_2 + lVar57 * 4);
      uVar54 = puVar4[1];
      uVar55 = puVar4[2];
      uVar56 = puVar4[3];
      puVar5 = (uint *)(*param_2 + lVar57 * 4);
      *puVar5 = uVar60 & *puVar3 | ~uVar60 & *puVar4;
      puVar5[1] = uVar61 & uVar58 | ~uVar61 & uVar54;
      puVar5[2] = uVar62 & uVar52 | ~uVar62 & uVar55;
      puVar5[3] = uVar63 & uVar53 | ~uVar63 & uVar56;
      pfVar1 = (float *)(lVar22 + uVar59 * 4);
      *pfVar1 = fVar32;
      pfVar1[1] = fVar33;
      pfVar1[2] = fVar34;
      pfVar1[3] = fVar35;
      pfVar1 = (float *)(lVar23 + uVar59 * 4);
      *pfVar1 = fVar28;
      pfVar1[1] = fVar29;
      pfVar1[2] = fVar30;
      pfVar1[3] = fVar31;
      pfVar1 = (float *)(lVar24 + uVar59 * 4);
      *pfVar1 = fVar36;
      pfVar1[1] = fVar37;
      pfVar1[2] = fVar38;
      pfVar1[3] = fVar39;
      puVar2 = (undefined4 *)(lVar25 + uVar59 * 4);
      *puVar2 = uVar40;
      puVar2[1] = uVar41;
      puVar2[2] = uVar42;
      puVar2[3] = uVar43;
      puVar2 = (undefined4 *)(lVar26 + uVar59 * 4);
      *puVar2 = uVar44;
      puVar2[1] = uVar45;
      puVar2[2] = uVar46;
      puVar2[3] = uVar47;
      puVar2 = (undefined4 *)(lVar27 + uVar59 * 4);
      *puVar2 = uVar48;
      puVar2[1] = uVar49;
      puVar2[2] = uVar50;
      puVar2[3] = uVar51;
      uVar58 = (int)uVar59 + 4;
      uVar59 = (ulonglong)uVar58;
    } while (uVar58 < *(uint *)(param_2 + 0x1d));
  }
  return;
}

