// Function: FUN_140039a60
// Addr: 140039a60
// Size: 111 bytes


void FUN_140039a60(longlong param_1)

{
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_14003a340(param_1,**(undefined8 **)(param_1 + 8),*(undefined8 **)(param_1 + 8));
      return;
    }
    FUN_14000ff20(param_1 + 8);
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_14000f7d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}

