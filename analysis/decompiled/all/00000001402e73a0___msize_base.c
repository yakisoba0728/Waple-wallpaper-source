// Function: _msize_base
// Addr: 1402e73a0
// Size: 57 bytes


/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

SIZE_T _msize_base(LPCVOID param_1)

{
  undefined4 *puVar1;
  SIZE_T SVar2;
  
  if (param_1 == (LPCVOID)0x0) {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x16;
    FUN_1402cad8c();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0001402e73d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar2 = HeapSize(DAT_1404e4ed0,0,param_1);
  return SVar2;
}

