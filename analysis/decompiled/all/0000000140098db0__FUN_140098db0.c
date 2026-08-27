// Function: FUN_140098db0
// Addr: 140098db0
// Size: 232 bytes


undefined8 FUN_140098db0(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_1404e52d0 != (FARPROC)0x0) {
    return 1;
  }
  iVar1 = FUN_140290d80(&DAT_1404df730);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404df77c == 0x7fffffff) {
    DAT_1404df77c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if (DAT_1404e52d0 == (FARPROC)0x0) {
    if (DAT_1404e52c8 == (HMODULE)0x0) {
      DAT_1404e52c8 = (HMODULE)FUN_1400576d0(L"d3dcompiler_47.dll");
      if (DAT_1404e52c8 != (HMODULE)0x0) {
        DAT_1404e52d0 = GetProcAddress(DAT_1404e52c8,"D3DCompile");
        DAT_1404e52c0 = GetProcAddress(DAT_1404e52c8,"D3DReflect");
        if ((DAT_1404e52d0 != (FARPROC)0x0) && (DAT_1404e52c0 != (FARPROC)0x0)) goto LAB_140098e5b;
      }
    }
    uVar2 = 0;
  }
  else {
LAB_140098e5b:
    uVar2 = 1;
  }
  FUN_140290ea0(&DAT_1404df730);
  return uVar2;
}

