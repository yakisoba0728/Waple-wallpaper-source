// Function: FUN_140032070
// Addr: 140032070
// Size: 26 bytes


void FUN_140032070(undefined8 *param_1)

{
  param_1[2] = 0;
  if (0xf < (ulonglong)param_1[3]) {
    *(undefined1 *)*param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  return;
}

