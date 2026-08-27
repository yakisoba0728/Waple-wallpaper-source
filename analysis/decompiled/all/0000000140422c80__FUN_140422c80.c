// Function: FUN_140422c80
// Addr: 140422c80
// Size: 41 bytes


void FUN_140422c80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x10) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffef;
    thunk_FUN_140016770(param_2 + 0x148);
  }
  return;
}

