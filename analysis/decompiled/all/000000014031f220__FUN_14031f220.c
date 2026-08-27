// Function: FUN_14031f220
// Addr: 14031f220
// Size: 94 bytes


void FUN_14031f220(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x50);
  if (plVar1 != (longlong *)0x0) {
    local_18 = *param_2;
    local_10 = param_3;
    (**(code **)(*plVar1 + 8))(plVar1[1],&local_18);
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x3e0) + 0x518) == 0) {
    FUN_1402f5c00(*(undefined8 *)(*(longlong *)(param_1 + 0x3e0) + 0x4f0));
    return;
  }
  return;
}

