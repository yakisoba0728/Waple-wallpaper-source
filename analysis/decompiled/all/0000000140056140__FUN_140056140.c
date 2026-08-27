// Function: FUN_140056140
// Addr: 140056140
// Size: 216 bytes


void FUN_140056140(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  iVar4 = FUN_140290d80(param_1 + 0x28);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x74) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  plVar5 = (longlong *)**(longlong **)(param_1 + 8);
  cVar1 = *(char *)((longlong)plVar5 + 0x19);
  while (cVar1 == '\0') {
    plVar2 = (longlong *)plVar5[9];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    }
    plVar2 = (longlong *)plVar5[2];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar5 = plVar2;
      while (cVar1 == '\0') {
        plVar5 = (longlong *)*plVar5;
        cVar1 = *(char *)(*plVar5 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar3 = (longlong *)plVar5[1];
      plVar2 = plVar5;
      while ((plVar5 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar3 = (longlong *)plVar5[1];
        plVar2 = plVar5;
      }
    }
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
  }
  FUN_140290ea0(param_1 + 0x28);
  return;
}

