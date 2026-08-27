// Function: FUN_14007c620
// Addr: 14007c620
// Size: 97 bytes


longlong FUN_14007c620(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140016fc0(param_3,param_1);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    FUN_140016fc0(param_3 + 0x28,param_1 + 0x28);
    param_3 = param_3 + 0x48;
    param_1 = param_1 + 0x48;
  }
  return param_3;
}

