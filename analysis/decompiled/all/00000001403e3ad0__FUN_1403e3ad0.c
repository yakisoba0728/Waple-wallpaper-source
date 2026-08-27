// Function: FUN_1403e3ad0
// Addr: 1403e3ad0
// Size: 171 bytes


void FUN_1403e3ad0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 *puVar5;
  
  *param_1 = param_2;
  param_1[1] = 0;
  puVar5 = &DAT_14045f0e8;
  iVar4 = (uint)*(byte *)(param_2 + 2) * 0x100 + (uint)*(byte *)(param_2 + 3);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    pbVar3 = &DAT_14045f0e8;
    if (iVar4 != 0) {
      pbVar3 = (byte *)(param_2 + 4);
    }
    iVar4 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  }
  *(int *)(param_1 + 2) = iVar4;
  iVar4 = (uint)*(byte *)(param_2 + 2) * 0x100 + (uint)*(byte *)(param_2 + 3);
  bVar1 = DAT_14045f0e8;
  bVar2 = DAT_14045f0e9;
  if (iVar4 != 0) {
    puVar5 = (undefined1 *)(param_2 + 4);
    bVar1 = *(byte *)(param_2 + 4);
    bVar2 = *(byte *)(param_2 + 5);
  }
  if ((uint)(byte)puVar5[3] + (uint)(byte)puVar5[2] * 0x100 < (uint)bVar1 * 0x100 + (uint)bVar2) {
    *(int *)(param_1 + 1) = iVar4;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}

