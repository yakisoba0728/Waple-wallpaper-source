// Function: FUN_1402d3bc0
// Addr: 1402d3bc0
// Size: 27 bytes


undefined4 FUN_1402d3bc0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1404e46b0;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  LOCK();
  DAT_1404e46b0 = param_1;
  UNLOCK();
  return uVar1;
}

