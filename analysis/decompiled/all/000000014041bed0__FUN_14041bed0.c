// Function: FUN_14041bed0
// Addr: 14041bed0
// Size: 10 bytes


void FUN_14041bed0(longlong param_1,longlong param_2,longlong param_3)

{
  param_1 = param_2 * param_3 + param_1;
  while( true ) {
    if (param_3 == 0) break;
    param_1 = param_1 - param_2;
    (*(code *)PTR_FUN_140426bb8)(param_1);
    param_3 = param_3 + -1;
  }
  return;
}

