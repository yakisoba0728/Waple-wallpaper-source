// Function: FUN_1402d1e18
// Addr: 1402d1e18
// Size: 64 bytes


undefined8 FUN_1402d1e18(void)

{
  int iVar1;
  
  LOCK();
  iVar1 = *DAT_1404e4e90;
  *DAT_1404e4e90 = *DAT_1404e4e90 + -1;
  UNLOCK();
  if ((iVar1 == 1) && (DAT_1404e4e90 != (int *)&DAT_1404dca20)) {
    FUN_1402d9040();
    DAT_1404e4e90 = (int *)&DAT_1404dca20;
  }
  return 1;
}

