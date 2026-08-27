// Function: FUN_14040bf50
// Addr: 14040bf50
// Size: 117 bytes


void FUN_14040bf50(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)((ulonglong)*(uint *)(param_1 + 4) * 0x10 + *(longlong *)(param_1 + 8));
  iVar2 = *(uint *)(param_1 + 4) - param_2;
  if (iVar2 == 0) {
    *(int *)(param_1 + 4) = param_2;
    return;
  }
  do {
    iVar2 = iVar2 + -1;
    if (1 < *(int *)(puVar1 + -2) + 1U) {
      *(undefined4 *)((longlong)puVar1 + -0xc) = 0;
      thunk_FUN_1402d9040(puVar1[-1]);
    }
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    puVar1 = puVar1 + -2;
  } while (iVar2 != 0);
  *(int *)(param_1 + 4) = param_2;
  return;
}

