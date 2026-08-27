// Function: FUN_1402f6e00
// Addr: 1402f6e00
// Size: 168 bytes


longlong FUN_1402f6e00(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [4];
  int local_resc;
  
  plVar7 = *(longlong **)(param_1 + 0x40);
  if (plVar7 != (longlong *)0x0) {
    plVar1 = plVar7 + *(int *)(param_1 + 0x38);
    for (; plVar7 < plVar1; plVar7 = plVar7 + 1) {
      plVar2 = (longlong *)*plVar7;
      if ((((*(short *)((longlong)plVar2 + 0xc) == 0) && (*(short *)((longlong)plVar2 + 0xe) == 5))
          && (plVar2 != (longlong *)0x0)) && (*plVar2 != 0)) {
        plVar3 = *(longlong **)(*plVar2 + 0x90);
        pcVar4 = *(code **)(*plVar3 + 0x30);
        if (((pcVar4 != (code *)0x0) &&
            (puVar6 = (undefined8 *)(*pcVar4)(plVar3,"tt-cmaps"), puVar6 != (undefined8 *)0x0)) &&
           ((iVar5 = (*(code *)*puVar6)(plVar2,local_res8), iVar5 == 0 && (local_resc == 0xe)))) {
          return *plVar7;
        }
      }
    }
  }
  return 0;
}

