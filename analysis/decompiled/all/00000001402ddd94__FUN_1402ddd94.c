// Function: FUN_1402ddd94
// Addr: 1402ddd94
// Size: 67 bytes


void FUN_1402ddd94(void)

{
  char cVar1;
  int local_res8 [8];
  
  if (DAT_1404e4d84 == 0) {
    local_res8[0] = 1;
    cVar1 = FUN_1402e2294();
    if (cVar1 == '\0') {
      FUN_1402dbe20(local_res8);
    }
    DAT_1404e4d84 = (local_res8[0] == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}

