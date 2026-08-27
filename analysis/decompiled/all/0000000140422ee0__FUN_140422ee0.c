// Function: FUN_140422ee0
// Addr: 140422ee0
// Size: 38 bytes


void FUN_140422ee0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_1402a9c30(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}

