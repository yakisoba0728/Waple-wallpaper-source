// Function: FUN_1402ed858
// Addr: 1402ed858
// Size: 169 bytes


/* WARNING: Removing unreachable block (ram,0x0001402ed8a9) */

void FUN_1402ed858(void)

{
  char cVar1;
  undefined1 local_res10 [24];
  
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
    DAT_1404e4f10 = DAT_1404e4f10 + -1;
    if (DAT_1404e4f10 == 0) {
      FUN_1402ed774(0,0,DAT_1404e4f14,local_res10);
    }
    cVar1 = FUN_1402ed5a8();
    if (cVar1 == '\0') {
      DAT_1404e4f08 = 0;
    }
    else {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(&DAT_1404e4f08);
    }
  }
  return;
}

