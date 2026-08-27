// Function: FUN_1401fa5d0
// Addr: 1401fa5d0
// Size: 78 bytes


void FUN_1401fa5d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 *in_stack_00000028;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x40))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*plVar1 + 0x48))();
      if (cVar2 == '\0') {
        *in_stack_00000028 = 1;
        return;
      }
    }
    *in_stack_00000028 = 0;
  }
  return;
}

