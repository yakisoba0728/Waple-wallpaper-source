// Function: FUN_1403dcd40
// Addr: 1403dcd40
// Size: 35 bytes


void FUN_1403dcd40(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x10) <= *(int *)(param_2 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    FUN_1403a4650(param_2 + 0x10,*(int *)(param_2 + 0x14) + 1,0);
  }
  uVar1 = *(uint *)(param_2 + 0x14);
  *(uint *)(param_2 + 0x14) = uVar1 + 1;
  *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (ulonglong)uVar1 * 4) =
       *(undefined4 *)(param_2 + 4);
  return;
}

