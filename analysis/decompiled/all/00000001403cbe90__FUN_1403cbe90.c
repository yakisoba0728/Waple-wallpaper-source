// Function: FUN_1403cbe90
// Addr: 1403cbe90
// Size: 104 bytes


byte * FUN_1403cbe90(byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  if (param_2 == 0xffff) {
    uVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (uVar2 != 0) {
      return param_1 + uVar2;
    }
  }
  else {
    if (param_2 < (uint)param_1[2] * 0x100 + (uint)param_1[3]) {
      pbVar1 = param_1 + (((ulonglong)param_2 + 1) * 3 + 1) * 2;
    }
    else {
      pbVar1 = (byte *)((longlong)&DAT_14045dde0 + 4);
    }
    uVar2 = (uint)*pbVar1 * 0x100 + (uint)pbVar1[1];
    if (uVar2 != 0) {
      return param_1 + uVar2;
    }
  }
  return &DAT_14045d278;
}

