// Function: FUN_1400802c0
// Addr: 1400802c0
// Size: 48 bytes


undefined8 * FUN_1400802c0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 10) = 0x67452301;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0xb) = 0x98badcfe;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x10325476;
  *(undefined4 *)(param_1 + 0xc) = 0xc3d2e1f0;
  return param_1;
}

