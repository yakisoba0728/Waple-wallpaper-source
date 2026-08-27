// Function: FUN_14041be00
// Addr: 14041be00
// Size: 117 bytes


void FUN_14041be00(longlong param_1,longlong param_2,longlong param_3)

{
  param_1 = param_2 * param_3 + param_1;
  while( true ) {
    if (param_3 == 0) break;
    param_1 = param_1 - param_2;
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(param_1);
    param_3 = param_3 + -1;
  }
  return;
}

