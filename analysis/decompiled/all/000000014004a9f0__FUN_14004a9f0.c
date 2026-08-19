// Function: FUN_14004a9f0
// Addr: 14004a9f0
// Size: 65 bytes


void FUN_14004a9f0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  uVar2 = 4;
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    uVar2 = 0;
  }
  func_0x000140013c20(lVar1,*(uint *)(lVar1 + 0x10) & 0xfffffffe | uVar2,0);
  return;
}

