// Function: FUN_14041be50
// Addr: 14041be50
// Size: 35 bytes


void FUN_14041be50(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    (*(code *)PTR_FUN_140426bb8)(param_1);
    param_1 = param_1 + param_2;
  }
  return;
}

