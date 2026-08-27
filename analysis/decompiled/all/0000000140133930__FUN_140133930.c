// Function: FUN_140133930
// Addr: 140133930
// Size: 67 bytes


void FUN_140133930(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar3 = param_3 * 0x14;
  if (0xfff < uVar3) {
    plVar1 = (longlong *)(param_2 - 8);
    param_2 = (param_2 - *plVar1) - 8;
    if (param_2 < 0x20) {
      thunk_FUN_14028af80(*plVar1,uVar3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
  }
  thunk_FUN_14028af80(param_2,uVar3);
  return;
}

