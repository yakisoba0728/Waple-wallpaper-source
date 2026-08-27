// Function: FUN_1402f0f20
// Addr: 1402f0f20
// Size: 46 bytes


void FUN_1402f0f20(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    FUN_1402f0fa0();
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  }
  return;
}

