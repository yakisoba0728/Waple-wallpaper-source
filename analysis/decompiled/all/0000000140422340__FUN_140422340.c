// Function: FUN_140422340
// Addr: 140422340
// Size: 38 bytes


void FUN_140422340(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_140292df0(param_2 + 0x30);
  }
  return;
}

