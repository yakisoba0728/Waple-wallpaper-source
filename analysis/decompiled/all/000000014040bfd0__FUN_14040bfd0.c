// Function: FUN_14040bfd0
// Addr: 14040bfd0
// Size: 290 bytes


void FUN_14040bfd0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (ulonglong)*(uint *)(param_1 + 4) * 0x260 + *(longlong *)(param_1 + 8);
  iVar2 = *(uint *)(param_1 + 4) - param_2;
  if (iVar2 == 0) {
    *(int *)(param_1 + 4) = param_2;
    return;
  }
  do {
    iVar2 = iVar2 + -1;
    if (1 < *(int *)(lVar1 + -0x210) + 1U) {
      *(undefined4 *)(lVar1 + -0x20c) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar1 + -0x208));
    }
    *(undefined4 *)(lVar1 + -0x20c) = 0;
    *(undefined8 *)(lVar1 + -0x208) = 0;
    *(undefined4 *)(lVar1 + -0x210) = 0;
    if (1 < *(int *)(lVar1 + -0x220) + 1U) {
      *(undefined4 *)(lVar1 + -0x21c) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar1 + -0x218));
    }
    *(undefined4 *)(lVar1 + -0x21c) = 0;
    *(undefined8 *)(lVar1 + -0x218) = 0;
    *(undefined4 *)(lVar1 + -0x220) = 0;
    if (1 < *(int *)(lVar1 + -0x240) + 1U) {
      *(undefined4 *)(lVar1 + -0x23c) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar1 + -0x238));
    }
    *(undefined4 *)(lVar1 + -0x23c) = 0;
    *(undefined8 *)(lVar1 + -0x238) = 0;
    *(undefined4 *)(lVar1 + -0x240) = 0;
    if (1 < *(int *)(lVar1 + -0x250) + 1U) {
      *(undefined4 *)(lVar1 + -0x24c) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar1 + -0x248));
    }
    *(undefined4 *)(lVar1 + -0x24c) = 0;
    *(undefined4 *)(lVar1 + -0x250) = 0;
    *(undefined8 *)(lVar1 + -0x248) = 0;
    lVar1 = lVar1 + -0x260;
  } while (iVar2 != 0);
  *(int *)(param_1 + 4) = param_2;
  return;
}

