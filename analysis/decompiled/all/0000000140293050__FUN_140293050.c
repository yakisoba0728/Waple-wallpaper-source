// Function: FUN_140293050
// Addr: 140293050
// Size: 5 bytes


longlong FUN_140293050(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xa8) = &PTR_FUN_140426f00;
  func_0x0001402bbaf0(param_1 + 0xb0);
  if ((param_2 & 1) != 0) {
    func_0x00014028b040(param_1,0xc0);
  }
  return param_1;
}

