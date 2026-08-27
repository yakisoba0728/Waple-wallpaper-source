// Function: FUN_140015650
// Addr: 140015650
// Size: 24 bytes


void FUN_140015650(undefined8 *param_1,longlong param_2)

{
  param_1[2] = param_2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
  return;
}

