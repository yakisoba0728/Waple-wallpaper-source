// Function: FUN_1403cbf00
// Addr: 1403cbf00
// Size: 113 bytes


byte * FUN_1403cbf00(byte *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
    return (byte *)&DAT_14045dd10;
  }
  pbVar2 = (byte *)&DAT_14045dd10;
  uVar1 = (uint)param_1[9] + (uint)param_1[8] * 0x100;
  if (uVar1 == 0) {
    param_1 = (byte *)&DAT_14045dd10;
  }
  else {
    param_1 = param_1 + uVar1;
  }
  if ((param_2 < (uint)*param_1 * 0x100 + (uint)param_1[1]) &&
     (uVar1 = (uint)param_1[(ulonglong)param_2 * 2 + 2] * 0x100 +
              (uint)param_1[(ulonglong)param_2 * 2 + 3], uVar1 != 0)) {
    pbVar2 = param_1 + uVar1;
  }
  return pbVar2;
}

