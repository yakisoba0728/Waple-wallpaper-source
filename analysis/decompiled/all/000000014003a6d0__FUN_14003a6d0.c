// Function: FUN_14003a6d0
// Addr: 14003a6d0
// Size: 58 bytes


void FUN_14003a6d0(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    FUN_140017240(param_1 + 0x20);
    FUN_140017240(param_1);
  }
  return;
}

