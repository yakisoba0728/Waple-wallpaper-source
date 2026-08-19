// Function: FUN_1401f4c90
// Addr: 1401f4c90
// Size: 68 bytes


float FUN_1401f4c90(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_14007f680(param_1 + 0x1cd0);
  return (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x20)) *
         (float)(uVar1 >> 8) * DAT_1404926ac + *(float *)(param_1 + 0x20);
}

