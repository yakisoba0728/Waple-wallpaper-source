// Function: FUN_1400e7ab0
// Addr: 1400e7ab0
// Size: 90 bytes


longlong * FUN_1400e7ab0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *in_RAX;
  ulonglong uVar3;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar1 = *(longlong **)(param_1 + 8);
      plVar2 = (longlong *)*plVar1;
      if (plVar2 != plVar1) {
        uVar3 = 0;
        if (plVar2[4] != 0) {
          do {
            uVar3 = uVar3 + 1;
          } while (uVar3 < (ulonglong)plVar2[4]);
        }
                    /* WARNING: Subroutine does not return */
        FUN_140017310(plVar2 + 2);
      }
      return plVar1;
    }
    FUN_1400e8690(param_1 + 8);
    local_res8 = *(undefined8 *)(param_1 + 8);
    in_RAX = (longlong *)
             func_0x00014000f8a0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                                 &local_res8);
  }
  return in_RAX;
}

