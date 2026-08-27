// Function: FUN_1403c9060
// Addr: 1403c9060
// Size: 497 bytes


byte * FUN_1403c9060(byte *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if ((param_3 != 0xffffffff) &&
     (iVar1 = (uint)*param_1 * 0x100 + (uint)param_1[1],
     0x10000 < (iVar1 * 0x100 + (uint)param_1[2]) * 0x100 + (uint)param_1[3])) {
    pbVar7 = (byte *)&DAT_14045dd10;
    if (iVar1 == 1) {
      uVar5 = (uint)param_1[0xb] * 0x10000 + (uint)param_1[0xc] * 0x100 +
              (uint)param_1[10] * 0x1000000 + (uint)param_1[0xd];
      if (uVar5 == 0) {
        pbVar3 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar3 = param_1 + uVar5;
      }
    }
    else {
      pbVar3 = (byte *)&DAT_14045dd10;
    }
    if (param_3 < (uint)pbVar3[5] * 0x10000 + (uint)pbVar3[6] * 0x100 + (uint)pbVar3[4] * 0x1000000
                  + (uint)pbVar3[7]) {
      pbVar6 = pbVar3 + (ulonglong)param_3 * 8 + 0xc;
    }
    else {
      pbVar6 = (byte *)((longlong)&DAT_14045dd10 + 4);
    }
    uVar5 = (uint)pbVar6[3] +
            (uint)pbVar6[1] * 0x10000 + (uint)pbVar6[2] * 0x100 + (uint)*pbVar6 * 0x1000000;
    if (uVar5 == 0) {
      pbVar3 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar3 = pbVar3 + uVar5;
    }
    uVar4 = 0;
    uVar5 = (uint)pbVar3[5] + (uint)pbVar3[4] * 0x100;
    if (uVar5 != 0) {
      do {
        if ((uint)pbVar3[uVar4 * 6 + 6] * 0x100 + (uint)pbVar3[uVar4 * 6 + 7] == param_2) {
          uVar5 = (uint)pbVar3[uVar4 * 6 + 9] * 0x10000 + (uint)pbVar3[uVar4 * 6 + 10] * 0x100 +
                  (uint)pbVar3[uVar4 * 6 + 8] * 0x1000000 + (uint)pbVar3[uVar4 * 6 + 0xb];
          if (uVar5 != 0) {
            pbVar7 = pbVar3 + uVar5;
          }
          if (pbVar7 != (byte *)0x0) {
            return pbVar7;
          }
          break;
        }
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 < uVar5);
    }
  }
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
    uVar5 = (uint)param_1[7] + (uint)param_1[6] * 0x100;
    if (uVar5 == 0) {
      param_1 = (byte *)&DAT_14045dd10;
    }
    else {
      param_1 = param_1 + uVar5;
    }
  }
  else {
    param_1 = (byte *)&DAT_14045dd10;
  }
  if (param_2 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
    pbVar7 = param_1 + ((ulonglong)param_2 + 1) * 6;
  }
  else {
    pbVar7 = (byte *)((longlong)&DAT_14045dd10 + 4);
  }
  uVar5 = (uint)pbVar7[1] + (uint)*pbVar7 * 0x100;
  if (uVar5 == 0) {
    return (byte *)&DAT_14045dd10;
  }
  return param_1 + uVar5;
}

