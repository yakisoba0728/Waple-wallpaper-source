// Function: FUN_140184980
// Addr: 140184980
// Size: 92 bytes


longlong FUN_140184980(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xd8) {
    FUN_1400cebc0(param_3,param_1);
    param_3 = param_3 + 0xd8;
  }
  FUN_14017e540(param_3,param_3);
  return param_3;
}

