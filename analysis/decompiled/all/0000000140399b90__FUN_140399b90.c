// Function: FUN_140399b90
// Addr: 140399b90
// Size: 358 bytes


void FUN_140399b90(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = DAT_1404926c0;
  if (param_3 != 0) {
    uVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      fVar7 = (float)FUN_14041a5c0(*(float *)(lVar1 + 0x54) * *(float *)(param_2 + 4 + uVar6 * 8) +
                                   fVar3);
      fVar8 = (float)FUN_14041a5c0(*(float *)(lVar1 + 0x50) * *(float *)(param_2 + uVar6 * 8) +
                                   fVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x20) == 0) {
        uVar4 = 0;
        if (*(undefined8 **)(lVar1 + 0x38) != (undefined8 *)0x0) {
          uVar4 = **(undefined8 **)(lVar1 + 0x38);
        }
        (**(code **)(lVar1 + 0x10))
                  (lVar1,uVar2,param_1 + 0x20,*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),uVar4);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x20) = 1;
      }
      uVar4 = 0;
      if (*(longlong *)(lVar1 + 0x38) != 0) {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 8);
      }
      (**(code **)(lVar1 + 0x18))
                (lVar1,uVar2,param_1 + 0x20,(float)(int)fVar8,(float)-(int)fVar7,uVar4);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      *(float *)(param_1 + 0x2c) = (float)(int)fVar8;
      *(float *)(param_1 + 0x30) = (float)-(int)fVar7;
    } while (uVar5 < param_3);
  }
  return;
}

