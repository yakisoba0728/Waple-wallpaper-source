// Function: FUN_1401fa690
// Addr: 1401fa690
// Size: 55 bytes


void FUN_1401fa690(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x60))();
    *param_3 = uVar2;
    return;
  }
  *param_3 = 0;
  return;
}

