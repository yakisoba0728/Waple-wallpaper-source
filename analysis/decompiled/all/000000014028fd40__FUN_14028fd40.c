// Function: FUN_14028fd40
// Addr: 14028fd40
// Size: 35 bytes


DWORD FUN_14028fd40(LPCWSTR param_1,LPCWSTR param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = CreateHardLinkW(param_1,param_2,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014028fd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

