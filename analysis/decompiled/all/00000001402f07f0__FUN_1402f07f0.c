// Function: FUN_1402f07f0
// Addr: 1402f07f0
// Size: 119 bytes


void FUN_1402f07f0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20) + (ulonglong)*(ushort *)(param_1 + 0x1a) * 8;
  }
  *(longlong *)(param_1 + 0x68) = lVar1;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0x1a) + *(longlong *)(param_1 + 0x28);
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = lVar1 + (ulonglong)*(ushort *)(param_1 + 0x18) * 2;
  }
  *(longlong *)(param_1 + 0x78) = lVar1;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(ulonglong *)(param_1 + 0x88) =
         *(longlong *)(param_1 + 0x40) + (ulonglong)*(ushort *)(param_1 + 0x1a) * 8;
    *(ulonglong *)(param_1 + 0x90) =
         *(longlong *)(param_1 + 0x48) + (ulonglong)*(ushort *)(param_1 + 0x1a) * 8;
  }
  return;
}

