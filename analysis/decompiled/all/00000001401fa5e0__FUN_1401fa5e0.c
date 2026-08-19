// Function: FUN_1401fa5e0
// Addr: 1401fa5e0
// Size: 62 bytes


void FUN_1401fa5e0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x50))(plVar1,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0001401fa61a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1);
    return;
  }
  return;
}

