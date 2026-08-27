// Function: FUN_1401dc070
// Addr: 1401dc070
// Size: 59 bytes


void FUN_1401dc070(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    FUN_14000d9e0(param_1 + 0x18);
    FUN_14003de70(param_1 + 8);
  }
  return;
}

