// Function: FUN_140422f50
// Addr: 140422f50
// Size: 41 bytes


void FUN_140422f50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    thunk_FUN_140017240(param_2 + 0x168);
  }
  return;
}

