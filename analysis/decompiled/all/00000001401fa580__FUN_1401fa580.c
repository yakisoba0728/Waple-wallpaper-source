// Function: FUN_1401fa580
// Addr: 1401fa580
// Size: 71 bytes


void FUN_1401fa580(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0xec) != '\0') {
      *(undefined1 *)(param_1 + 0xf4) = 0;
    }
    (**(code **)(*plVar1 + 0x30))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001401fa5bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,0);
    return;
  }
  return;
}

