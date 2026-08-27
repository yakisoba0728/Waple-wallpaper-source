// Function: FUN_140318610
// Addr: 140318610
// Size: 38 bytes


void FUN_140318610(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(param_2 + 0x68))(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x2f0) = uVar1;
  return;
}

