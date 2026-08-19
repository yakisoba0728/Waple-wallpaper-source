// Function: FUN_140165a00
// Addr: 140165a00
// Size: 268 bytes


longlong FUN_140165a00(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  if (param_2 != param_3) {
    uVar1 = 0;
    if (*(ulonglong *)(param_2 + 0x20) != 0) {
      do {
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ulonglong *)(param_2 + 0x20));
    }
    func_0x00014000dd90(param_2 + 0x50);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(param_2 + 0x30);
  }
  return param_3;
}

