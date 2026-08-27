// Function: FUN_140138a90
// Addr: 140138a90
// Size: 234 bytes


void FUN_140138a90(char *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*param_1 != '\0') {
    *param_1 = '\0';
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *(longlong *)(param_1 + 8) + 8;
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar2 = 0;
      }
      (**(code **)(*plVar1 + 0x38))(plVar1,lVar2);
    }
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 8));
    }
    plVar1 = *(longlong **)(param_1 + 0x60);
    for (plVar3 = *(longlong **)(param_1 + 0x58); plVar3 != plVar1; plVar3 = plVar3 + 2) {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x10))();
      }
    }
    if (*(longlong *)(param_1 + 0x58) != *(longlong *)(param_1 + 0x60)) {
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x58);
    }
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
      param_1[0x50] = '\0';
      param_1[0x51] = '\0';
      param_1[0x52] = '\0';
      param_1[0x53] = '\0';
      param_1[0x54] = '\0';
      param_1[0x55] = '\0';
      param_1[0x56] = '\0';
      param_1[0x57] = '\0';
    }
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
      param_1[0x48] = '\0';
      param_1[0x49] = '\0';
      param_1[0x4a] = '\0';
      param_1[0x4b] = '\0';
      param_1[0x4c] = '\0';
      param_1[0x4d] = '\0';
      param_1[0x4e] = '\0';
      param_1[0x4f] = '\0';
    }
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
      param_1[0x40] = '\0';
      param_1[0x41] = '\0';
      param_1[0x42] = '\0';
      param_1[0x43] = '\0';
      param_1[0x44] = '\0';
      param_1[0x45] = '\0';
      param_1[0x46] = '\0';
      param_1[0x47] = '\0';
    }
    if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
    }
  }
  return;
}

