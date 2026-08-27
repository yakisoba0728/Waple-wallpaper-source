// Function: FUN_140038aa0
// Addr: 140038aa0
// Size: 77 bytes


void FUN_140038aa0(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 8);
  if (uVar4 == 0) {
    return;
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 4;
  if (0xfff < uVar3) {
    plVar1 = (longlong *)(uVar4 - 8);
    uVar4 = (uVar4 - *plVar1) - 8;
    if (uVar4 < 0x20) {
      thunk_FUN_14028af80(*plVar1,uVar3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
  }
  thunk_FUN_14028af80(uVar4,uVar3);
  return;
}

