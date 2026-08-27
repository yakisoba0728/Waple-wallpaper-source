// Function: FUN_14025fac0
// Addr: 14025fac0
// Size: 36 bytes


void FUN_14025fac0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 200) + 0x88);
  *(ulonglong *)(param_1 + 0x2f0) = CONCAT44((float)iVar1,(float)iVar1);
  FUN_1401e6f50();
  return;
}

