// Function: FUN_14029e3a0
// Addr: 14029e3a0
// Size: 64 bytes


void FUN_14029e3a0(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar3 = param_3 * 2 + 2;
  if (0xfff < uVar3) {
    plVar1 = (longlong *)(param_2 - 8);
    param_2 = (param_2 - *plVar1) - 8;
    if (param_2 < 0x20) {
      thunk_FUN_14028af80(*plVar1,param_3 * 2 + 0x29);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
  }
  thunk_FUN_14028af80(param_2,uVar3);
  return;
}

