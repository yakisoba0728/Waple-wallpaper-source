// Function: FUN_140121620
// Addr: 140121620
// Size: 88 bytes


undefined8 FUN_140121620(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xb0) != 3) {
    return 0xc00d36b2;
  }
  if ((*(longlong **)(param_1 + 0x88) == (longlong *)0x0) || (*(longlong *)(param_1 + 0x98) == 0)) {
    uVar1 = 0x8000ffff;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x50))();
    if (-1 < (int)uVar1) {
      *(undefined4 *)(param_1 + 0xb0) = 4;
      return uVar1;
    }
  }
  return uVar1;
}

