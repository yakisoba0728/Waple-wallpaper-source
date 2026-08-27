// Function: FUN_1401a5bd0
// Addr: 1401a5bd0
// Size: 100 bytes


longlong FUN_1401a5bd0(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    *(undefined8 *)(param_3 + 0x38) = 0;
    FUN_140037830(param_3,param_1);
    param_3 = param_3 + 0x40;
  }
  return param_3;
}

