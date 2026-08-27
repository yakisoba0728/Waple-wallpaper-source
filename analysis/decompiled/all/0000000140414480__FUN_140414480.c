// Function: FUN_140414480
// Addr: 140414480
// Size: 105 bytes


void FUN_140414480(longlong param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    *(undefined2 *)(param_1 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x5a) = 0;
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd4) = 1;
  }
  return;
}

