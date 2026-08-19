// Function: FUN_140136140
// Addr: 140136140
// Size: 22 bytes


longlong * FUN_140136140(longlong param_1)

{
  longlong *plVar1;
  longlong *in_RAX;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      if ((longlong *)*plVar1 != plVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_140016840((longlong *)*plVar1 + 3);
      }
      return plVar1;
    }
    *(undefined8 *)plVar1[1] = 0;
    if (*plVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140016840(*plVar1 + 0x18);
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    in_RAX = (longlong *)
             func_0x00014000f8a0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                                 &stack0x00000008);
  }
  return in_RAX;
}

