// Function: FUN_140291550
// Addr: 140291550
// Size: 51 bytes


void FUN_140291550(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402d6333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1404e4690);
    return;
  }
  if (iVar1 < 8) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1404e3b50 + (longlong)iVar1 * 0x28));
    return;
  }
  return;
}

