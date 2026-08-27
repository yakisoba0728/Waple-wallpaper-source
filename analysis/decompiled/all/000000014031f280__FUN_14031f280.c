// Function: FUN_14031f280
// Addr: 14031f280
// Size: 103 bytes


void FUN_14031f280(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xd0) + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1[1],param_2,&local_18);
    *param_3 = local_18;
    *param_4 = local_10;
    return;
  }
  FUN_14031f2f0(*(longlong *)(param_1 + 0x3e0) + 0x4f0);
  return;
}

