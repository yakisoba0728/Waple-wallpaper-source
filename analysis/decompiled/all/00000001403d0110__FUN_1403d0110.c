// Function: FUN_1403d0110
// Addr: 1403d0110
// Size: 75 bytes


byte * FUN_1403d0110(byte *param_1)

{
  uint uVar1;
  
  if ((((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) &&
      (0x10002 < (param_1[2] + 0x100) * 0x100 + (uint)param_1[3])) &&
     (uVar1 = (uint)param_1[0xf] * 0x10000 + (uint)param_1[0x10] * 0x100 +
              (uint)param_1[0xe] * 0x1000000 + (uint)param_1[0x11], uVar1 != 0)) {
    return param_1 + uVar1;
  }
  return (byte *)&DAT_14045dde0;
}

