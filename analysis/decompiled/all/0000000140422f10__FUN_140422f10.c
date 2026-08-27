// Function: FUN_140422f10
// Addr: 140422f10
// Size: 38 bytes


void FUN_140422f10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_140016770(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}

