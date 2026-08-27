// Function: FUN_14000ee20
// Addr: 14000ee20
// Size: 63 bytes


undefined2 FUN_14000ee20(longlong *param_1)

{
  undefined2 *puVar1;
  short sVar2;
  
  sVar2 = (**(code **)(*param_1 + 0x30))();
  if (sVar2 == -1) {
    return 0xffff;
  }
  *(int *)param_1[10] = *(int *)param_1[10] + -1;
  puVar1 = *(undefined2 **)param_1[7];
  *(undefined2 **)param_1[7] = puVar1 + 1;
  return *puVar1;
}

