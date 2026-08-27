// Function: FUN_1404223a0
// Addr: 1404223a0
// Size: 38 bytes


void FUN_1404223a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_140292df0(param_2 + 0x30);
  }
  return;
}

