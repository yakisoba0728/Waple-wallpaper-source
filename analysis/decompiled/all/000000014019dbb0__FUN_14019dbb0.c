// Function: FUN_14019dbb0
// Addr: 14019dbb0
// Size: 982 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14019dbb0(longlong param_1,longlong *param_2,float *param_3,undefined8 param_4,
             undefined8 param_5,float *param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  undefined8 uVar6;
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
  undefined8 local_res10;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  if ((*(byte *)((longlong)param_2 + 0x304) & 2) != 0) {
    *param_6 = *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x74);
    fVar7 = *(float *)(param_1 + 0x90);
    fVar18 = *(float *)(param_1 + 0x78);
    param_6[2] = 0.0;
    param_6[1] = fVar7 * fVar18;
    return 1;
  }
  local_d8 = _DAT_140492a60;
  uStack_d0 = _UNK_140492a68;
  local_c8 = _DAT_140492a90;
  uStack_c0 = _UNK_140492a98;
  local_b8 = _DAT_140492b40;
  uStack_b0 = _UNK_140492b48;
  local_a8 = _DAT_140492de0;
  uStack_a0 = _UNK_140492de8;
  pfVar5 = (float *)(**(code **)(*param_2 + 0x80))(param_2);
  fVar7 = pfVar5[0xc];
  fVar18 = pfVar5[0xd];
  fVar20 = pfVar5[0xe];
  fVar17 = *pfVar5;
  fVar19 = pfVar5[1];
  fVar21 = pfVar5[2];
  fVar14 = pfVar5[4];
  fVar15 = pfVar5[5];
  fVar16 = pfVar5[6];
  fStack_dc = pfVar5[0xf];
  local_e8 = fVar7;
  fStack_e4 = fVar18;
  fStack_e0 = fVar20;
  cVar4 = (**(code **)(*param_2 + 0xa8))(param_2,&local_d8);
  if (cVar4 != '\0') {
    fVar7 = fVar19 * (float)uStack_c0;
    fVar18 = fVar17 * local_d8._4_4_;
    fVar20 = fVar17 * (float)uStack_d0;
    fVar17 = fVar21 * (float)local_b8 + fVar19 * (float)local_c8 + fVar17 * (float)local_d8;
    fVar19 = fVar21 * local_b8._4_4_ + fVar19 * local_c8._4_4_ + fVar18;
    fVar21 = fVar21 * (float)uStack_b0 + fVar7 + fVar20;
    fVar7 = fVar15 * (float)uStack_c0;
    fVar18 = fVar14 * local_d8._4_4_;
    fVar20 = fVar14 * (float)uStack_d0;
    fVar14 = fVar16 * (float)local_b8 + fVar15 * (float)local_c8 + fVar14 * (float)local_d8;
    fVar15 = fVar16 * local_b8._4_4_ + fVar15 * local_c8._4_4_ + fVar18;
    fVar16 = fVar16 * (float)uStack_b0 + fVar7 + fVar20;
    fVar7 = fStack_e0 * (float)local_b8 + (float)local_a8 + fStack_e4 * (float)local_c8 +
            local_e8 * (float)local_d8;
    fVar18 = fStack_e0 * local_b8._4_4_ + local_a8._4_4_ + fStack_e4 * local_c8._4_4_ +
             local_e8 * local_d8._4_4_;
    fVar20 = fStack_e0 * (float)uStack_b0 + (float)uStack_a0 + fStack_e4 * (float)uStack_c0 +
             local_e8 * (float)uStack_d0;
    fStack_dc = fStack_e0 * uStack_b0._4_4_ + uStack_a0._4_4_ + fStack_e4 * uStack_c0._4_4_ +
                local_e8 * uStack_d0._4_4_;
    local_e8 = fVar7;
    fStack_e4 = fVar18;
    fStack_e0 = fVar20;
  }
  if (param_3 != (float *)0x0) {
    fVar7 = fVar7 + *param_3;
    fVar18 = fVar18 + param_3[1];
    fVar20 = fVar20 + param_3[2];
  }
  lVar1 = param_2[0x5e];
  local_res10._0_4_ = (float)lVar1;
  fVar2 = (float)local_res10;
  local_res10._4_4_ = (float)((ulonglong)lVar1 >> 0x20);
  fVar3 = local_res10._4_4_;
  fVar11 = fVar17 * (float)local_res10 * _DAT_140493000;
  fVar12 = fVar19 * (float)local_res10 * _UNK_140493004;
  fVar13 = fVar21 * (float)local_res10 * _UNK_140493008;
  fVar8 = fVar14 * local_res10._4_4_ * _DAT_140493000;
  fVar9 = fVar15 * local_res10._4_4_ * _UNK_140493004;
  fVar10 = fVar16 * local_res10._4_4_ * _UNK_140493008;
  local_130 = fVar8 + fVar11 + fVar7;
  local_12c = fVar9 + fVar12 + fVar18;
  local_128 = fVar10 + fVar13 + fVar20;
  local_140 = fVar17 * (float)local_res10 * (float)DAT_140492dd0 + fVar8 + fVar7;
  local_13c = fVar19 * (float)local_res10 * DAT_140492dd0._4_4_ + fVar9 + fVar18;
  local_138 = fVar21 * (float)local_res10 * DAT_140492dd0._8_4_ + fVar10 + fVar20;
  local_150 = fVar14 * local_res10._4_4_ * (float)DAT_140492dd0 + fVar11 + fVar7;
  local_14c = fVar15 * local_res10._4_4_ * DAT_140492dd0._4_4_ + fVar12 + fVar18;
  local_148 = fVar16 * local_res10._4_4_ * DAT_140492dd0._8_4_ + fVar13 + fVar20;
  local_res10 = lVar1;
  uVar6 = FUN_14019d5a0(param_4,param_5,&local_130,&local_140,&local_150,&local_158,&local_res10);
  if ((float)local_res10 < 0.0) {
    uVar6 = 0;
  }
  else {
    local_154 = DAT_140492704 - local_154;
    param_6[2] = 0.0;
    *param_6 = local_158 * fVar2;
    param_6[1] = local_154 * fVar3;
  }
  return uVar6;
}

