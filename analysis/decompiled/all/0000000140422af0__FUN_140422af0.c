// Function: FUN_140422af0
// Addr: 140422af0
// Size: 41 bytes


void FUN_140422af0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
    thunk_FUN_1402a9c30(param_2 + 0x128);
  }
  return;
}

