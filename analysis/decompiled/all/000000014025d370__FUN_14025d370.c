// Function: FUN_14025d370
// Addr: 14025d370
// Size: 106 bytes


void FUN_14025d370(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_14049284c;
  *param_2 = *(undefined4 *)(param_1 + 0x300);
  param_2[1] = *(float *)(param_1 + 0x304) * fVar1;
  param_2[2] = *(undefined4 *)(param_1 + 0x304);
  param_2[3] = *(float *)(param_1 + 0x304) * fVar1;
  param_2[4] = *(undefined4 *)(param_1 + 0x308);
  fVar2 = *(float *)(param_1 + 0x308) * DAT_140492740;
  fVar1 = *(float *)(param_1 + 0x304) * fVar1;
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  param_2[5] = fVar2;
  return;
}

