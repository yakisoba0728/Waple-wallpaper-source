// Function: FUN_1403d0550
// Addr: 1403d0550
// Size: 118 bytes


int FUN_1403d0550(byte *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (uVar1 <= (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000
               + (uint)param_1[7]) {
    return (((uint)param_1[9] * 0x10000 + (uint)param_1[10] * 0x100 + (uint)param_1[8] * 0x1000000 +
            (uint)param_1[0xb]) - uVar1) + param_2;
  }
  return 0;
}

