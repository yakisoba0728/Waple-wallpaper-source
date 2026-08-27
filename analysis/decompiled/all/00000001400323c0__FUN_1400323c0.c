// Function: FUN_1400323c0
// Addr: 1400323c0
// Size: 61 bytes


void FUN_1400323c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    FUN_140016600(lVar1);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_140034cc0(param_1,lVar1,param_2);
  return;
}

