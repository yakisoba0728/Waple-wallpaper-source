// Function: FUN_14028b140
// Addr: 14028b140
// Size: 158 bytes


void FUN_14028b140(int *param_1)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1404e3a38);
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      *param_1 = -1;
                    /* WARNING: Could not recover jumptable at 0x00014028b16e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1404e3a38);
      return;
    }
    if (iVar1 != -1) break;
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_1404e3a30,(PSRWLOCK)&DAT_1404e3a38,0xffffffff,0);
    iVar1 = *param_1;
  }
  *(undefined4 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x130) =
       DAT_1404dc000;
                    /* WARNING: Could not recover jumptable at 0x00014028b1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1404e3a38);
  return;
}

