// Function: FUN_1400569d0
// Addr: 1400569d0
// Size: 326 bytes


void FUN_1400569d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  iVar3 = FUN_140290d80(param_1 + 0x28);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x74) != 0x7fffffff) {
    cVar1 = *(char *)(**(longlong **)(param_1 + 8) + 0x19);
    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    while (cVar1 == '\0') {
      plVar6 = (longlong *)plVar2[9];
      if (plVar6 != (longlong *)0x0) {
        plVar5 = plVar2 + 4;
        if (0xf < (ulonglong)plVar2[7]) {
          plVar5 = (longlong *)*plVar5;
        }
        if (plVar2[6] == 0xd) {
          lVar4 = *plVar5 + -0x6e6574786564656c;
          if ((lVar4 == 0) && (lVar4 = (ulonglong)*(uint *)(plVar5 + 1) - 0x6e6f6973, lVar4 == 0)) {
            lVar4 = (ulonglong)*(byte *)((longlong)plVar5 + 0xc) - 0x73;
          }
          if (lVar4 == 0) {
            (**(code **)(*plVar6 + 0x60))(plVar6,"logon",0,0);
          }
        }
      }
      plVar6 = (longlong *)plVar2[2];
      if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x19);
        while (cVar1 == '\0') {
          plVar6 = (longlong *)*plVar6;
          cVar1 = *(char *)(*plVar6 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar2[1] + 0x19);
        plVar5 = (longlong *)plVar2[1];
        while ((plVar6 = plVar5, cVar1 == '\0' && (plVar2 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar5 = (longlong *)plVar6[1];
          plVar2 = plVar6;
        }
      }
      plVar2 = plVar6;
      cVar1 = *(char *)((longlong)plVar6 + 0x19);
    }
    FUN_140290ea0(param_1 + 0x28);
    return;
  }
  *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

