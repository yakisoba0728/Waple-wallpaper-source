// Function: FUN_1401dcb80
// Addr: 1401dcb80
// Size: 177 bytes


void FUN_1401dcb80(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 200) {
    FUN_1401dcd40(lVar4 + 0xb0);
    FUN_1401d9d50(lVar4 + 0x68);
    FUN_14000d9e0(lVar4);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 200;
  lVar4 = *(longlong *)(param_1 + 8);
  if (0xfff < uVar3) {
    if ((lVar4 - *(longlong *)(lVar4 + -8)) - 8U < 0x20) {
      thunk_FUN_14028af80(*(longlong *)(lVar4 + -8),uVar3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    lVar4 = (*pcVar2)(5);
  }
  thunk_FUN_14028af80(lVar4);
  return;
}

