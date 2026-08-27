// Function: FUN_1400eb1b0
// Addr: 1400eb1b0
// Size: 105 bytes


void FUN_1400eb1b0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  longlong *param_5)

{
  longlong lVar1;
  undefined4 local_28;
  ulonglong local_24;
  undefined4 local_1c;
  
  lVar1 = *param_5;
  if (lVar1 == 0) {
    local_24 = 8;
    if (param_5[1] == 0) {
      return;
    }
    lVar1 = param_5[1];
  }
  else {
    local_24 = (ulonglong)((param_4 & 0x2000000 | 0x4000000) >> 0x18);
  }
  local_28 = param_2;
  local_1c = param_3;
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,lVar1,&local_28,param_5 + 2);
  return;
}

