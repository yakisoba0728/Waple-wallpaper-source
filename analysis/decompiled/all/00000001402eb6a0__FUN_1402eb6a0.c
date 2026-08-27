// Function: FUN_1402eb6a0
// Addr: 1402eb6a0
// Size: 81 bytes


undefined8 FUN_1402eb6a0(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  iVar2 = FUN_1402eb610(local_res10);
  uVar1 = local_res10[0];
  if (iVar2 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    iVar2 = FUN_1402eb630(local_res10);
    if (iVar2 == 0) {
      FUN_1402ec5d0();
      return 0;
    }
  }
  return 1;
}

