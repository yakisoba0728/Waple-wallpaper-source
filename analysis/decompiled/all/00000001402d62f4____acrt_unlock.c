// Function: __acrt_unlock
// Addr: 1402d62f4
// Size: 25 bytes


/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001402d6306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1404e45f0 + (longlong)param_1 * 0x28));
  return;
}

