// Function: FUN_140098e80
// Addr: 140098e80
// Size: 21 bytes


undefined8 FUN_140098e80(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_1404e53a0 != 0) {
    return 1;
  }
  iVar1 = func_0x000140290e50(&DAT_1404df800);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (iRam00000001404df84c == 0x7fffffff) {
    iRam00000001404df84c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  if (DAT_1404e53a0 == 0) {
    if (DAT_1404e5398 == 0) {
      DAT_1404e5398 = func_0x0001400577a0(L"d3dcompiler_47.dll");
      if (DAT_1404e5398 != 0) {
        DAT_1404e53a0 = (*DAT_140426730)(DAT_1404e5398,"D3DCompile");
        DAT_1404e5390 = (*DAT_140426730)(DAT_1404e5398,"D3DReflect");
        if ((DAT_1404e53a0 != 0) && (DAT_1404e5390 != 0)) goto code_r0x000140098f2b;
      }
    }
    uVar2 = 0;
  }
  else {
code_r0x000140098f2b:
    uVar2 = 1;
  }
  FUN_140290f70(&DAT_1404df800);
  return uVar2;
}

