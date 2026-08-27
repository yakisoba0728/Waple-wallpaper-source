// Function: FUN_140424310
// Addr: 140424310
// Size: 141 bytes


void FUN_140424310(void)

{
  FUN_140081800(&DAT_1404e6810);
  if (DAT_1404e67a8 != (HANDLE)0xffffffffffffffff) {
    UnregisterWaitEx(DAT_1404e67a8,(HANDLE)0xffffffffffffffff);
    DAT_1404e67a8 = (HANDLE)0xffffffffffffffff;
  }
  if (DAT_1404e67a0 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(DAT_1404e67a0);
    DAT_1404e67a0 = (HANDLE)0xffffffffffffffff;
  }
  if (DAT_1404e6a68 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6a68 + 0x20))
              (DAT_1404e6a68,CONCAT71(0x1404e6a,DAT_1404e6a68 != (longlong *)&DAT_1404e6a30));
    DAT_1404e6a68 = (longlong *)0x0;
  }
  FUN_140081740(&DAT_1404e6810);
  return;
}

