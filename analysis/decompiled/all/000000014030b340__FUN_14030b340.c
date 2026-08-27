// Function: FUN_14030b340
// Addr: 14030b340
// Size: 60 bytes


void FUN_14030b340(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  FUN_14030b2a0();
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4);
    *piVar1 = *piVar1 + param_3;
  }
  return;
}

