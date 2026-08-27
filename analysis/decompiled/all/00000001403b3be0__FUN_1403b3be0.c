// Function: FUN_1403b3be0
// Addr: 1403b3be0
// Size: 309 bytes


void FUN_1403b3be0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  
  pbVar9 = param_1;
  for (iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1]; pbVar9 = pbVar9 + 2, iVar4 != 0;
      iVar4 = iVar4 + -1) {
    pbVar5 = (byte *)&DAT_14045dd10;
    if (iVar4 != 0) {
      pbVar5 = pbVar9;
    }
    uVar1 = (uint)pbVar5[1] + (uint)*pbVar5 * 0x100;
    if (uVar1 == 0) {
      pbVar5 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar5 = param_1 + uVar1;
    }
    iVar2 = (uint)pbVar5[1] + (uint)*pbVar5 * 0x100;
    pbVar6 = pbVar5 + (iVar2 * 2 + 2);
    iVar8 = (uint)pbVar6[1] + (uint)*pbVar6 * 0x100;
    iVar3 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar3 = 0;
    }
    pbVar7 = pbVar6 + (iVar3 * 2 + 2);
    iVar3 = (uint)pbVar7[1] + (uint)*pbVar7 * 0x100;
    uVar1 = iVar3 * 2 + 2;
    FUN_14036ecf0(param_2,iVar2,pbVar5 + 2,iVar8,pbVar6 + 2,iVar3,pbVar7 + 2,
                  (uint)pbVar7[uVar1] * 0x100 + (uint)pbVar7[(ulonglong)uVar1 + 1],
                  pbVar7 + (ulonglong)uVar1 + 2,param_3);
  }
  return;
}

