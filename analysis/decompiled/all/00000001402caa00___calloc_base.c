// Function: _calloc_base
// Addr: 1402caa00
// Size: 5 bytes


LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_1404e4ed0,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_1402d3ae0();
    } while ((iVar1 != 0) && (iVar1 = FUN_1402d0a90(dwBytes), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_1402caf34();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}

