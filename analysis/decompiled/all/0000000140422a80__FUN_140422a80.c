// Function: FUN_140422a80
// Addr: 140422a80
// Size: 41 bytes


void FUN_140422a80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    thunk_FUN_140017240(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}

