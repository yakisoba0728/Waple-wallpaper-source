// Function: FUN_14041be80
// Addr: 14041be80
// Size: 90 bytes


void FUN_14041be80(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    param_1 = param_1 - param_2;
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(param_1);
  }
  return;
}

