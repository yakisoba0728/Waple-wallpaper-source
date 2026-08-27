// Function: FUN_1402c8ee0
// Addr: 1402c8ee0
// Size: 113 bytes


undefined4 FUN_1402c8ee0(longlong param_1,undefined8 *param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  DVar1 = GetFullPathNameW((LPCWSTR)*param_2,*(DWORD *)(param_1 + 0x18),*(LPWSTR *)(param_1 + 0x10),
                           (LPWSTR *)0x0);
  uVar3 = (ulonglong)DVar1;
  if (uVar3 == 0) {
    DVar1 = GetLastError();
    FUN_1402caec4(DVar1);
    puVar4 = (undefined4 *)FUN_1402caf34();
    uVar2 = *puVar4;
  }
  else if (*(ulonglong *)(param_1 + 0x18) < uVar3) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    puVar4 = (undefined4 *)FUN_1402caf34();
    *puVar4 = 0x22;
    uVar2 = 0x22;
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    *(ulonglong *)(param_1 + 0x20) = uVar3;
    uVar2 = 0;
  }
  return uVar2;
}

