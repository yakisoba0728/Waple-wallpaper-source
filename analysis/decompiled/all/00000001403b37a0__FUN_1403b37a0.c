// Function: FUN_1403b37a0
// Addr: 1403b37a0
// Size: 52 bytes


void FUN_1403b37a0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined2 *)(param_1 + 0x59) = 0x100;
  *(undefined4 *)(param_1 + 100) = 0;
  if ((*(int *)(param_1 + 0x60) * 5 & 0x3fffffffU) != 0) {
    FUN_1404217a0(*(undefined8 *)(param_1 + 0x80),0,*(int *)(param_1 + 0x60) * 0x14);
    return;
  }
  return;
}

