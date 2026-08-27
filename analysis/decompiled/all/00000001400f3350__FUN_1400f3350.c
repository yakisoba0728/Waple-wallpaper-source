// Function: FUN_1400f3350
// Addr: 1400f3350
// Size: 152 bytes


void FUN_1400f3350(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = FUN_140290d80(param_1 + 0xd8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x124) != 0x7fffffff) {
    plVar1 = *(longlong **)(param_1 + 0x58);
    *(float *)(param_1 + 0x24) = param_2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xb0))(plVar1,SUB84((double)param_2,0));
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0xc0))
                (*(longlong **)(param_1 + 0x58),SUB84((double)param_2,0));
    }
    FUN_140290ea0(param_1 + 0xd8);
    return;
  }
  *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

