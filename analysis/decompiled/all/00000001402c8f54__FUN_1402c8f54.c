// Function: FUN_1402c8f54
// Addr: 1402c8f54
// Size: 235 bytes


uint FUN_1402c8f54(longlong param_1,undefined8 *param_2)

{
  DWORD DVar1;
  uint uVar2;
  uint *puVar3;
  LPWSTR lpBuffer;
  ulonglong uVar4;
  
  DVar1 = GetFullPathNameW((LPCWSTR)*param_2,*(DWORD *)(param_1 + 0x18),*(LPWSTR *)(param_1 + 0x10),
                           (LPWSTR *)0x0);
  uVar4 = (ulonglong)DVar1;
  if (DVar1 == 0) {
LAB_1402c8f8f:
    DVar1 = GetLastError();
    FUN_1402caec4(DVar1);
    puVar3 = (uint *)FUN_1402caf34();
    uVar2 = *puVar3;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x18) < uVar4) {
      if (*(char *)(param_1 + 0x28) != '\0') {
        thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x10));
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      lpBuffer = (LPWSTR)_malloc_base(uVar4 * 2 + 2);
      *(LPWSTR *)(param_1 + 0x10) = lpBuffer;
      uVar2 = ~-(uint)(lpBuffer != (LPWSTR)0x0) & 0xc;
      if (lpBuffer != (LPWSTR)0x0) {
        uVar2 = 0;
      }
      *(bool *)(param_1 + 0x28) = lpBuffer != (LPWSTR)0x0;
      uVar4 = -(ulonglong)(lpBuffer != (LPWSTR)0x0) & uVar4 + 1;
      *(ulonglong *)(param_1 + 0x18) = uVar4;
      if (uVar2 != 0) {
        return uVar2;
      }
      DVar1 = GetFullPathNameW((LPCWSTR)*param_2,(DWORD)uVar4,lpBuffer,(LPWSTR *)0x0);
      if ((ulonglong)DVar1 == 0) goto LAB_1402c8f8f;
      *(ulonglong *)(param_1 + 0x20) = (ulonglong)DVar1;
    }
    else {
      *(ulonglong *)(param_1 + 0x20) = uVar4;
    }
    uVar2 = 0;
  }
  return uVar2;
}

