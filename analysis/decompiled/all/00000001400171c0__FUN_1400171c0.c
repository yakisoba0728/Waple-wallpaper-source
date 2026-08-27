// Function: FUN_1400171c0
// Addr: 1400171c0
// Size: 56 bytes


void FUN_1400171c0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (0xfff < param_3) {
    plVar1 = (longlong *)(param_2 - 8);
    param_2 = (param_2 - *plVar1) - 8;
    if (param_2 < 0x20) {
      thunk_FUN_14028af80(*plVar1,param_3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
  }
  thunk_FUN_14028af80(param_2,param_3);
  return;
}

