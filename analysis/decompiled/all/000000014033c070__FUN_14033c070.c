// Function: FUN_14033c070
// Addr: 14033c070
// Size: 62 bytes


void FUN_14033c070(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*(undefined4 **)(param_1 + 0x18) ==
      (undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 8)) {
    piVar1 = *(int **)(param_1 + 8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      *piVar1 = 0x82;
      return;
    }
  }
  else {
    **(undefined4 **)(param_1 + 0x18) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4) = 0;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 8;
  }
  return;
}

