// Function: FUN_1403b4880
// Addr: 1403b4880
// Size: 56 bytes


bool FUN_1403b4880(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    iVar1 = (**(code **)(param_1 + 0x20))();
    return iVar1 != 0;
  }
  iVar1 = (**(code **)(param_1 + 0x20))();
  return iVar1 != 0;
}

