// Function: FUN_140219eb0
// Addr: 140219eb0
// Size: 498 bytes


void FUN_140219eb0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,undefined8 param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_4 = param_4 - param_11;
  lVar2 = param_10;
  if ((param_4 != 0) && (lVar2 = param_9, param_12 != 0)) {
    if ((param_12 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_12) {
        lVar2 = param_10;
        if ((param_9 != param_2) && (lVar2 = param_9, param_2 != param_10)) {
          FUN_14021a260(param_9);
          FUN_14021a260(param_2,param_10);
          FUN_14021a260(param_9,param_10);
          lVar2 = (param_10 - param_2 & 0xffffffffffffffc0U) + param_9;
        }
      }
      else {
        lVar1 = FUN_140219cb0(param_2,param_10,param_6);
        FUN_140217b50(param_9,param_2,param_10);
        lVar2 = FUN_140219d50(param_6,lVar1,param_9);
        for (lVar3 = param_6; lVar3 != lVar1; lVar3 = lVar3 + 0x40) {
          FUN_140031b80(lVar3 + 0x28);
          FUN_140031b80(lVar3 + 0x10);
        }
      }
    }
    else {
      lVar1 = FUN_140219cb0(param_9,param_2,param_6);
      lVar2 = FUN_140219d50(param_2,param_10,param_9);
      FUN_140219d50(param_6,lVar1,lVar2);
      for (lVar3 = param_6; lVar3 != lVar1; lVar3 = lVar3 + 0x40) {
        FUN_140031b80(lVar3 + 0x28);
        FUN_140031b80(lVar3 + 0x10);
      }
    }
  }
  FUN_140217de0(param_1,param_9,lVar2,param_11,param_12,param_6,param_7,param_8);
  FUN_140217de0(lVar2,param_10,param_3,param_4);
  return;
}

