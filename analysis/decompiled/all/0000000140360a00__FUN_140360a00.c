// Function: FUN_140360a00
// Addr: 140360a00
// Size: 151 bytes


undefined1
FUN_140360a00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  float local_18;
  float local_14;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  local_20 = param_5;
  if (*(int *)(lVar1 + 0x28) == 0) {
    local_18 = 0.0;
  }
  else {
    local_18 = (float)*(int *)(param_1 + 0x28) / (float)*(int *)(lVar1 + 0x28);
  }
  if (*(int *)(lVar1 + 0x2c) == 0) {
    local_14 = 0.0;
  }
  else {
    local_14 = (float)*(int *)(param_1 + 0x2c) / (float)*(int *)(lVar1 + 0x2c);
  }
  local_28 = param_4;
  uVar2 = FUN_1403be440(lVar1,param_3,&DAT_1404df3e0,&local_28,0);
  return uVar2;
}

