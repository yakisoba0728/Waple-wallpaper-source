// Function: FUN_140422bc0
// Addr: 140422bc0
// Size: 41 bytes


void FUN_140422bc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
    FUN_14029de10(param_2 + 0x128);
  }
  return;
}

