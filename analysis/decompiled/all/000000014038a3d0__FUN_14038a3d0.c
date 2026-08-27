// Function: FUN_14038a3d0
// Addr: 14038a3d0
// Size: 74 bytes


undefined8 * FUN_14038a3d0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  if (param_2 < (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100) {
    pbVar1 = (byte *)(param_1 + ((ulonglong)param_2 + 3) * 2);
  }
  else {
    pbVar1 = (byte *)&DAT_14045dd10;
  }
  uVar2 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
  if (uVar2 == 0) {
    return &DAT_14045dd10;
  }
  return (undefined8 *)((ulonglong)uVar2 + param_1);
}

