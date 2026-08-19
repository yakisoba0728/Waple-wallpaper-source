// Function: FUN_140136d20
// Addr: 140136d20
// Size: 226 bytes


longlong FUN_140136d20(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 != param_3) {
    uVar2 = 0;
    uVar1 = *(longlong *)(param_2 + 0x20) * 2;
    if (uVar1 != 0) {
      do {
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_140016840(param_2 + 0x10);
  }
  return param_3;
}

