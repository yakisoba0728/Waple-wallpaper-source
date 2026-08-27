// Function: FUN_1400f10d0
// Addr: 1400f10d0
// Size: 73 bytes


void FUN_1400f10d0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = FUN_14004c3c0(param_1 + 3);
  if (lVar1 == 0) {
    lVar1 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    uVar2 = 6;
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      uVar2 = 2;
    }
    FUN_140013b50(lVar1,uVar2 | *(uint *)(lVar1 + 0x10),0);
    return;
  }
  return;
}

