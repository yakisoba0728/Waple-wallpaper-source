// Function: FUN_14030b370
// Addr: 14030b370
// Size: 6 bytes


void FUN_14030b370(longlong param_1)

{
  undefined8 uVar1;
  int aiStackX_8 [8];
  
  if ((*(int *)(param_1 + 0x1d8) == 3) &&
     (*(longlong *)(param_1 + 0x200) != *(longlong *)(param_1 + 0x210))) {
    uVar1 = FUN_1402f80c0(*(undefined8 *)(param_1 + 0x10),4,*(undefined4 *)(param_1 + 0x208),
                          *(undefined4 *)(param_1 + 0x1f8),*(longlong *)(param_1 + 0x210),aiStackX_8
                         );
    *(undefined8 *)(param_1 + 0x210) = uVar1;
    *(int *)(param_1 + 0x20) = aiStackX_8[0];
    if (aiStackX_8[0] == 0) {
      *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x1f8);
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uVar1,*(undefined8 *)(param_1 + 0x200),
                    (ulonglong)*(uint *)(param_1 + 0x1f8) << 2);
    }
  }
  return;
}

