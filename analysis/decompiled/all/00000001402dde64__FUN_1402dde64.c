// Function: FUN_1402dde64
// Addr: 1402dde64
// Size: 4 bytes


void FUN_1402dde64(void)

{
  char cVar1;
  int aiStackX_8 [8];
  
  if (iRam00000001404e4e54 == 0) {
    aiStackX_8[0] = 1;
    cVar1 = FUN_1402e2364();
    if (cVar1 == '\0') {
      func_0x0001402dbef0(aiStackX_8);
    }
    iRam00000001404e4e54 = (aiStackX_8[0] == 1) + 1;
    LOCK();
    UNLOCK();
  }
  return;
}

