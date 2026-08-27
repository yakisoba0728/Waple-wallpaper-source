// Function: FUN_140088b10
// Addr: 140088b10
// Size: 55 bytes


void FUN_140088b10(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    (*param_4)(param_1);
    param_1 = param_1 + param_2;
  }
  return;
}

