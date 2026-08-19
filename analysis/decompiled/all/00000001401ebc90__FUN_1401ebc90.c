// Function: FUN_1401ebc90
// Addr: 1401ebc90
// Size: 160 bytes


void FUN_1401ebc90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FUN_140150b90(*(longlong *)(param_1 + 200) + 0x1630);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  if ((*(uint *)(param_1 + 0x304) >> 4 & 1) == 0) {
    return;
  }
  func_0x00014028aff0(0x10);
  return;
}

