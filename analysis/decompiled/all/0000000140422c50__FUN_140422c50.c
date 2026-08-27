// Function: FUN_140422c50
// Addr: 140422c50
// Size: 41 bytes


void FUN_140422c50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
    thunk_FUN_140016770(param_2 + 0x108);
  }
  return;
}

