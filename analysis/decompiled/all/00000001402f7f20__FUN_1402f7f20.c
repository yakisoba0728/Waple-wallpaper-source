// Function: FUN_1402f7f20
// Addr: 1402f7f20
// Size: 105 bytes


longlong FUN_1402f7f20(longlong param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_3 < 1) {
    lVar1 = 0;
    if (param_3 < 0) {
      uVar2 = 6;
      goto LAB_1402f7f67;
    }
  }
  else {
    lVar1 = (**(code **)(param_1 + 8))(param_1,param_3);
    uVar2 = 0x40;
    if (lVar1 == 0) goto LAB_1402f7f67;
  }
  uVar2 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_1404210f0(lVar1,param_2,param_3);
  }
LAB_1402f7f67:
  *param_4 = uVar2;
  return lVar1;
}

