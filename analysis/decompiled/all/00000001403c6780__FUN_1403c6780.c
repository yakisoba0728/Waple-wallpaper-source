// Function: FUN_1403c6780
// Addr: 1403c6780
// Size: 266 bytes


int FUN_1403c6780(byte *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar2;
  
  iVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar5 == 1) {
    uVar1 = (param_2 - param_1[3]) + (uint)param_1[2] * -0x100;
    if ((uint)param_1[5] + (uint)param_1[4] * 0x100 <= uVar1) {
      return (uint)(byte)DAT_14045dd10 * 0x100 + (uint)DAT_14045dd10._1_1_;
    }
    lVar3 = (ulonglong)uVar1 + 3;
    return (uint)param_1[lVar3 * 2] * 0x100 + (uint)param_1[lVar3 * 2 + 1];
  }
  if (iVar5 != 2) {
    return 0;
  }
  iVar6 = 0;
  iVar5 = (uint)param_1[2] * 0x100 + (param_1[3] - 1);
  if (-1 < iVar5) {
    do {
      uVar1 = (uint)(iVar5 + iVar6) >> 1;
      uVar2 = (ulonglong)uVar1;
      pbVar4 = param_1 + uVar2 * 6 + 4;
      if (param_2 < (uint)param_1[uVar2 * 6 + 5] + (uint)param_1[uVar2 * 6 + 4] * 0x100) {
        iVar5 = uVar1 - 1;
      }
      else {
        if (param_2 <= (uint)pbVar4[3] + (uint)pbVar4[2] * 0x100) goto LAB_1403c681c;
        iVar6 = uVar1 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  pbVar4 = &DAT_14045f0e8;
LAB_1403c681c:
  return (uint)pbVar4[4] * 0x100 + (uint)pbVar4[5];
}

