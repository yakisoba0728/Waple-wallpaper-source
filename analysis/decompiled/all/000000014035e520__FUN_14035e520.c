// Function: FUN_14035e520
// Addr: 14035e520
// Size: 82 bytes


bool FUN_14035e520(longlong param_1,int param_2,int *param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if ((param_2 != 0x931) && (param_2 != 0x9dc)) {
    if ((param_2 != 0x9dd) && (param_2 != 0xb94)) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      *param_3 = param_2;
      *param_4 = 0;
      iVar2 = (**(code **)(lVar1 + 0x48))(lVar1);
      return iVar2 != 0;
    }
  }
  return false;
}

