// Function: FUN_1404229c0
// Addr: 1404229c0
// Size: 44 bytes


void FUN_1404229c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xc0) & 1) != 0) {
    *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) & 0xfffffffe;
    FUN_140014410(param_2 + 0x20);
  }
  return;
}

