// Function: FUN_1402e5d9c
// Addr: 1402e5d9c
// Size: 5 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1402e5d9c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1402d9964();
  if (((_DAT_1404dd030 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (lVar2 = *(longlong *)(lVar1 + 0x90), lVar2 == 0)) {
    FUN_1402d6370(4);
    lVar2 = func_0x0001402e5e0c((longlong *)(lVar1 + 0x90),DAT_1404e4920);
    __acrt_unlock(4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402c98b4();
    }
  }
  return lVar2;
}

