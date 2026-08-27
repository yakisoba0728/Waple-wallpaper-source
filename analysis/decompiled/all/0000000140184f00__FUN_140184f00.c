// Function: FUN_140184f00
// Addr: 140184f00
// Size: 248 bytes


void FUN_140184f00(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  uint uVar2;
  
  fVar1 = (float)FUN_14041b0d0(*(float *)(param_1 + 0x110) * DAT_1404926c0);
  uVar2 = (uint)(DAT_140492704 / (fVar1 / (DAT_140492704 / *(float *)(param_3 + 0x14)))) ^
          DAT_140492ff0;
  *(float *)(param_2 + 0x30) =
       *(float *)(param_2 + 0x30) - (float)*(int *)(param_1 + 0x84) * *(float *)(param_1 + 0xf8);
  *(float *)(param_2 + 0x34) =
       *(float *)(param_2 + 0x34) - (float)*(int *)(param_1 + 0x88) * *(float *)(param_1 + 0xfc);
  *(uint *)(param_2 + 0x38) = uVar2;
  (**(code **)(**(longlong **)(param_1 + 0x1518) + 0x10))(*(longlong **)(param_1 + 0x1518),param_3);
  return;
}

