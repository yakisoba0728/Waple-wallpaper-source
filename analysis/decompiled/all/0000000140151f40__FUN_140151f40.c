// Function: FUN_140151f40
// Addr: 140151f40
// Size: 169 bytes


void FUN_140151f40(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1400e8710(param_1,*plVar1,plVar1);
      return;
    }
    *(undefined8 *)plVar1[1] = 0;
    if (*plVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(*plVar1 + 0x10);
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    func_0x00014000f8a0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8)
    ;
  }
  return;
}

