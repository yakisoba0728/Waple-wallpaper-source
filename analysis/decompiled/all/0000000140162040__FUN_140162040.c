// Function: FUN_140162040
// Addr: 140162040
// Size: 47 bytes


void FUN_140162040(longlong *param_1,char param_2)

{
  longlong *plVar1;
  
  *(longlong *)(param_1[1] + 0x50) = *(longlong *)(param_1[1] + 0x50) + -8;
  if (param_2 == '\0') {
    return;
  }
  plVar1 = (longlong *)**(longlong **)(param_1[1] + 0x50);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140162063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))(plVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014016206a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}

