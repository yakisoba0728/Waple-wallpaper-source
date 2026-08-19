// Function: FUN_1402f80c0
// Addr: 1402f80c0
// Size: 154 bytes


longlong FUN_1402f80c0(longlong param_1,uint param_2,int param_3,int param_4,longlong param_5,
                      undefined4 *param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = param_5;
  if (((param_3 < 0) || (param_4 < 0)) || ((int)param_2 < 0)) {
    uVar2 = 6;
  }
  else {
    uVar2 = 0;
    if ((param_4 == 0) || (param_2 == 0)) {
      if (param_5 != 0) {
        (**(code **)(param_1 + 0x10))();
      }
      lVar1 = 0;
      uVar2 = 0;
    }
    else if ((int)(0x7fffffff / (ulonglong)param_2) < param_4) {
      uVar2 = 10;
    }
    else if (param_3 == 0) {
      lVar1 = (**(code **)(param_1 + 8))(param_1,param_2 * param_4);
      uVar2 = 0x40;
      if (lVar1 != 0) {
        uVar2 = 0;
      }
    }
    else {
      lVar1 = (**(code **)(param_1 + 0x18))(param_1,param_2 * param_3,param_2 * param_4,param_5);
      if (lVar1 == 0) {
        lVar1 = param_5;
        uVar2 = 0x40;
      }
    }
  }
  *param_6 = uVar2;
  return lVar1;
}

