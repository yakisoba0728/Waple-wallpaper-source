// Function: FUN_1401f4bc0
// Addr: 1401f4bc0
// Size: 68 bytes


float FUN_1401f4bc0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = FUN_14007f5b0(param_1 + 0x1cd0);
  return (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x20)) *
         (float)(uVar1 >> 8) * DAT_1404925dc + *(float *)(param_1 + 0x20);
}

