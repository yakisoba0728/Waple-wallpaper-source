// Function: FUN_1402eb770
// Addr: 1402eb770
// Size: 81 bytes


undefined8 FUN_1402eb770(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  iVar2 = FUN_1402eb6e0(local_res10);
  uVar1 = local_res10[0];
  if (iVar2 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    iVar2 = FUN_1402eb700(local_res10);
    if (iVar2 == 0) {
      FUN_1402ec6a0();
      return 0;
    }
  }
  return 1;
}

