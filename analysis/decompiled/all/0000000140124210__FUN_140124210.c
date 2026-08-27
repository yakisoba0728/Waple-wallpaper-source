// Function: FUN_140124210
// Addr: 140124210
// Size: 101 bytes


void FUN_140124210(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *(char *)(param_1 + 0x35) = param_2;
  if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0xb0))();
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x7c) = iVar2;
    }
    plVar1 = *(longlong **)(param_1 + 0xa8);
    if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014012425a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xa8))(plVar1,0);
      return;
    }
    (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined4 *)(param_1 + 0x7c));
  }
  return;
}

