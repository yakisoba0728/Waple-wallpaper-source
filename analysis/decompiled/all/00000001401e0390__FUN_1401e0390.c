// Function: FUN_1401e0390
// Addr: 1401e0390
// Size: 395 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401e0390(longlong *param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  float *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [112];
  
  local_b8 = _DAT_140492a60;
  uStack_b0 = _UNK_140492a68;
  local_a8 = _DAT_140492a90;
  uStack_a0 = _UNK_140492a98;
  local_98 = _DAT_140492b40;
  uStack_90 = _UNK_140492b48;
  local_88 = _DAT_140492de0;
  uStack_80 = _UNK_140492de8;
  if ((*param_3 & 8) == 0) {
    if ((*param_3 >> 9 & 1) != 0) {
      uVar1 = (**(code **)(*param_1 + 0x70))(_DAT_140492b40,*param_4);
      (**(code **)(*param_1 + 0x78))(param_1,uVar1,&local_b8);
    }
  }
  else {
    (**(code **)(*param_1 + 0x78))(_DAT_140492b40,*(undefined4 *)*param_4,&local_b8);
  }
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1);
  lVar3 = FUN_14005ecb0(local_78,uVar2,&local_b8);
  fVar4 = (float)FUN_14041c460();
  if (*(float *)(lVar3 + 0x18) * *(float *)(lVar3 + 0x18) +
      *(float *)(lVar3 + 0x28) * *(float *)(lVar3 + 0x28) < 0.0) {
    FUN_14041ad10();
  }
  fVar5 = (float)FUN_14041c460();
  auVar7._0_8_ = FUN_14041a9c0();
  auVar7._8_4_ = (undefined4)extraout_XMM0_Qb;
  auVar7._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  uVar2 = FUN_14041a2e0();
  auVar9._8_4_ = (int)extraout_XMM0_Qb_00;
  auVar9._0_8_ = uVar2;
  auVar9._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  auVar8._4_12_ = auVar7._4_12_;
  auVar10._4_12_ = auVar9._4_12_;
  auVar8._0_4_ = (float)auVar7._0_8_ * *(float *)(lVar3 + 0x20) -
                 (float)uVar2 * *(float *)(lVar3 + 0x24);
  auVar10._0_4_ =
       (float)uVar2 * *(float *)(lVar3 + 0x14) - (float)auVar7._0_8_ * *(float *)(lVar3 + 0x10);
  fVar6 = (float)FUN_14041c460(auVar8._0_8_,auVar10._0_8_);
  fVar5 = fVar5 * DAT_1404928d0;
  fVar4 = fVar4 * DAT_1404928d0;
  *param_5 = fVar6 * DAT_1404928d0;
  param_5[1] = fVar5;
  param_5[2] = fVar4;
  return;
}

