// Function: FUN_14030b2a0
// Addr: 14030b2a0
// Size: 148 bytes


void FUN_14030b2a0(longlong param_1)

{
  undefined8 uVar1;
  int local_res8 [8];
  
  if ((*(int *)(param_1 + 0x1d8) == 3) &&
     (*(longlong *)(param_1 + 0x200) != *(longlong *)(param_1 + 0x210))) {
    uVar1 = FUN_1402f7ff0(*(undefined8 *)(param_1 + 0x10),4,*(undefined4 *)(param_1 + 0x208),
                          *(undefined4 *)(param_1 + 0x1f8),*(longlong *)(param_1 + 0x210),local_res8
                         );
    *(undefined8 *)(param_1 + 0x210) = uVar1;
    *(int *)(param_1 + 0x20) = local_res8[0];
    if (local_res8[0] == 0) {
      *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x1f8);
      FUN_1404210f0(uVar1,*(undefined8 *)(param_1 + 0x200),
                    (ulonglong)*(uint *)(param_1 + 0x1f8) << 2);
      *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x210);
    }
  }
  return;
}

