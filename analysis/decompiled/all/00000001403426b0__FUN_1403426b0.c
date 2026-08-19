// Function: FUN_1403426b0
// Addr: 1403426b0
// Size: 78 bytes


void FUN_1403426b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x636d6170,param_2,param_1 + 0x298);
  if (iVar1 == 0) {
    iVar1 = FUN_1402f5220(param_2,*(undefined4 *)(param_1 + 0x298),param_1 + 0x290);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x298) = 0;
    }
  }
  return;
}

