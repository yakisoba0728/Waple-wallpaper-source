// Function: FUN_140399d30
// Addr: 140399d30
// Size: 318 bytes


void FUN_140399d30(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar8._4_4_ = (float)((ulonglong)param_2 >> 0x20);
  auVar8._0_4_ = auVar8._4_4_;
  auVar8._8_4_ = auVar8._4_4_;
  auVar8._12_4_ = auVar8._4_4_;
  auVar9._4_12_ = auVar8._4_12_;
  auVar9._0_4_ = auVar8._4_4_ * *(float *)(*(longlong *)(param_1 + 8) + 0x54) + DAT_1404926c0;
  fVar6 = (float)FUN_14041a5c0(auVar9._0_8_);
  fVar7 = (float)FUN_14041a5c0();
  puVar1 = (undefined8 *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar5 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if ((*(float *)(param_1 + 0x24) != *(float *)(param_1 + 0x2c)) ||
       (*(float *)(param_1 + 0x28) != *(float *)(param_1 + 0x30))) {
      uVar4 = uVar5;
      if (*(longlong *)(lVar2 + 0x38) != 0) {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 8);
      }
      (**(code **)(lVar2 + 0x18))
                (lVar2,uVar3,puVar1,*(float *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),uVar4
                );
    }
    if (*(longlong *)(lVar2 + 0x38) != 0) {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x20);
    }
    (**(code **)(lVar2 + 0x30))(lVar2,uVar3,puVar1,uVar5);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(float *)(param_1 + 0x2c) = (float)(int)fVar7;
  *(float *)(param_1 + 0x30) = (float)-(int)fVar6;
  return;
}

