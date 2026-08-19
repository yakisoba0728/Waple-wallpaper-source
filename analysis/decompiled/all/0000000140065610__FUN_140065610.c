// Function: FUN_140065610
// Addr: 140065610
// Size: 53 bytes


void FUN_140065610(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x18))();
  }
  *param_1 = 0;
  (*DAT_140426808)(param_1[1]);
  func_0x00014028b040(param_1,0x18);
  return;
}

