// Function: FUN_1402293f0
// Addr: 1402293f0
// Size: 68 bytes


float FUN_1402293f0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_14007f680(param_1 + 0x1cd0);
  return (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x28)) *
         (float)(uVar1 >> 8) * DAT_1404926ac + *(float *)(param_1 + 0x28);
}

