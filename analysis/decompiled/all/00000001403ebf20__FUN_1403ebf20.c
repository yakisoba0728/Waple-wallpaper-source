// Function: FUN_1403ebf20
// Addr: 1403ebf20
// Size: 282 bytes


bool FUN_1403ebf20(byte *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) &&
      (0x10001 < (param_1[2] + 0x100) * 0x100 + (uint)param_1[3])) &&
     (uVar2 = (uint)param_1[0xc] * 0x100 + (uint)param_1[0xd], uVar2 != 0)) {
    param_1 = param_1 + uVar2;
  }
  else {
    param_1 = (byte *)&DAT_14045dd10;
  }
  pbVar4 = (byte *)&DAT_14045dd10;
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
    if (param_2 < (uint)param_1[3] + (uint)param_1[2] * 0x100) {
      pbVar3 = param_1 + ((ulonglong)param_2 + 1) * 4;
    }
    else {
      pbVar3 = (byte *)&DAT_14045dd10;
    }
    uVar2 = (uint)pbVar3[3] +
            (uint)pbVar3[1] * 0x10000 + (uint)pbVar3[2] * 0x100 + (uint)*pbVar3 * 0x1000000;
    if (uVar2 != 0) {
      pbVar4 = param_1 + uVar2;
    }
    iVar1 = (uint)pbVar4[1] + (uint)*pbVar4 * 0x100;
    if (iVar1 == 1) {
      iVar1 = FUN_1403c70f0(pbVar4,param_3);
      return iVar1 != -1;
    }
    if (iVar1 == 2) {
      iVar1 = FUN_1403c7170(pbVar4,param_3);
      return iVar1 != -1;
    }
    return false;
  }
  return false;
}

