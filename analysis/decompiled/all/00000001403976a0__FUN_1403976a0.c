// Function: FUN_1403976a0
// Addr: 1403976a0
// Size: 187 bytes


void FUN_1403976a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  FUN_1403c3080();
  *(undefined4 *)(param_1 + 0x60) = 0xffff2153;
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    FUN_1403c3220(lVar1);
    thunk_FUN_1402d9040(lVar1);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    thunk_FUN_1402d9040();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x74) = 0;
  if (1 < *(int *)(param_1 + 0x50) + 1U) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  for (iVar3 = *(int *)(param_1 + 0x3c); iVar3 != 0; iVar3 = iVar3 + -1) {
    thunk_FUN_1402d9040(*puVar2);
    puVar2 = puVar2 + 1;
  }
  if (1 < *(int *)(param_1 + 0x38) + 1U) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}

