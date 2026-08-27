// Function: FUN_1403c3080
// Addr: 1403c3080
// Size: 403 bytes


void FUN_1403c3080(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  
  uVar3 = *(int *)(param_1 + 0x54) - 1;
  plVar4 = *(longlong **)(param_1 + 0x58) + 1;
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar3 = 0;
    plVar4 = *(longlong **)(param_1 + 0x58);
  }
  plVar1 = plVar4 + uVar3;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    lVar2 = *plVar4;
    if (1 < *(int *)(lVar2 + 0x10) + 1U) {
      *(undefined4 *)(lVar2 + 0x14) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar2 + 0x18));
    }
    *(undefined4 *)(lVar2 + 0x14) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined4 *)(lVar2 + 0x10) = 0;
    if (1 < *(int *)(lVar2 + 0x20) + 1U) {
      *(undefined4 *)(lVar2 + 0x24) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar2 + 0x28));
    }
    *(undefined4 *)(lVar2 + 0x24) = 0;
    *(undefined4 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
  }
  if (1 < *(int *)(param_1 + 0x50) + 1U) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffff2153;
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 != 0) {
    FUN_1403c3220(lVar2);
    thunk_FUN_1402d9040(lVar2);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    thunk_FUN_1402d9040();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x74) = 0;
  lVar2 = *(longlong *)(param_1 + 0x48);
  while (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar2 + 0x30);
    if (1 < *(int *)(lVar2 + 0x10) + 1U) {
      *(undefined4 *)(lVar2 + 0x14) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar2 + 0x18));
    }
    *(undefined4 *)(lVar2 + 0x14) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined4 *)(lVar2 + 0x10) = 0;
    if (1 < *(int *)(lVar2 + 0x20) + 1U) {
      *(undefined4 *)(lVar2 + 0x24) = 0;
      thunk_FUN_1402d9040(*(undefined8 *)(lVar2 + 0x28));
    }
    *(undefined4 *)(lVar2 + 0x24) = 0;
    *(undefined4 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    lVar2 = *(longlong *)(param_1 + 0x48);
  }
  return;
}

