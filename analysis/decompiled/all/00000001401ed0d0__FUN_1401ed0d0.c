// Function: FUN_1401ed0d0
// Addr: 1401ed0d0
// Size: 2635 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ed0d0(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8;
  float fStackX_c;
  float local_res18;
  float local_res1c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  float local_228;
  float local_224;
  undefined4 local_220;
  float local_218;
  float local_214;
  float local_210;
  float local_208;
  float local_204;
  float local_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  longlong *local_188;
  longlong local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [224];
  
  lVar5 = param_1[0x19];
  plVar9 = (longlong *)
           (**(code **)(**(longlong **)(lVar5 + 0x1510) + 0x18))
                     (*(longlong **)(lVar5 + 0x1510),*param_3,*param_4);
  local_1e8 = _DAT_140492a60;
  uStack_1e0 = _UNK_140492a68;
  local_1d8 = _DAT_140492a90;
  uStack_1d0 = _UNK_140492a98;
  local_1c8 = _DAT_140492b40;
  uStack_1c0 = _UNK_140492b48;
  local_1b8 = _DAT_140492de0;
  uStack_1b0 = _UNK_140492de8;
  if ((param_3[1] & 8) == 0) {
    if (((uint)param_3[1] >> 9 & 1) != 0) {
      uVar8 = (**(code **)(*plVar9 + 0x70))(plVar9,param_4[1]);
      (**(code **)(*plVar9 + 0x78))(plVar9,uVar8,&local_1e8);
    }
  }
  else {
    (**(code **)(*plVar9 + 0x78))(plVar9,*(undefined4 *)param_4[1],&local_1e8);
  }
  uVar10 = (**(code **)(*plVar9 + 0x80))(plVar9);
  puVar11 = (undefined8 *)FUN_14005ecb0(&local_188,uVar10,&local_1e8);
  local_1e8 = *puVar11;
  uStack_1e0 = puVar11[1];
  local_1d8 = puVar11[2];
  uStack_1d0 = puVar11[3];
  local_1c8 = puVar11[4];
  uStack_1c0 = puVar11[5];
  local_1b8 = puVar11[6];
  uStack_1b0 = puVar11[7];
  local_148 = *(undefined8 *)(lVar5 + 0x11a0);
  uStack_140 = *(undefined8 *)(lVar5 + 0x11a8);
  local_138 = *(undefined8 *)(lVar5 + 0x11b0);
  uStack_130 = *(undefined8 *)(lVar5 + 0x11b8);
  local_128 = *(undefined8 *)(lVar5 + 0x11c0);
  uStack_120 = *(undefined8 *)(lVar5 + 0x11c8);
  local_118 = *(undefined8 *)(lVar5 + 0x11d0);
  uStack_110 = *(undefined8 *)(lVar5 + 0x11d8);
  local_268 = *(undefined8 *)(lVar5 + 0x1160);
  uStack_260 = *(undefined8 *)(lVar5 + 0x1168);
  local_258 = *(undefined8 *)(lVar5 + 0x1170);
  uStack_250 = *(undefined8 *)(lVar5 + 0x1178);
  local_248 = *(undefined8 *)(lVar5 + 0x1180);
  uStack_240 = *(undefined8 *)(lVar5 + 0x1188);
  local_238 = *(undefined8 *)(lVar5 + 0x1190);
  uStack_230 = *(undefined8 *)(lVar5 + 0x1198);
  if (((*(uint *)(lVar5 + 0x118) & 0x400) != 0) && ((*(byte *)(plVar9 + 0x24) & 0x80) != 0)) {
    FUN_140184f00(lVar5,&local_268,&local_148);
  }
  fVar15 = *(float *)((longlong)plVar9 + 0x17c);
  fVar16 = *(float *)(plVar9 + 0x2f);
  local_238 = CONCAT44(fVar16 * local_268._4_4_ + fVar15 * local_258._4_4_ + local_248._4_4_ * 0.0 +
                       local_238._4_4_,
                       fVar16 * (float)local_268 + fVar15 * (float)local_258 +
                       (float)local_248 * 0.0 + (float)local_238);
  uStack_230 = CONCAT44(fVar16 * uStack_260._4_4_ + fVar15 * uStack_250._4_4_ +
                        uStack_240._4_4_ * 0.0 + uStack_230._4_4_,
                        fVar16 * (float)uStack_260 + fVar15 * (float)uStack_250 +
                        (float)uStack_240 * 0.0 + (float)uStack_230);
  uVar10 = FUN_14005ecb0(&local_188,&local_148,&local_268);
  pfVar12 = (float *)FUN_14005ecb0(local_108,uVar10,&local_1e8);
  fVar6 = pfVar12[0xc];
  fVar7 = pfVar12[0xd];
  fVar15 = pfVar12[8];
  fVar16 = *pfVar12;
  fVar1 = pfVar12[4];
  fVar2 = pfVar12[1];
  fVar3 = pfVar12[5];
  fVar4 = pfVar12[9];
  fVar13 = pfVar12[3] * 0.0 + pfVar12[7] * 0.0 + pfVar12[0xb] * 0.0 + pfVar12[0xf];
  uVar10 = FUN_14005ecb0(local_108,&local_148,&local_268);
  pfVar12 = (float *)FUN_14005ecb0(&local_188,uVar10,&local_1e8);
  fVar14 = pfVar12[3] * DAT_1404928f8 + pfVar12[7] * 0.0 + pfVar12[0xb] * 0.0 + pfVar12[0xf];
  local_res8 = ((fVar16 * 0.0 + fVar1 * 0.0 + fVar15 * 0.0 + fVar6) / fVar13) * DAT_1404926c0 +
               DAT_1404926c0;
  fStackX_c = ((fVar2 * 0.0 + fVar3 * 0.0 + fVar4 * 0.0 + fVar7) / fVar13) * DAT_1404926c0 +
              DAT_1404926c0;
  local_res18 = ((*pfVar12 * DAT_1404928f8 + pfVar12[4] * 0.0 + pfVar12[8] * 0.0 + pfVar12[0xc]) /
                fVar14) * DAT_1404926c0 + DAT_1404926c0;
  local_res1c = ((pfVar12[1] * DAT_1404928f8 + pfVar12[5] * 0.0 + pfVar12[9] * 0.0 + pfVar12[0xd]) /
                fVar14) * DAT_1404926c0 + DAT_1404926c0;
  if (((*(uint *)(lVar5 + 0x118) & 0x400) == 0) || ((*(byte *)(param_1 + 0x24) & 0x80) == 0)) {
    local_268 = *(undefined8 *)(lVar5 + 0x1160);
    uStack_260 = *(undefined8 *)(lVar5 + 0x1168);
    local_258 = *(undefined8 *)(lVar5 + 0x1170);
    uStack_250 = *(undefined8 *)(lVar5 + 0x1178);
    local_248 = *(undefined8 *)(lVar5 + 0x1180);
    uStack_240 = *(undefined8 *)(lVar5 + 0x1188);
    fVar15 = *(float *)(param_1 + 0x2f);
    fVar16 = *(float *)((longlong)param_1 + 0x17c);
    local_238 = CONCAT44(*(float *)(lVar5 + 0x1164) * fVar15 + *(float *)(lVar5 + 0x1174) * fVar16 +
                         *(float *)(lVar5 + 0x1184) * 0.0 + *(float *)(lVar5 + 0x1194),
                         *(float *)(lVar5 + 0x1160) * *(float *)(param_1 + 0x2f) +
                         *(float *)(lVar5 + 0x1170) * *(float *)((longlong)param_1 + 0x17c) +
                         *(float *)(lVar5 + 0x1180) * _DAT_1404925c0 + *(float *)(lVar5 + 0x1190));
    uStack_230 = CONCAT44(*(float *)(lVar5 + 0x116c) * fVar15 + *(float *)(lVar5 + 0x117c) * fVar16
                          + *(float *)(lVar5 + 0x118c) * 0.0 + *(float *)(lVar5 + 0x119c),
                          *(float *)(lVar5 + 0x1168) * fVar15 + *(float *)(lVar5 + 0x1178) * fVar16
                          + *(float *)(lVar5 + 0x1188) * 0.0 + *(float *)(lVar5 + 0x1198));
  }
  else {
    if ((*(byte *)(plVar9 + 0x24) & 0x80) == 0) {
      FUN_140184f00(lVar5,&local_268,&local_148);
    }
    fVar16 = *(float *)(param_1 + 0x2f) - *(float *)(plVar9 + 0x2f);
    fVar15 = *(float *)((longlong)param_1 + 0x17c) - *(float *)((longlong)plVar9 + 0x17c);
    local_238 = CONCAT44(local_268._4_4_ * fVar16 + local_258._4_4_ * fVar15 + local_248._4_4_ * 0.0
                         + local_238._4_4_,
                         (float)local_268 * fVar16 + (float)local_258 * fVar15 +
                         (float)local_248 * 0.0 + (float)local_238);
    uStack_230 = CONCAT44(uStack_260._4_4_ * fVar16 + uStack_250._4_4_ * fVar15 +
                          uStack_240._4_4_ * 0.0 + uStack_230._4_4_,
                          (float)uStack_260 * fVar16 + (float)uStack_250 * fVar15 +
                          (float)uStack_240 * 0.0 + (float)uStack_230);
  }
  local_178 = &local_268;
  local_170 = &local_148;
  local_188 = param_1;
  local_180 = lVar5;
  FUN_1401edb20(&local_188,&local_res8,local_1a8,&local_218);
  FUN_1401edb20(&local_188,&local_res18,local_1f8,local_198);
  fVar16 = DAT_140492704 / *(float *)(param_1 + 0x5e);
  local_res8 = 1.0;
  fStackX_c = 1.0;
  local_220 = 0;
  fVar15 = DAT_1404929b8 / *(float *)((longlong)param_1 + 0x2f4);
  local_228 = fVar16;
  local_224 = fVar15;
  uVar10 = (**(code **)(*param_1 + 0x80))(param_1);
  FUN_1401e5dd0(&local_208,uVar10,local_1a8,&local_218,&local_228,CONCAT44(fStackX_c,local_res8));
  local_res8 = 1.0;
  fStackX_c = 1.0;
  local_220 = 0;
  local_228 = fVar16;
  local_224 = fVar15;
  uVar10 = (**(code **)(*param_1 + 0x80))(param_1);
  FUN_1401e5dd0(&local_218,uVar10,local_1f8,local_198,&local_228,CONCAT44(fStackX_c,local_res8));
  local_218 = local_218 - local_208;
  local_214 = local_214 - local_204;
  fVar15 = local_218 * local_218 + local_214 * local_214 +
           (local_210 - local_200) * (local_210 - local_200);
  if (fVar15 < 0.0) {
    fVar15 = (float)FUN_14041ad10();
  }
  else {
    fVar15 = SQRT(fVar15);
  }
  if (fVar15 <= DAT_1404925e0) {
    local_218 = 0.0;
    local_214 = 0.0;
  }
  else {
    local_218 = local_218 / fVar15;
    local_214 = local_214 / fVar15;
  }
  fVar15 = (float)((uint)local_218 ^ DAT_140492ff0);
  param_5[6] = local_208 + 0.0;
  param_5[7] = local_204 + 0.0;
  param_5[1] = local_214;
  param_5[3] = local_214;
  param_5[4] = fVar15;
  *param_5 = local_218;
  param_5[2] = 0.0;
  param_5[5] = 0.0;
  param_5[8] = 1.0;
  return;
}

