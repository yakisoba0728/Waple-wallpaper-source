// Function: FUN_1404148a0
// Addr: 1404148a0
// Size: 15 bytes


undefined8 FUN_1404148a0(longlong param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x60);
  }
  return *(undefined8 *)(param_1 + 0x70);
}

