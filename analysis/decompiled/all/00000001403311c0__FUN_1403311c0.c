// Function: FUN_1403311c0
// Addr: 1403311c0
// Size: 129 bytes


undefined8 FUN_1403311c0(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  puVar1 = *(ushort **)(param_1 + 0x28);
  if (puVar1 == (ushort *)0x0) {
    return 3;
  }
  if (*(char *)(param_1 + 0x5c) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(uint *)(lVar2 + 0xc) < *(ushort *)(lVar2 + 0x60) + 1 + (uint)*(ushort *)(lVar2 + 0x18)) {
      uVar3 = FUN_1402f0940(lVar2,0,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    else {
      uVar3 = 0;
    }
    if (*puVar1 != 0) {
      *(ushort *)(*(longlong *)(puVar1 + 0xc) + -2 + (ulonglong)*puVar1 * 2) = puVar1[1] - 1;
    }
    *puVar1 = *puVar1 + 1;
    return uVar3;
  }
  *puVar1 = *puVar1 + 1;
  return 0;
}

