// Function: FUN_140356440
// Addr: 140356440
// Size: 8 bytes


void FUN_140356440(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1 + param_1[2];
  param_1[0xc] = param_1[6];
  iVar1 = param_1[4] + param_1[2];
  iVar3 = param_1[6] + param_1[4];
  iVar2 = iVar3 + iVar1;
  param_1[10] = iVar3 / 2;
  param_1[8] = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  param_1[2] = iVar4 / 2;
  iVar1 = iVar1 + iVar4;
  param_1[4] = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  iVar4 = param_1[1] + param_1[3];
  param_1[6] = (int)(iVar1 + iVar2 + (iVar1 + iVar2 >> 0x1f & 7U)) >> 3;
  param_1[0xd] = param_1[7];
  iVar3 = param_1[5] + param_1[3];
  iVar2 = param_1[5] + param_1[7];
  iVar1 = iVar2 + iVar3;
  iVar3 = iVar3 + iVar4;
  param_1[0xb] = iVar2 / 2;
  param_1[9] = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  param_1[3] = iVar4 / 2;
  param_1[5] = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
  param_1[7] = (int)(iVar3 + iVar1 + (iVar3 + iVar1 >> 0x1f & 7U)) >> 3;
  return;
}

