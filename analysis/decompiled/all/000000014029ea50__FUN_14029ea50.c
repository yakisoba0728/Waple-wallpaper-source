// Function: FUN_14029ea50
// Addr: 14029ea50
// Size: 98 bytes


void FUN_14029ea50(longlong *param_1)

{
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  ulonglong local_38;
  
  local_38 = DAT_1404dc110 ^ (ulonglong)auStack_f8;
  local_d8 = 0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    func_0x00014028aff0(0x20);
    return;
  }
  func_0x0001402ed2f0(local_38 ^ (ulonglong)auStack_f8);
  return;
}

