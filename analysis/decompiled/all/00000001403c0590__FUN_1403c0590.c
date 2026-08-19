// Function: FUN_1403c0590
// Addr: 1403c0590
// Size: 55 bytes


ulonglong FUN_1403c0590(byte *param_1,uint param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
    uVar2 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
    if (uVar2 == 0) {
      param_1 = (byte *)&DAT_14045dde0;
    }
    else {
      param_1 = param_1 + uVar2;
    }
  }
  else {
    param_1 = (byte *)&DAT_14045dde0;
  }
  iVar7 = 0;
  iVar6 = (param_1[1] - 1) + (uint)*param_1 * 0x100;
  pbVar3 = param_1;
  if (-1 < iVar6) {
    do {
      uVar2 = (uint)(iVar6 + iVar7) >> 1;
      lVar1 = (ulonglong)uVar2 * 6;
      uVar4 = (uint)param_1[lVar1 + 5] +
              (uint)param_1[lVar1 + 3] * 0x10000 + (uint)param_1[lVar1 + 4] * 0x100 +
              (uint)param_1[lVar1 + 2] * 0x1000000;
      pbVar3 = (byte *)0x0;
      iVar5 = (uint)(uVar4 < param_2) - (uint)(param_2 < uVar4);
      if (iVar5 < 0) {
        iVar6 = uVar2 - 1;
      }
      else {
        if (iVar5 < 1) {
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar2;
          }
          return 1;
        }
        iVar7 = uVar2 + 1;
      }
    } while (iVar7 <= iVar6);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0xffff;
  }
  return (ulonglong)pbVar3 & 0xffffffffffffff00;
}

