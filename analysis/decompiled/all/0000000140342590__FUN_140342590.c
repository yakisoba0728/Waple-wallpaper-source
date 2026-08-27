// Function: FUN_140342590
// Addr: 140342590
// Size: 70 bytes


void FUN_140342590(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x68656164,param_2,0);
  if (iVar1 == 0) {
    FUN_1402f5610(param_2,&DAT_140450d80,param_1 + 0x100);
  }
  return;
}

