// Function: FUN_1402ddd54
// Addr: 1402ddd54
// Size: 63 bytes


void FUN_1402ddd54(void)

{
  char cVar1;
  int local_res8 [8];
  
  if (DAT_1404e4d80 == 0) {
    local_res8[0] = 0;
    cVar1 = FUN_1402e2294();
    if (cVar1 == '\0') {
      FUN_1402dbe7c(local_res8);
    }
    DAT_1404e4d80 = (local_res8[0] == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}

