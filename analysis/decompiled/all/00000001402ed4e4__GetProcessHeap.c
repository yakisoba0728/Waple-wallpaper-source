// Function: KERNEL32.DLL::GetProcessHeap
// Addr: 1402ed4e4
// Size: 6 bytes


HANDLE __stdcall GetProcessHeap(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001402ed4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetProcessHeap();
  return pvVar1;
}

