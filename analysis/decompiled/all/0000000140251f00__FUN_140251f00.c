// Function: FUN_140251f00
// Addr: 140251f00
// Size: 37 bytes


void FUN_140251f00(longlong param_1,undefined8 *param_2)

{
  if (*(undefined8 **)(param_1 + 8) != *(undefined8 **)(param_1 + 0x10)) {
    **(undefined8 **)(param_1 + 8) = *param_2;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 8;
    return;
  }
  FUN_14005ffa0();
  return;
}

