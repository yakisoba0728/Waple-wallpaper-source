// Function: FUN_14040bea0
// Addr: 14040bea0
// Size: 164 bytes


void FUN_14040bea0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (ulonglong)*(uint *)(param_1 + 4) * 0x30 + *(longlong *)(param_1 + 8);
  iVar2 = *(uint *)(param_1 + 4) - param_2;
  if (iVar2 == 0) {
    *(int *)(param_1 + 4) = param_2;
    return;
  }
  do {
    iVar2 = iVar2 + -1;
    if (1 < *(int *)(lVar1 + -0x28) + 1U) {
      *(undefined4 *)(lVar1 + -0x24) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar1 + -0x20));
    }
    *(undefined4 *)(lVar1 + -0x24) = 0;
    *(undefined4 *)(lVar1 + -0x28) = 0;
    *(undefined8 *)(lVar1 + -0x20) = 0;
    lVar1 = lVar1 + -0x30;
  } while (iVar2 != 0);
  *(int *)(param_1 + 4) = param_2;
  return;
}

