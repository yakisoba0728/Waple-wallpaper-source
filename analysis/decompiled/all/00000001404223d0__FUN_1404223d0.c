// Function: FUN_1404223d0
// Addr: 1404223d0
// Size: 38 bytes


void FUN_1404223d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_140292df0(param_2 + 0x30);
  }
  return;
}

