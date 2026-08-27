// Function: FUN_14034f190
// Addr: 14034f190
// Size: 67 bytes


undefined4 FUN_14034f190(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1] << 2;
  FUN_1403506c0(param_2,(iVar1 << 2) >> 8,iVar2 >> 8);
  *(int *)(param_2 + 0x48) = iVar1 << 2;
  *(int *)(param_2 + 0x4c) = iVar2;
  return *(undefined4 *)(param_2 + 0x24);
}

