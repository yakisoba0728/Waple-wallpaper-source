// Function: FUN_1400e79e0
// Addr: 1400e79e0
// Size: 111 bytes


void FUN_1400e79e0(longlong param_1)

{
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1400e8640(param_1,**(undefined8 **)(param_1 + 8),*(undefined8 **)(param_1 + 8));
      return;
    }
    FUN_1400e85c0(param_1 + 8);
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_14000f7d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}

