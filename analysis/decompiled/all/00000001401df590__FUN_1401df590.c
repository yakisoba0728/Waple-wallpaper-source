// Function: FUN_1401df590
// Addr: 1401df590
// Size: 78 bytes


void FUN_1401df590(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_3 != (undefined8 *)0x0) {
    local_18 = *param_3;
    local_10 = *(undefined4 *)(param_3 + 1);
    FUN_1401dd630(local_18,&local_18);
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
    (**(code **)(param_2 + 0x28))(param_1,param_2);
  }
  return;
}

