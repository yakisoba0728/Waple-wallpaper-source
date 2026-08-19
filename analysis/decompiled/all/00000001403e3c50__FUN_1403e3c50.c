// Function: FUN_1403e3c50
// Addr: 1403e3c50
// Size: 251 bytes


void FUN_1403e3c50(longlong param_1)

{
  undefined1 uVar1;
  
  *(longlong *)(param_1 + 0x10) = param_1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x60);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x124);
  *(bool *)(param_1 + 0x20) = *(int *)(param_1 + 0x88) == 1;
  *(bool *)(param_1 + 0x21) = *(char *)(param_1 + 0x12e) != '\0';
  *(bool *)(param_1 + 0x22) = *(int *)(param_1 + 0x88) == 1;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x11c);
  if ((*(int *)(param_1 + 0x88) == 0) && (*(char *)(param_1 + 0x12f) != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x23) = uVar1;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(longlong *)(param_1 + 0x50) = param_1;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0x60);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x124);
  if ((*(int *)(param_1 + 0x88) == 1) || (*(char *)(param_1 + 0x12d) != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x60) = uVar1;
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(bool *)(param_1 + 0x62) = *(int *)(param_1 + 0x88) == 1;
  if ((*(int *)(param_1 + 0x88) == 0) && (*(char *)(param_1 + 0x12f) != '\0')) {
    *(undefined2 *)(param_1 + 99) = 1;
    return;
  }
  *(undefined2 *)(param_1 + 99) = 0;
  return;
}

