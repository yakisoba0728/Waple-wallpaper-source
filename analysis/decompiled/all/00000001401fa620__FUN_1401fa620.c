// Function: FUN_1401fa620
// Addr: 1401fa620
// Size: 40 bytes


void FUN_1401fa620(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *in_stack_00000028;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x58))();
    *in_stack_00000028 = uVar2;
  }
  return;
}

