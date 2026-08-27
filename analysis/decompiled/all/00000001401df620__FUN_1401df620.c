// Function: FUN_1401df620
// Addr: 1401df620
// Size: 1502 bytes


void FUN_1401df620(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  uint uVar20;
  float fVar21;
  float local_res8;
  float local_res20;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0 [4];
  float local_d0;
  float local_cc;
  
  puVar4 = &DAT_1404903a8;
  puVar1 = (undefined4 *)*param_4;
  fVar21 = *(float *)(param_1 + 0x16c);
  local_e8 = *(float *)(param_1 + 0x164);
  local_res8 = *(float *)(param_1 + 0x168);
  local_res20 = *(float *)(param_1 + 0x14c);
  local_f8 = *(float *)(param_1 + 0x150);
  local_f4 = *(float *)(param_1 + 0x158);
  local_f0 = *(float *)(param_1 + 0x15c);
  local_ec = *(float *)(param_1 + 0x160);
  local_e4 = *(float *)(param_1 + 0x154);
  do {
    fVar7 = DAT_140492704;
    uVar20 = *puVar4;
    local_e0[0] = 0.0;
    local_e0[1] = 0.0;
    local_e0[2] = 0.0;
    if (2 < uVar20) {
      FID_conflict__assert
                (L"(i) >= 0 && (i) < (this->length())",
                 L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec3.inl",0xac);
    }
    if (uVar20 == 0) {
LAB_1401df769:
      pfVar2 = local_e0;
    }
    else if (uVar20 == 1) {
      pfVar2 = local_e0 + 1;
    }
    else {
      if (uVar20 != 2) goto LAB_1401df769;
      pfVar2 = local_e0 + 2;
    }
    *pfVar2 = 1.0;
    if (2 < uVar20) {
      FID_conflict__assert
                (L"(i) >= 0 && (i) < (this->length())",
                 L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec3.inl",0xac);
    }
    puVar3 = puVar1;
    if (uVar20 != 0) {
      if (uVar20 == 1) {
        puVar3 = puVar1 + 1;
      }
      else if (uVar20 == 2) {
        puVar3 = puVar1 + 2;
      }
    }
    uVar8 = *puVar3;
    fVar5 = (float)FUN_14041a2e0(uVar8);
    fVar6 = (float)FUN_14041a9c0(uVar8);
    fVar19 = local_e0[2];
    fVar18 = local_e0[0];
    fVar11 = local_e0[1];
    fVar10 = local_e0[0] * local_e0[0] + local_e0[1] * local_e0[1] + local_e0[2] * local_e0[2];
    if (fVar10 < 0.0) {
      fVar10 = (float)FUN_14041ad10(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    fVar10 = fVar7 / fVar10;
    fVar7 = fVar7 - fVar5;
    fVar19 = fVar19 * fVar10;
    fVar18 = fVar10 * fVar18;
    fVar10 = fVar10 * fVar11;
    fVar17 = fVar19 * fVar7;
    fVar13 = fVar18 * fVar7;
    fVar7 = fVar10 * fVar7;
    fVar11 = fVar19 * fVar6 + fVar13 * fVar10;
    fVar15 = fVar7 * fVar18 - fVar19 * fVar6;
    fVar12 = fVar13 * fVar18 + fVar5;
    fVar14 = fVar7 * fVar10 + fVar5;
    fVar16 = fVar7 * fVar19 + fVar18 * fVar6;
    fVar7 = fVar13 * fVar19 - fVar10 * fVar6;
    fVar13 = fVar18 * fVar17 + fVar10 * fVar6;
    fVar18 = fVar10 * fVar17 - fVar18 * fVar6;
    fVar5 = fVar17 * fVar19 + fVar5;
    fVar19 = local_res20 * fVar12 + local_f4 * fVar11 + local_e8 * fVar7;
    fVar6 = local_f8 * fVar12 + local_f0 * fVar11 + local_res8 * fVar7;
    fVar11 = local_e4 * fVar12 + local_ec * fVar11 + fVar21 * fVar7;
    local_cc = local_res20 * fVar15 + local_f4 * fVar14 + local_e8 * fVar16;
    puVar4 = puVar4 + 1;
    local_d0 = local_f8 * fVar15 + local_f0 * fVar14 + local_res8 * fVar16;
    fVar7 = local_e4 * fVar15 + local_ec * fVar14 + fVar21 * fVar16;
    local_e8 = local_res20 * fVar13 + local_f4 * fVar18 + local_e8 * fVar5;
    local_res8 = local_f8 * fVar13 + local_f0 * fVar18 + local_res8 * fVar5;
    fVar21 = local_e4 * fVar13 + local_ec * fVar18 + fVar21 * fVar5;
    local_res20 = fVar19;
    local_f8 = fVar6;
    local_f4 = local_cc;
    local_f0 = local_d0;
    local_ec = fVar7;
    local_e4 = fVar11;
    if (puVar4 == (uint *)&DAT_1404903b4) {
      *(float *)(param_1 + 0x14c) = fVar19;
      *(float *)(param_1 + 0x150) = fVar6;
      *(float *)(param_1 + 0x154) = fVar11;
      *(float *)(param_1 + 0x158) = local_cc;
      *(float *)(param_1 + 0x15c) = local_d0;
      *(float *)(param_1 + 0x160) = fVar7;
      *(float *)(param_1 + 0x164) = local_e8;
      *(float *)(param_1 + 0x168) = local_res8;
      *(float *)(param_1 + 0x16c) = fVar21;
      uVar8 = FUN_14041c460(fVar6,fVar19);
      fVar18 = (float)FUN_14041a9c0();
      fVar19 = (float)FUN_14041a2e0(uVar8);
      uVar9 = FUN_14041c460(fVar18 * local_e8 - fVar19 * local_res8,
                            fVar19 * local_d0 - fVar18 * local_cc);
      uVar20 = (uint)fVar11 ^ DAT_140492ff0;
      *(undefined4 *)(param_1 + 0x140) = uVar9;
      fVar21 = fVar21 * fVar21 + fVar7 * fVar7;
      if (fVar21 < 0.0) {
        fVar21 = (float)FUN_14041ad10(fVar21);
      }
      else {
        fVar21 = SQRT(fVar21);
      }
      uVar9 = FUN_14041c460(uVar20,fVar21);
      *(undefined4 *)(param_1 + 0x144) = uVar9;
      *(undefined4 *)(param_1 + 0x148) = uVar8;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      return;
    }
  } while( true );
}

