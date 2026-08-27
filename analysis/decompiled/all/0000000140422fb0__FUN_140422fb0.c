// Function: FUN_140422fb0
// Addr: 140422fb0
// Size: 41 bytes


void FUN_140422fb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
    thunk_FUN_140017240(param_2 + 0xe8);
  }
  return;
}

