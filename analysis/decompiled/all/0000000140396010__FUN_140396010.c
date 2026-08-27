// Function: FUN_140396010
// Addr: 140396010
// Size: 83 bytes


void FUN_140396010(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)param_1[2];
  for (iVar1 = *(int *)((longlong)param_1 + 0xc); iVar1 != 0; iVar1 = iVar1 + -1) {
    thunk_FUN_1402d9040(*puVar2);
    puVar2 = puVar2 + 1;
  }
  if (1 < *(int *)(param_1 + 1) + 1U) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    thunk_FUN_1402d9040(param_1[2]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

