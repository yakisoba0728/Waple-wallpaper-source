// Function: FUN_14040bdf0
// Addr: 14040bdf0
// Size: 164 bytes


void FUN_14040bdf0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 4) * 0x28;
  iVar2 = *(uint *)(param_1 + 4) - param_2;
  if (iVar2 == 0) {
    *(int *)(param_1 + 4) = param_2;
    return;
  }
  do {
    iVar2 = iVar2 + -1;
    if (1 < *(int *)(lVar1 + -0x20) + 1U) {
      *(undefined4 *)(lVar1 + -0x1c) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar1 + -0x18));
    }
    *(undefined4 *)(lVar1 + -0x1c) = 0;
    *(undefined4 *)(lVar1 + -0x20) = 0;
    *(undefined8 *)(lVar1 + -0x18) = 0;
    lVar1 = lVar1 + -0x28;
  } while (iVar2 != 0);
  *(int *)(param_1 + 4) = param_2;
  return;
}

