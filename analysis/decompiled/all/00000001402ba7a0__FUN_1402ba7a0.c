// Function: FUN_1402ba7a0
// Addr: 1402ba7a0
// Size: 40 bytes


longlong FUN_1402ba7a0(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (-1 < iVar1) {
    return (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(iVar1 + param_1)) +
           (longlong)iVar1 + *param_2 + param_1;
  }
  return *param_2 + param_1;
}

