// Function: KERNEL32.DLL::FlsFree
// Addr: 1402dc0f0
// Size: 7 bytes


BOOL __stdcall FlsFree(DWORD dwFlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001402dc0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}

