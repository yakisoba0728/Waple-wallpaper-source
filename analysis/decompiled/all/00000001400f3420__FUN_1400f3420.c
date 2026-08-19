// Function: FUN_1400f3420
// Addr: 1400f3420
// Size: 83 bytes


undefined8 FUN_1400f3420(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = func_0x000140290e50(param_1 + 0xd8);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x124) != 0x7fffffff) {
    plVar2 = *(longlong **)(param_1 + 0x58);
    *(float *)(param_1 + 0x24) = param_2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xb0))(plVar2,SUB84((double)param_2,0));
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0xc0))
                (*(longlong **)(param_1 + 0x58),SUB84((double)param_2,0));
    }
    piVar1 = (int *)(param_1 + 0x124);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
      (*DAT_140426298)(param_1 + 0xe8);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

