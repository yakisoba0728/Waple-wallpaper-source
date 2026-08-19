// Function: FUN_140422770
// Addr: 140422770
// Size: 27 bytes


void FUN_140422770(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_140292ec0(param_2 + 0x28);
  }
  return;
}

