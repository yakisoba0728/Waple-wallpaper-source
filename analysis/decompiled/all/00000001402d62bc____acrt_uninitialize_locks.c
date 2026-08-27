// Function: __acrt_uninitialize_locks
// Addr: 1402d62bc
// Size: 55 bytes


/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_1404e4848;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1404e45f0 + uVar1 * 0x28));
    DAT_1404e4848 = DAT_1404e4848 - 1;
  }
  return 1;
}

