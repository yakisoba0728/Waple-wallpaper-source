// Function: FUN_140184fd0
// Addr: 140184fd0
// Size: 40 bytes


void FUN_140184fd0(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  uint uVar2;
  
  fVar1 = (float)FUN_14041b1a0(*(float *)(param_1 + 0x110) * DAT_140492790);
  uVar2 = (uint)(DAT_1404927d4 / (fVar1 / (DAT_1404927d4 / *(float *)(param_3 + 0x14)))) ^
          DAT_1404930c0;
  *(float *)(param_2 + 0x30) =
       *(float *)(param_2 + 0x30) - (float)*(int *)(param_1 + 0x84) * *(float *)(param_1 + 0xf8);
  *(float *)(param_2 + 0x34) =
       *(float *)(param_2 + 0x34) - (float)*(int *)(param_1 + 0x88) * *(float *)(param_1 + 0xfc);
  *(uint *)(param_2 + 0x38) = uVar2;
  (**(code **)(**(longlong **)(param_1 + 0x1518) + 0x10))(*(longlong **)(param_1 + 0x1518),param_3);
  return;
}

