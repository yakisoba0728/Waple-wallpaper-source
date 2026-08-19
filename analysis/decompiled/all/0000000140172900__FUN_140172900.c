// Function: FUN_140172900
// Addr: 140172900
// Size: 161 bytes


void FUN_140172900(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  for (plVar3 = *(longlong **)(param_1 + 0x68); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if (*(int *)(lVar2 + 0x100) == 0) {
      *(undefined4 *)(lVar2 + 0x100) = 1;
      *(undefined8 *)(lVar2 + 0x108) = param_2;
    }
  }
  if (*(char *)(param_1 + 0x138) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x138) = 0;
  func_0x00014028aff0(0x18);
  return;
}

