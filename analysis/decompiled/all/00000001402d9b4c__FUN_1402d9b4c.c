// Function: FUN_1402d9b4c
// Addr: 1402d9b4c
// Size: 53 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d9b4c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_1404e4920)[param_3]) &&
     ((_DAT_1404dd030 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_1402e5d9c();
    *param_2 = lVar1;
  }
  return;
}

