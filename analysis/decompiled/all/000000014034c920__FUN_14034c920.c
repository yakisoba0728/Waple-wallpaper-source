// Function: FUN_14034c920
// Addr: 14034c920
// Size: 71 bytes


int FUN_14034c920(undefined1 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  if (iVar3 != 0) {
    pbVar2 = param_1 + 7;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 4;
      iVar4 = iVar4 + 1 + (uint)bVar1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar4;
}

