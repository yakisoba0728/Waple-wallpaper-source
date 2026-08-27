// Function: FUN_1401dc030
// Addr: 1401dc030
// Size: 59 bytes


void FUN_1401dc030(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    FUN_140031b80(param_1 + 0x20);
    FUN_1401dd290(param_1 + 8);
  }
  return;
}

