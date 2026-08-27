// Function: FUN_14036e080
// Addr: 14036e080
// Size: 219 bytes


byte * FUN_14036e080(byte *param_1,uint *param_2,byte *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (param_1[3] - 1) +
          (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000;
  if (-1 < iVar5) {
    iVar4 = 0;
    do {
      uVar3 = (uint)(iVar5 + iVar4) >> 1;
      lVar2 = (ulonglong)uVar3 * 0xc;
      pbVar1 = param_1 + lVar2 + 4;
      if (*param_2 <
          (uint)param_1[lVar2 + 5] * 0x10000 + (uint)param_1[lVar2 + 6] * 0x100 +
          (uint)param_1[lVar2 + 7] + (uint)*pbVar1 * 0x1000000) {
        iVar5 = uVar3 - 1;
      }
      else {
        if (*param_2 <=
            (uint)pbVar1[5] * 0x10000 + (uint)pbVar1[6] * 0x100 + (uint)pbVar1[4] * 0x1000000 +
            (uint)pbVar1[7]) {
          return pbVar1;
        }
        iVar4 = uVar3 + 1;
      }
    } while (iVar4 <= iVar5);
  }
  return param_3;
}

