// Function: FUN_1400553f0
// Addr: 1400553f0
// Size: 14 bytes


void FUN_1400553f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_448 [304];
  undefined1 auStack_318 [728];
  
  plVar2 = *(longlong **)(param_1 + 8);
  cVar1 = *(char *)(*plVar2 + 0x19);
  plVar3 = (longlong *)*plVar2;
  while( true ) {
    if (cVar1 != '\0') {
      FUN_140056ef0(param_1 + 8,param_1 + 8,plVar2[1]);
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      plVar2[2] = (longlong)plVar2;
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_140015170(param_1 + 0x18);
      }
      uVar6 = FUN_140005fb0(auStack_448);
      uVar6 = FUN_140005df0(uVar6,"plugins");
                    /* WARNING: Subroutine does not return */
      FUN_1400166d0(auStack_318,uVar6);
    }
    if ((plVar3[9] != 0) || (plVar3[8] != 0)) break;
    plVar5 = (longlong *)plVar3[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      while (cVar1 == '\0') {
        plVar5 = (longlong *)*plVar5;
        cVar1 = *(char *)(*plVar5 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar3[1] + 0x19);
      plVar4 = (longlong *)plVar3[1];
      while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
      }
    }
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
    plVar3 = plVar5;
  }
  return;
}

