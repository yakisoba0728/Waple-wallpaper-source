// Function: FUN_140422b90
// Addr: 140422b90
// Size: 23 bytes


void FUN_140422b90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    FUN_14029de10(param_2 + 0x168);
  }
  return;
}

