// Function: FUN_1402d99e0
// Addr: 1402d99e0
// Size: 68 bytes


undefined4 FUN_1402d99e0(void)

{
  longlong lVar1;
  
  DAT_1404e484c = FUN_1402dcaf0();
  DAT_1404dc580 = FlsAlloc(FUN_1402d965c);
  if (DAT_1404dc580 != 0xffffffff) {
    lVar1 = FUN_1402d98f4();
    if (lVar1 != 0) {
      return 1;
    }
    FUN_1402d9a24(0);
  }
  return 0;
}

