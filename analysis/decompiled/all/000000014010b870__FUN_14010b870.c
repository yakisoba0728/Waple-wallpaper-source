// Function: FUN_14010b870
// Addr: 14010b870
// Size: 141 bytes


void FUN_14010b870(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xb0);
  for (plVar3 = *(longlong **)(param_1 + 0xa8); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    (**(code **)(**(longlong **)(lVar2 + 8) + 8))();
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x10);
      thunk_FUN_14028af80(lVar2,0x30);
    }
  }
  if (*(longlong *)(param_1 + 0xa8) != *(longlong *)(param_1 + 0xb0)) {
    *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xa8);
  }
  return;
}

