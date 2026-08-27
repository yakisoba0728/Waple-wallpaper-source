// Function: FUN_1401b7360
// Addr: 1401b7360
// Size: 169 bytes


void FUN_1401b7360(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x50) {
    FUN_1401b4380(lVar4 + 0x38);
    FUN_1401b8b20(lVar4);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 0x50;
  if (0xfff < uVar3) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    if ((*(longlong *)(param_1 + 8) - lVar4) - 8U < 0x20) {
      thunk_FUN_14028af80(lVar4,uVar3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
  }
  thunk_FUN_14028af80();
  return;
}

