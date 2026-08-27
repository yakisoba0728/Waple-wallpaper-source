// Function: FUN_14032d190
// Addr: 14032d190
// Size: 204 bytes


undefined4 FUN_14032d190(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  lVar1 = *param_1;
  iVar4 = param_2[2];
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  if (param_2[4] != 0) {
    iVar4 = (iVar4 * param_2[4] + 0x24) / 0x48;
  }
  iVar4 = iVar4 + 0x20 >> 6;
  if (*param_2 == 0) {
    bVar5 = iVar4 == *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6;
    uVar3 = 0x17;
  }
  else {
    if (*param_2 != 1) {
      return 7;
    }
    bVar5 = iVar4 == *(int *)(lVar2 + 0x2c) + *(int *)(lVar2 + 0x28);
    uVar3 = 0;
    if (!bVar5) {
      uVar3 = 0x17;
    }
  }
  if (!bVar5) {
    return uVar3;
  }
  FUN_1402f4bf0(lVar1,0);
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar2 + 0x28) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar2 + 0x2c) * -0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar2 + 8) << 6;
  return 0;
}

