// Function: FUN_1403a5c00
// Addr: 1403a5c00
// Size: 185 bytes


void FUN_1403a5c00(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  pbVar4 = param_1 + (iVar2 * 2 + 2);
  iVar6 = (uint)pbVar4[1] + (uint)*pbVar4 * 0x100;
  iVar3 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar3 = 0;
  }
  pbVar5 = pbVar4 + (iVar3 * 2 + 2);
  iVar3 = (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
  uVar1 = iVar3 * 2 + 2;
  FUN_14036e180(param_2,iVar2,param_1 + 2,iVar6,pbVar4 + 2,iVar3,pbVar5 + 2,
                (uint)pbVar5[uVar1] * 0x100 + (uint)pbVar5[(ulonglong)uVar1 + 1],
                pbVar5 + (ulonglong)uVar1 + 2,param_3);
  return;
}

