// Function: FUN_1403c8890
// Addr: 1403c8890
// Size: 276 bytes


byte * FUN_1403c8890(byte *param_1,uint param_2,undefined4 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (uVar2 < 0x74727566) {
    if (uVar2 != 0x74727565) {
      if (uVar2 == 0x100) {
        pbVar1 = (byte *)FUN_1403c89b0(param_1,(ulonglong)param_2);
        return pbVar1;
      }
      if ((uVar2 != 0x10000) && (uVar2 != 0x4f54544f)) {
        return (byte *)&DAT_14045dd10;
      }
    }
  }
  else {
    if (uVar2 == 0x74746366) {
      iVar3 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
      if ((iVar3 != 1) && (iVar3 != 2)) {
        return (byte *)&DAT_14045dd10;
      }
      pbVar1 = (byte *)&DAT_14045dd10;
      if (param_2 < (uint)param_1[9] * 0x10000 + (uint)param_1[10] * 0x100 +
                    (uint)param_1[8] * 0x1000000 + (uint)param_1[0xb]) {
        pbVar4 = param_1 + ((ulonglong)param_2 + 3) * 4;
      }
      else {
        pbVar4 = (byte *)&DAT_14045dd10;
      }
      uVar2 = (uint)pbVar4[3] +
              (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000;
      if (uVar2 != 0) {
        pbVar1 = param_1 + uVar2;
      }
      return pbVar1;
    }
    if (uVar2 != 0x74797031) {
      param_1 = (byte *)&DAT_14045dd10;
    }
  }
  return param_1;
}

