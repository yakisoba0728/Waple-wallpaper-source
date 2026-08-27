// Function: FUN_1402d2534
// Addr: 1402d2534
// Size: 12 bytes


undefined4 FUN_1402d2534(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1404e45dc;
  LOCK();
  DAT_1404e45dc = 1;
  UNLOCK();
  return uVar1;
}

