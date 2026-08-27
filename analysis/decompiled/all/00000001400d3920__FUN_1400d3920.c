// Function: FUN_1400d3920
// Addr: 1400d3920
// Size: 118 bytes


void FUN_1400d3920(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x20);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 8);
    lVar3 = param_1;
    if (*(char *)(param_1 + 0x58) != '\0') {
      lVar3 = lVar1;
    }
    (**(code **)(*plVar2 + 0x108))(plVar2,1,param_1 + 0x48,*(undefined8 *)(lVar3 + 0x50));
    if ((*(byte *)(param_1 + 0x28) & 0x40) == 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x1518);
      (**(code **)(*plVar2 + 0x88))
                (plVar2,0,0,*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16));
    }
    *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x28) = param_1;
  }
  return;
}

