// Function: FUN_1402afca0
// Addr: 1402afca0
// Size: 96 bytes


void FUN_1402afca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1404dc110 ^ (ulonglong)auStack_58;
  FUN_1402b2190(param_1,local_38,param_2,param_3);
  uVar1 = 0;
  if (local_28 * 2 != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulonglong)(local_28 * 2));
  }
  func_0x0001402a9d00(local_38);
  func_0x0001402ed2f0(local_18 ^ (ulonglong)auStack_58);
  return;
}

