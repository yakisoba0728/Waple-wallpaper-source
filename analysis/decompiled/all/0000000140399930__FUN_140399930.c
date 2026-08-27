// Function: FUN_140399930
// Addr: 140399930
// Size: 597 bytes


void FUN_140399930(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = DAT_1404926c0;
  if (param_3 != 0) {
    uVar5 = 0;
    piVar1 = (int *)(param_1 + 0x20);
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 8);
      fVar7 = *(float *)(lVar2 + 0x54);
      FUN_14041a5c0(fVar7 * *(float *)(param_2 + 0xc + lVar6 * 0x18) + fVar4);
      fVar8 = *(float *)(lVar2 + 0x50);
      FUN_14041a5c0(fVar8 * *(float *)(param_2 + 8 + lVar6 * 0x18) + fVar4);
      FUN_14041a5c0(fVar7 * *(float *)(param_2 + 4 + lVar6 * 0x18) + fVar4);
      FUN_14041a5c0(fVar8 * *(float *)(param_2 + lVar6 * 0x18) + fVar4);
      fVar7 = (float)FUN_14041a5c0();
      fVar8 = (float)FUN_14041a5c0();
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      lVar2 = *(longlong *)(param_1 + 0x10);
      if (*piVar1 == 0) {
        (**(code **)(lVar2 + 0x10))(lVar2,uVar3,piVar1);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x30);
        *piVar1 = 1;
      }
      (**(code **)(lVar2 + 0x28))(lVar2,uVar3,piVar1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
      *(float *)(param_1 + 0x2c) = (float)(int)fVar8;
      *(float *)(param_1 + 0x30) = (float)-(int)fVar7;
    } while (uVar5 < param_3);
  }
  return;
}

