// Function: _Init_thread_footer
// Addr: 14028b0d0
// Size: 105 bytes


/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1404e3a38);
  uVar1 = (ulonglong)_tls_index;
  DAT_1404dc000 = DAT_1404dc000 + 1;
  *param_1 = DAT_1404dc000;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x130) = DAT_1404dc000;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1404e3a38);
                    /* WARNING: Could not recover jumptable at 0x00014028b132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_1404e3a30);
  return;
}

