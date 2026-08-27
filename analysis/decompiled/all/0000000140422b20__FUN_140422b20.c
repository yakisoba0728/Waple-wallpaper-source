// Function: FUN_140422b20
// Addr: 140422b20
// Size: 41 bytes


void FUN_140422b20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
    thunk_FUN_1402a9c30(param_2 + 0x108);
  }
  return;
}

