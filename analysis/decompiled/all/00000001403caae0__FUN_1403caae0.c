// Function: FUN_1403caae0
// Addr: 1403caae0
// Size: 19 bytes


uint FUN_1403caae0(byte *param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)&DAT_14045dde0;
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
    uVar3 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
    if (uVar3 == 0) {
      pbVar2 = (byte *)&DAT_14045dde0;
    }
    else {
      pbVar2 = param_1 + uVar3;
    }
  }
  else {
    pbVar2 = (byte *)&DAT_14045dde0;
  }
  iVar1 = func_0x0001403c6850(pbVar2,param_2);
  if (iVar1 == 1) {
    return 2;
  }
  if (iVar1 == 2) {
    return 4;
  }
  if (iVar1 != 3) {
    return 0;
  }
  if (((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) &&
     (uVar3 = (uint)param_1[10] * 0x100 + (uint)param_1[0xb], uVar3 != 0)) {
    pbVar4 = param_1 + uVar3;
  }
  iVar1 = func_0x0001403c6850(pbVar4,param_2);
  return iVar1 << 8 | 8;
}

