// Function: FUN_1401732a0
// Addr: 1401732a0
// Size: 621 bytes


/* WARNING: Removing unreachable block (ram,0x0001401743d5) */
/* WARNING: Removing unreachable block (ram,0x0001401743e5) */
/* WARNING: Removing unreachable block (ram,0x0001401743f6) */
/* WARNING: Removing unreachable block (ram,0x0001401743fd) */
/* WARNING: Removing unreachable block (ram,0x00014017442c) */
/* WARNING: Removing unreachable block (ram,0x00014017441d) */

void FUN_1401732a0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar9 = (longlong *)0x0;
  uVar7 = *(uint *)(param_1 + 0x40) & 0xff;
  if (((uVar7 == 6) || (uVar7 == 7)) && (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0)) {
    bVar4 = false;
    plVar8 = *(longlong **)**(undefined8 **)(param_1 + 0x38);
  }
  else {
    bVar4 = true;
    plVar8 = plVar9;
  }
  if (((uVar7 == 6) || (uVar7 == 7)) && (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0)) {
    plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  while( true ) {
    bVar10 = bVar5;
    if (!bVar4) {
      bVar10 = plVar8 == plVar9;
    }
    if (bVar10) break;
    if ((char)plVar8[7] == '\a') {
      func_0x000140087560(plVar8 + 6,"value","");
      return;
    }
    plVar2 = (longlong *)plVar8[2];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar8 = plVar2;
      while (cVar1 == '\0') {
        plVar8 = (longlong *)*plVar8;
        cVar1 = *(char *)(*plVar8 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar8[1] + 0x19);
      plVar6 = (longlong *)plVar8[1];
      plVar2 = plVar8;
      while ((plVar8 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar8[2]))) {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar6 = (longlong *)plVar8[1];
        plVar2 = plVar8;
      }
    }
  }
  if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x50))();
    for (puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0xd8);
        puVar3 != *(undefined8 **)(param_1 + 0xd8); puVar3 = (undefined8 *)*puVar3) {
      if ((puVar3[2] != 0) && (*(int *)(puVar3[2] + 0x44) == 2)) {
        func_0x00014028aff0(0x10);
        return;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    func_0x00014028aff0(0x58);
    return;
  }
  return;
}

