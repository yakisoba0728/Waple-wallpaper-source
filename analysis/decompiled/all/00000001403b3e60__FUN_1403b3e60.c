// Function: FUN_1403b3e60
// Addr: 1403b3e60
// Size: 182 bytes


void FUN_1403b3e60(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar4 = param_1;
  for (iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1]; pbVar4 = pbVar4 + 2, iVar3 != 0;
      iVar3 = iVar3 + -1) {
    pbVar5 = (byte *)&DAT_14045dd10;
    if (iVar3 != 0) {
      pbVar5 = pbVar4;
    }
    uVar1 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
    if (uVar1 == 0) {
      pbVar5 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar5 = param_1 + uVar1;
    }
    iVar2 = (uint)pbVar5[1] + (uint)*pbVar5 * 0x100;
    uVar1 = iVar2 * 2 - 2;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    FUN_1403726e0(param_2,iVar2,pbVar5 + 4,(uint)pbVar5[2] * 0x100 + (uint)pbVar5[3],
                  pbVar5 + (ulonglong)uVar1 + 4,param_3);
  }
  return;
}

