// Function: FUN_140422370
// Addr: 140422370
// Size: 38 bytes


void FUN_140422370(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_140292df0(param_2 + 0x30);
  }
  return;
}

