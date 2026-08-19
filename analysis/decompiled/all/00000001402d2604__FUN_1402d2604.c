// Function: FUN_1402d2604
// Addr: 1402d2604
// Size: 12 bytes


undefined4 FUN_1402d2604(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1404e46ac;
  LOCK();
  DAT_1404e46ac = 1;
  UNLOCK();
  return uVar1;
}

