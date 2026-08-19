// Function: FUN_1403ce520
// Addr: 1403ce520
// Size: 129 bytes


byte * FUN_1403ce520(byte *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
    uVar1 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
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
    pbVar2 = param_1 + ((ulonglong)param_2 + 1) * 6;
  }
  else {
    pbVar2 = (byte *)((longlong)&DAT_14045dde0 + 4);
  }
  uVar1 = (uint)pbVar2[1] + (uint)*pbVar2 * 0x100;
  if (uVar1 == 0) {
    return (byte *)&DAT_14045dde0;
  }
  return param_1 + uVar1;
}

