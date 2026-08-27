// Function: FUN_1402bf500
// Addr: 1402bf500
// Size: 135 bytes


undefined4 FUN_1402bf500(void)

{
  BOOL BVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_1404e43f0 + uVar3 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar3 = (ulonglong)DAT_1404e4418;
      uVar2 = DAT_1404e4418;
      while (uVar2 != 0) {
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar2;
        DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1404e43f0 + uVar3 * 0x28));
        DAT_1404e4418 = DAT_1404e4418 - 1;
      }
      return 0;
    }
    DAT_1404e4418 = DAT_1404e4418 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return 1;
}

