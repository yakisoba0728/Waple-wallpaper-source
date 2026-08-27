// Function: FUN_1403b6d20
// Addr: 1403b6d20
// Size: 65 bytes


bool FUN_1403b6d20(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *param_4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = (**(code **)(lVar1 + 0x40))(lVar1);
    return iVar2 != 0;
  }
  return false;
}

