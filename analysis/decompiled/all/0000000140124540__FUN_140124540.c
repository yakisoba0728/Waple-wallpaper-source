// Function: FUN_140124540
// Addr: 140124540
// Size: 43 bytes


undefined8 FUN_140124540(longlong param_1)

{
  int iVar1;
  
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 8))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

