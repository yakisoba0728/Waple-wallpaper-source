// Function: FUN_140229320
// Addr: 140229320
// Size: 68 bytes


float FUN_140229320(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_14007f5b0(param_1 + 0x1cd0);
  return (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x28)) *
         (float)(uVar1 >> 8) * DAT_1404925dc + *(float *)(param_1 + 0x28);
}

