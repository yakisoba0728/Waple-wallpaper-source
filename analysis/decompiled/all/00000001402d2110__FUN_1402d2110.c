// Function: FUN_1402d2110
// Addr: 1402d2110
// Size: 60 bytes


undefined8 FUN_1402d2110(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if ((*param_1 != 0) && (uVar1 = thunk_FUN_140420d40(), (int)uVar1 != 0)) break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}

