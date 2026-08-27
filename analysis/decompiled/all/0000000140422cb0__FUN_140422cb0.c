// Function: FUN_140422cb0
// Addr: 140422cb0
// Size: 41 bytes


void FUN_140422cb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x20) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffdf;
    thunk_FUN_140016770(param_2 + 0x188);
  }
  return;
}

