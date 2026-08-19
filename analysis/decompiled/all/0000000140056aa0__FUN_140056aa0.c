// Function: FUN_140056aa0
// Addr: 140056aa0
// Size: 72 bytes


undefined8 FUN_140056aa0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  iVar4 = func_0x000140290e50(param_1 + 0x28);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x74) != 0x7fffffff) {
    cVar2 = *(char *)(**(longlong **)(param_1 + 8) + 0x19);
    plVar3 = (longlong *)**(longlong **)(param_1 + 8);
    while (cVar2 == '\0') {
      plVar7 = (longlong *)plVar3[9];
      if (plVar7 != (longlong *)0x0) {
        plVar6 = plVar3 + 4;
        if (0xf < (ulonglong)plVar3[7]) {
          plVar6 = (longlong *)*plVar6;
        }
        if (plVar3[6] == 0xd) {
          lVar5 = *plVar6 + -0x6e6574786564656c;
          if ((lVar5 == 0) && (lVar5 = (ulonglong)*(uint *)(plVar6 + 1) - 0x6e6f6973, lVar5 == 0)) {
            lVar5 = (ulonglong)*(byte *)((longlong)plVar6 + 0xc) - 0x73;
          }
          if (lVar5 == 0) {
            (**(code **)(*plVar7 + 0x60))(plVar7,"logon",0,0);
          }
        }
      }
      plVar7 = (longlong *)plVar3[2];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar7 + 0x19);
        while (cVar2 == '\0') {
          plVar7 = (longlong *)*plVar7;
          cVar2 = *(char *)(*plVar7 + 0x19);
        }
      }
      else {
        cVar2 = *(char *)(plVar3[1] + 0x19);
        plVar6 = (longlong *)plVar3[1];
        while ((plVar7 = plVar6, cVar2 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
          cVar2 = *(char *)(plVar7[1] + 0x19);
          plVar6 = (longlong *)plVar7[1];
          plVar3 = plVar7;
        }
      }
      plVar3 = plVar7;
      cVar2 = *(char *)((longlong)plVar7 + 0x19);
    }
    piVar1 = (int *)(param_1 + 0x74);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
      (*DAT_140426298)(param_1 + 0x38);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

