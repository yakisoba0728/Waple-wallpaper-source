// Function: FUN_140088ba0
// Addr: 140088ba0
// Size: 54 bytes


undefined8 * FUN_140088ba0(longlong *param_1,undefined8 *param_2)

{
  if ((((char)param_1[1] == '\x06') || ((char)param_1[1] == '\a')) &&
     ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
    *param_2 = *(undefined8 *)*param_1;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

