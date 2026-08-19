// Function: FUN_1402dde24
// Addr: 1402dde24
// Size: 63 bytes


void FUN_1402dde24(void)

{
  char cVar1;
  int local_res8 [8];
  
  if (DAT_1404e4e50 == 0) {
    local_res8[0] = 0;
    cVar1 = FUN_1402e2364();
    if (cVar1 == '\0') {
      FUN_1402dbf4c(local_res8);
    }
    DAT_1404e4e50 = (local_res8[0] == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}

