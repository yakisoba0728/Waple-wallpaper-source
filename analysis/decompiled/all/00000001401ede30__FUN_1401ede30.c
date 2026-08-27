// Function: FUN_1401ede30
// Addr: 1401ede30
// Size: 578 bytes


void FUN_1401ede30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,longlong *param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  uint local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  uint local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  
  fVar4 = 0.0;
  local_res10._0_4_ = (float)param_2;
  local_res10._4_4_ = (float)((ulonglong)param_2 >> 0x20);
  if ((param_5 & 1) == 0) {
    uVar8 = 0;
    uVar7 = 0;
    fVar9 = (float)local_res10;
    fVar10 = local_res10._4_4_;
  }
  else {
    uVar7 = (uint)((float)local_res10 * DAT_1404926c0) ^ DAT_140492ff0;
    uVar8 = (uint)(local_res10._4_4_ * DAT_1404926c0) ^ DAT_140492ff0;
    fVar9 = (float)local_res10 * DAT_1404926c0;
    fVar10 = local_res10._4_4_ * DAT_1404926c0;
  }
  if ((param_5 & 2) == 0) {
    fVar5 = 0.0;
  }
  else {
    local_res18._0_4_ = (float)param_3;
    fVar4 = DAT_140492660 / (float)local_res18;
    local_res18._4_4_ = (float)((ulonglong)param_3 >> 0x20);
    fVar5 = DAT_140492660 / local_res18._4_4_;
  }
  local_res20._4_4_ = (float)((ulonglong)param_4 >> 0x20);
  local_res20._0_4_ = (float)param_4;
  fVar6 = local_res20._4_4_ - fVar5;
  fVar11 = (float)local_res20 - fVar4;
  if ((param_5 & 4) != 0) {
    fVar6 = DAT_140492704 - fVar6;
    fVar5 = DAT_140492704;
  }
  local_f8 = &local_res10;
  local_f0 = &local_res18;
  local_res10 = 0x700000000;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar2 = FUN_140098c30(&local_f8);
  puVar1 = (undefined8 *)*param_6;
  local_e0 = 0;
  local_cc = 0;
  local_b8 = 0;
  local_a4 = 0;
  local_108 = 0x20000;
  local_104 = 0x10001;
  local_100 = 0x30002;
  local_e8 = uVar7;
  local_e4 = fVar10;
  local_dc = fVar4;
  local_d8 = fVar5;
  local_d4 = fVar9;
  local_d0 = fVar10;
  local_c8 = fVar11;
  local_c4 = fVar5;
  local_c0 = uVar7;
  local_bc = uVar8;
  local_b4 = fVar4;
  local_b0 = fVar6;
  local_ac = fVar9;
  local_a8 = uVar8;
  local_a0 = fVar11;
  local_9c = fVar6;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x1518) + 0x40))
                    (*(longlong **)(param_1 + 0x1518),uVar2,&local_e8,4,&local_108,6,0,0,0);
  *param_6 = lVar3;
  return;
}

