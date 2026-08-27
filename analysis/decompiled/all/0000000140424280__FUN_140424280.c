// Function: FUN_140424280
// Addr: 140424280
// Size: 141 bytes


void FUN_140424280(void)

{
  FUN_140081800(&DAT_1404e6540);
  if (DAT_1404e64d8 != (HANDLE)0xffffffffffffffff) {
    UnregisterWaitEx(DAT_1404e64d8,(HANDLE)0xffffffffffffffff);
    DAT_1404e64d8 = (HANDLE)0xffffffffffffffff;
  }
  if (DAT_1404e64d0 != (HANDLE)0xffffffffffffffff) {
    CloseHandle(DAT_1404e64d0);
    DAT_1404e64d0 = (HANDLE)0xffffffffffffffff;
  }
  if (DAT_1404e6798 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6798 + 0x20))
              (DAT_1404e6798,CONCAT71(0x1404e67,DAT_1404e6798 != (longlong *)&DAT_1404e6760));
    DAT_1404e6798 = (longlong *)0x0;
  }
  FUN_140081740(&DAT_1404e6540);
  return;
}

