// Function: FUN_1401b71c0
// Addr: 1401b71c0
// Size: 186 bytes


void FUN_1401b71c0(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  for (plVar5 = *(longlong **)(param_1 + 0x18); plVar5 != plVar2; plVar5 = plVar5 + 1) {
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      FUN_1401b8b20(lVar3);
      thunk_FUN_14028af80(lVar3,0x28);
    }
  }
  uVar1 = *(longlong *)(param_1 + 0x10) * 8;
  if (0xfff < uVar1) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    if ((*(longlong *)(param_1 + 8) - lVar3) - 8U < 0x20) {
      thunk_FUN_14028af80(lVar3,uVar1 + 0x27);
      return;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
  }
  thunk_FUN_14028af80();
  return;
}

