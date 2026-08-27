// Function: FUN_1402bf590
// Addr: 1402bf590
// Size: 71 bytes


undefined1 FUN_1402bf590(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_1404e4418;
  uVar1 = DAT_1404e4418;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1404e43f0 + uVar2 * 0x28));
    DAT_1404e4418 = DAT_1404e4418 - 1;
  }
  return 1;
}

