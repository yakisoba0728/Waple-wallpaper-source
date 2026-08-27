// Function: FUN_14013aee0
// Addr: 14013aee0
// Size: 47 bytes


undefined8 FUN_14013aee0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (param_1 != 0)) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1 + 8,1);
  }
  return 0;
}

