// Function: FUN_1403bd890
// Addr: 1403bd890
// Size: 8 bytes


bool FUN_1403bd890(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *param_3 = param_2;
  *param_4 = 0;
  iVar2 = (**(code **)(lVar1 + 0x48))(lVar1);
  return iVar2 != 0;
}

