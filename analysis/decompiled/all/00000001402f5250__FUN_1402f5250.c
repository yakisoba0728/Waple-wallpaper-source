// Function: FUN_1402f5250
// Addr: 1402f5250
// Size: 67 bytes


undefined4 FUN_1402f5250(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  if ((longlong)puVar1 + 3U < *(ulonglong *)(param_1 + 0x40)) {
    uVar2 = *puVar1;
    *(undefined4 **)(param_1 + 0x38) = puVar1 + 1;
    return uVar2;
  }
  *(undefined4 **)(param_1 + 0x38) = puVar1;
  return 0;
}

