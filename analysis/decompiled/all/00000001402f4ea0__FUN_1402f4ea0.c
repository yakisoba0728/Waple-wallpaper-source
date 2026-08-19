// Function: FUN_1402f4ea0
// Addr: 1402f4ea0
// Size: 138 bytes


void FUN_1402f4ea0(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_1404dc110 ^ (ulonglong)auStack_48;
  local_24 = param_3;
  if ((param_2 != 0) && (local_24 = param_2, param_3 == 0)) {
    param_3 = param_2;
  }
  local_1c = param_5;
  if ((param_4 != 0) && (local_1c = param_4, param_5 == 0)) {
    param_5 = param_4;
  }
  if (local_24 < 0x40) {
    local_24 = 0x40;
  }
  local_20 = param_3;
  if (param_3 < 0x40) {
    local_20 = 0x40;
  }
  if (local_1c == 0) {
    local_1c = 0x48;
    param_5 = 0x48;
  }
  local_28 = 0;
  local_18 = param_5;
  func_0x0001402f49a0(param_1,&local_28);
  func_0x0001402ed2f0(local_10 ^ (ulonglong)auStack_48);
  return;
}

