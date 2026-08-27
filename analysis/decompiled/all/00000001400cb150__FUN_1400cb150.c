// Function: FUN_1400cb150
// Addr: 1400cb150
// Size: 47 bytes


void FUN_1400cb150(int *param_1)

{
  *param_1 = *param_1 + -1;
  if (*param_1 == 0) {
    thunk_FUN_14028af80(*(undefined8 *)(param_1 + 2));
    thunk_FUN_14028af80(param_1,0x18);
    return;
  }
  return;
}

