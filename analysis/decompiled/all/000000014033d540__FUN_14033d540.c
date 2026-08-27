// Function: FUN_14033d540
// Addr: 14033d540
// Size: 178 bytes


void FUN_14033d540(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)param_1[5];
  for (iVar2 = *(int *)((longlong)param_1 + 0x24); iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_1402f7f90(param_2,puVar1[1]);
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 3;
  }
  FUN_1402f7f90(param_2,param_1[5]);
  param_1[5] = 0;
  param_1[4] = 0;
  puVar1 = (undefined8 *)param_1[3];
  for (iVar2 = *(int *)((longlong)param_1 + 0x14); iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_1402f7f90(param_2,puVar1[1]);
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 3;
  }
  FUN_1402f7f90(param_2,param_1[3]);
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_1402f7f90(param_2,param_1[1]);
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

