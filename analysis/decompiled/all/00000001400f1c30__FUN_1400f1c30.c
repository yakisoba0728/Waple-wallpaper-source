// Function: FUN_1400f1c30
// Addr: 1400f1c30
// Size: 1 bytes


void FUN_1400f1c30(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if (-1 < iVar1) {
    (**(code **)(*param_2 + 0x30))(param_2,param_3);
  }
  return;
}

