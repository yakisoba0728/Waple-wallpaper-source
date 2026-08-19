// Function: FUN_140135f50
// Addr: 140135f50
// Size: 22 bytes


longlong * FUN_140135f50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *in_RAX;
  ulonglong uVar3;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar2 = (longlong *)*plVar1;
      if (plVar2 != plVar1) {
        uVar3 = 0;
        if (plVar2[4] * 2 != 0) {
          do {
            uVar3 = uVar3 + 1;
          } while (uVar3 < (ulonglong)(plVar2[4] * 2));
        }
                    /* WARNING: Subroutine does not return */
        FUN_140016840(plVar2 + 2);
      }
      return plVar1;
    }
    *(undefined8 *)plVar1[1] = 0;
    if (*plVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140016840(*plVar1 + 0x10);
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

