// Function: FUN_140056210
// Addr: 140056210
// Size: 10 bytes


undefined8 FUN_140056210(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  
  iVar5 = func_0x000140290e50(param_1 + 0x28);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x74) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  plVar6 = (longlong *)**(longlong **)(param_1 + 8);
  cVar2 = *(char *)((longlong)plVar6 + 0x19);
  while (cVar2 == '\0') {
    plVar3 = (longlong *)plVar6[9];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
    }
    plVar3 = (longlong *)plVar6[2];
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar3 + 0x19);
      plVar6 = plVar3;
      while (cVar2 == '\0') {
        plVar6 = (longlong *)*plVar6;
        cVar2 = *(char *)(*plVar6 + 0x19);
      }
    }
    else {
      cVar2 = *(char *)(plVar6[1] + 0x19);
      plVar4 = (longlong *)plVar6[1];
      plVar3 = plVar6;
      while ((plVar6 = plVar4, cVar2 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
        cVar2 = *(char *)(plVar6[1] + 0x19);
        plVar4 = (longlong *)plVar6[1];
        plVar3 = plVar6;
      }
    }
    cVar2 = *(char *)((longlong)plVar6 + 0x19);
  }
  piVar1 = (int *)(param_1 + 0x74);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    (*DAT_140426298)(param_1 + 0x38);
  }
  return 0;
}

