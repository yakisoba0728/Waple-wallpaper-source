// Function: FUN_1404243a0
// Addr: 1404243a0
// Size: 141 bytes


void FUN_1404243a0(void)

{
  FUN_140081800(&DAT_1404e6ae0);
  if (DAT_1404e6a78 != (HANDLE)0xffffffffffffffff) {
    UnregisterWaitEx(DAT_1404e6a78,(HANDLE)0xffffffffffffffff);
    DAT_1404e6a78 = (HANDLE)0xffffffffffffffff;
  }
  if (DAT_1404e6a70 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(DAT_1404e6a70);
    DAT_1404e6a70 = (HANDLE)0xffffffffffffffff;
  }
  if (DAT_1404e6d38 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6d38 + 0x20))
              (DAT_1404e6d38,CONCAT71(0x1404e6d,DAT_1404e6d38 != (longlong *)&DAT_1404e6d00));
    DAT_1404e6d38 = (longlong *)0x0;
  }
  FUN_140081740(&DAT_1404e6ae0);
  return;
}

