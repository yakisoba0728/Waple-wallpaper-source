// Function: FUN_1402ed4ec
// Addr: 1402ed4ec
// Size: 186 bytes


/* WARNING: Removing unreachable block (ram,0x0001402ed541) */

void FUN_1402ed4ec(void)

{
  char cVar1;
  
  if (((IMAGE_LOAD_CONFIG_DIRECTORY64_1404364b0.GuardFlags & IMAGE_GUARD_PROTECT_DELAYLOAD_IAT) != 0
      ) && (DAT_140436498 != 0)) {
    cVar1 = FUN_1402ed5a8();
    if (cVar1 == '\0') {
      do {
      } while (DAT_1404e4f08 != 0);
      LOCK();
      DAT_1404e4f08 = 1;
      UNLOCK();
    }
    else {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(&DAT_1404e4f08);
    }
    DAT_1404e4f10 = DAT_1404e4f10 + 1;
    if (DAT_1404e4f10 == 1) {
      FUN_1402ed774(0,0,4,&DAT_1404e4f14);
    }
    cVar1 = FUN_1402ed5a8();
    if (cVar1 != '\0') {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(&DAT_1404e4f08);
      return;
    }
    DAT_1404e4f08 = 0;
  }
  return;
}

