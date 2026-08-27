// Function: FUN_14007ab90
// Addr: 14007ab90
// Size: 105 bytes


void FUN_14007ab90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    FUN_140016fc0(lVar1);
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    FUN_140016fc0(lVar1 + 0x28,param_2 + 0x28);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x48;
    return;
  }
  FUN_14007c9f0(param_1,lVar1,param_2);
  return;
}

