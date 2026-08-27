// Function: FUN_1402a9bd0
// Addr: 1402a9bd0
// Size: 96 bytes


void FUN_1402a9bd0(undefined8 *param_1,undefined8 *param_2)

{
  if ((ulonglong)param_2[3] < 8) {
    FUN_1404210f0(param_1,param_2,param_2[2] * 2 + 2);
  }
  else {
    *param_1 = *param_2;
  }
  param_1[3] = param_2[3];
  param_1[2] = param_2[2];
  *(undefined2 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  return;
}

