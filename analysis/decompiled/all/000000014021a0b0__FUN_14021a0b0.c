// Function: FUN_14021a0b0
// Addr: 14021a0b0
// Size: 423 bytes


void FUN_14021a0b0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12)

{
  longlong lVar1;
  
  param_4 = param_4 - param_11;
  lVar1 = param_10;
  if ((param_4 != 0) && (lVar1 = param_9, param_12 != 0)) {
    if ((param_12 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_12) {
        lVar1 = param_10;
        if ((param_9 != param_2) && (lVar1 = param_9, param_2 != param_10)) {
          FUN_14028f260(param_9,param_2,param_10);
          lVar1 = (param_10 - param_2 & 0xfffffffffffffff8U) + param_9;
        }
      }
      else {
        lVar1 = param_10 - param_2;
        FUN_1404210f0(param_6,param_2,lVar1);
        FUN_1404210f0(param_10 - (param_2 - param_9),param_9,param_2 - param_9);
        FUN_1404210f0(param_9,param_6,lVar1);
        lVar1 = lVar1 + param_9;
      }
    }
    else {
      FUN_1404210f0(param_6,param_9,param_2 - param_9);
      FUN_1404210f0(param_9,param_2,param_10 - param_2);
      lVar1 = (param_10 - param_2) + param_9;
      FUN_1404210f0(lVar1,param_6,param_2 - param_9);
    }
  }
  FUN_140218970(param_1,param_9,lVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_140218970(lVar1,param_10,param_3,param_4);
  return;
}

