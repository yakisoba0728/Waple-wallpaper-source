// Function: FUN_14032a9c0
// Addr: 14032a9c0
// Size: 217 bytes


undefined4 FUN_14032a9c0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  lVar1 = *param_1;
  iVar3 = param_2[2];
  if (param_2[4] != 0) {
    iVar3 = (iVar3 * param_2[4] + 0x24) / 0x48;
  }
  iVar3 = iVar3 + 0x20 >> 6;
  if (*param_2 == 0) {
    bVar4 = iVar3 == *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6;
    uVar2 = 0x17;
  }
  else {
    if (*param_2 != 1) {
      return 7;
    }
    bVar4 = iVar3 == *(int *)(lVar1 + 0x150) + *(int *)(lVar1 + 0x154);
    uVar2 = 0;
    if (!bVar4) {
      uVar2 = 0x17;
    }
  }
  if (!bVar4) {
    return uVar2;
  }
  FUN_1402f4bf0(lVar1,0);
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x150) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x154) * -0x40;
  *(int *)(param_1 + 6) = (int)*(short *)(lVar1 + 0x170) << 6;
  return 0;
}

