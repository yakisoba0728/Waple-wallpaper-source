// Function: FUN_1402f0060
// Addr: 1402f0060
// Size: 53 bytes


uint FUN_1402f0060(longlong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) + 0x18))();
    if (*(uint *)(param_1 + 0x10) <= uVar1) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

