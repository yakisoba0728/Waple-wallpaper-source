// Function: FUN_1401e5dd0
// Addr: 1401e5dd0
// Size: 695 bytes


float * FUN_1401e5dd0(float *param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5
                     ,undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 local_res8 [8];
  float local_res18;
  float local_res1c;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  
  FUN_14005f730(&local_b8);
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = *param_3;
  local_d0 = local_b8 * fVar3 + local_a8 * fVar1 + local_98 * fVar2 + local_88;
  fVar6 = param_4[2];
  fVar4 = *param_4;
  local_cc = local_b4 * fVar3 + local_a4 * fVar1 + local_94 * fVar2 + local_84;
  fVar5 = param_4[1];
  local_c8 = local_b0 * fVar3 + local_a0 * fVar1 + local_90 * fVar2 + local_80;
  local_e0 = fVar4 * local_b8 + fVar5 * local_a8 + fVar6 * local_98 + local_88 * 0.0;
  local_dc = fVar4 * local_b4 + fVar5 * local_a4 + fVar6 * local_94 + local_84 * 0.0;
  local_108 = 0;
  local_d8 = fVar4 * local_b0 + fVar5 * local_a0 + fVar6 * local_90 + local_80 * 0.0;
  local_104 = 0x3f800000;
  local_fc = 0x3f800000;
  local_f4 = 0;
  local_f0 = 0;
  local_e8 = 0;
  FUN_14019d5a0(&local_d0,&local_e0,&local_f0,&local_fc,&local_108,&local_res18,local_res8);
  fVar6 = DAT_1404926c0;
  local_res18 = local_res18 - DAT_1404926c0;
  fVar1 = param_5[1];
  local_res1c = local_res1c - DAT_1404926c0;
  fVar2 = *param_5;
  fVar3 = param_5[2];
  param_1[2] = 0.0;
  fVar6 = fVar3 * 0.0 * 0.0 + fVar6;
  *param_1 = (float)param_6 * (local_res18 * fVar2 + local_res1c * fVar1 * 0.0 + fVar6);
  param_1[1] = param_6._4_4_ * (local_res18 * fVar2 * 0.0 + local_res1c * fVar1 + fVar6);
  return param_1;
}

