// Function: FUN_14015a460
// Addr: 14015a460
// Size: 101 bytes


void FUN_14015a460(longlong param_1)

{
  longlong *plVar1;
  undefined8 uStackX_8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_14015b480(param_1,*plVar1,plVar1);
      return;
    }
    *(undefined8 *)plVar1[1] = 0;
    if (*plVar1 != 0) {
      func_0x00014028b040(*plVar1,0x20);
      return;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    uStackX_8 = *(undefined8 *)(param_1 + 8);
    func_0x00014000f8a0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&uStackX_8);
  }
  return;
}

