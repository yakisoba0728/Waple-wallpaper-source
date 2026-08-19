// Function: FUN_1402dded8
// Addr: 1402dded8
// Size: 101 bytes


int FUN_1402dded8(void)

{
  char cVar1;
  int iVar2;
  int local_res8 [8];
  
  if (DAT_1404e4e58 != 0) {
    return DAT_1404e4e58;
  }
  iVar2 = 2;
  local_res8[0] = 2;
  cVar1 = FUN_1402e2364();
  if (cVar1 == '\0') {
    func_0x0001402dbfa8(local_res8);
  }
  if (local_res8[0] != 0) {
    if (local_res8[0] == 1) goto LAB_1402ddf2d;
    if (local_res8[0] == 2) {
      iVar2 = 1;
      goto LAB_1402ddf2d;
    }
    if (local_res8[0] == 3) {
      iVar2 = 3;
      goto LAB_1402ddf2d;
    }
  }
  iVar2 = 4;
LAB_1402ddf2d:
  LOCK();
  UNLOCK();
  DAT_1404e4e58 = iVar2;
  return iVar2;
}

