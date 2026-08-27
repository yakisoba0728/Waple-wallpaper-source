// Function: FUN_1403c91d0
// Addr: 1403c91d0
// Size: 100 bytes


byte * FUN_1403c91d0(byte *param_1)

{
  uint uVar1;
  
  if ((((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) &&
      (0x10000 < (param_1[2] + 0x100) * 0x100 + (uint)param_1[3])) &&
     (uVar1 = (uint)param_1[0xb] * 0x10000 + (uint)param_1[0xc] * 0x100 +
              (uint)param_1[10] * 0x1000000 + (uint)param_1[0xd], uVar1 != 0)) {
    return param_1 + uVar1;
  }
  return (byte *)&DAT_14045dd10;
}

