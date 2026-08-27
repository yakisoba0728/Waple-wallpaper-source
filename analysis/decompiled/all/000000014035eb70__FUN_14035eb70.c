// Function: FUN_14035eb70
// Addr: 14035eb70
// Size: 185 bytes


bool FUN_14035eb70(longlong param_1,int param_2,int *param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == 0x17be) {
    *param_3 = 0x17c1;
    *param_4 = 0x17be;
    return true;
  }
  if (param_2 == 0x17bf) {
    *param_3 = 0x17c1;
    *param_4 = 0x17bf;
    return true;
  }
  if (param_2 == 0x17c0) {
    *param_3 = 0x17c1;
    *param_4 = 0x17c0;
    return true;
  }
  if (param_2 != 0x17c4) {
    if (param_2 != 0x17c5) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      *param_3 = param_2;
      *param_4 = 0;
      iVar2 = (**(code **)(lVar1 + 0x48))(lVar1);
      return iVar2 != 0;
    }
    *param_3 = 0x17c1;
    *param_4 = 0x17c5;
    return true;
  }
  *param_3 = 0x17c1;
  *param_4 = 0x17c4;
  return true;
}

