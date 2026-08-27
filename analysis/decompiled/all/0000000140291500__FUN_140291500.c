// Function: FUN_140291500
// Addr: 140291500
// Size: 80 bytes


void FUN_140291500(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  iVar2 = DAT_1404dc08c + -1;
  UNLOCK();
  iVar1 = DAT_1404dc08c + -1;
  DAT_1404dc08c = iVar2;
  if (iVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_1404e3b50;
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&DAT_1404e3c90);
  }
  return;
}

