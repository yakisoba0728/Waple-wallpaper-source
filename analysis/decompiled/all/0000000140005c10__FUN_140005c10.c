// Function: FUN_140005c10
// Addr: 140005c10
// Size: 55 bytes


void FUN_140005c10(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  param_1 = param_2 * param_3 + param_1;
  do {
    param_1 = param_1 - param_2;
    (*param_4)(param_1);
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

