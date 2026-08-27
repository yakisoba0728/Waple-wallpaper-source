// Function: FUN_1404148b0
// Addr: 1404148b0
// Size: 106 bytes


undefined8 FUN_1404148b0(longlong param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x60);
  }
  if (*(char *)(param_1 + 0x5a) == '\0') {
    if (*(int *)(param_1 + 0x110) != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    *(undefined2 *)(param_1 + 0x59) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0;
    if ((*(int *)(param_1 + 0x60) * 5 & 0x3fffffffU) != 0) {
      FUN_1404217a0(*(undefined8 *)(param_1 + 0x80),0,*(int *)(param_1 + 0x60) * 0x14);
    }
  }
  return *(undefined8 *)(param_1 + 0x80);
}

