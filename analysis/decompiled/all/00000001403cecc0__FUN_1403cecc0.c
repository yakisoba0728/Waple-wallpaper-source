// Function: FUN_1403cecc0
// Addr: 1403cecc0
// Size: 115 bytes


undefined8 * FUN_1403cecc0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  if (param_2 < (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
                (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7)) {
    pbVar1 = (byte *)(param_1 + ((ulonglong)param_2 + 2) * 4);
  }
  else {
    pbVar1 = (byte *)&DAT_14045dd10;
  }
  uVar2 = (uint)pbVar1[1] * 0x10000 + (uint)pbVar1[2] * 0x100 + (uint)*pbVar1 * 0x1000000 +
          (uint)pbVar1[3];
  if (uVar2 == 0) {
    return &DAT_14045dd10;
  }
  return (undefined8 *)((ulonglong)uVar2 + param_1);
}

