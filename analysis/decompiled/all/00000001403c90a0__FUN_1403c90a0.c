// Function: FUN_1403c90a0
// Addr: 1403c90a0
// Size: 139 bytes


int FUN_1403c90a0(byte *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (param_2 == 0xffff) {
    return 0;
  }
  pbVar2 = (byte *)&DAT_14045dde0;
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
    uVar1 = (uint)param_1[6] * 0x100 + (uint)param_1[7];
    if (uVar1 == 0) {
      param_1 = (byte *)&DAT_14045dde0;
    }
    else {
      param_1 = param_1 + uVar1;
    }
  }
  else {
    param_1 = (byte *)&DAT_14045dde0;
  }
  if (param_2 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
    pbVar2 = param_1 + (ulonglong)param_2 * 6 + 2;
  }
  return (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 + (uint)*pbVar2 * 0x1000000 +
         (uint)pbVar2[3];
}

