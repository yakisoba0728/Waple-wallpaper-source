// Function: FUN_1400ef7f0
// Addr: 1400ef7f0
// Size: 85 bytes


void FUN_1400ef7f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x158);
    *(undefined8 *)(lVar1 + 0x158) = *(undefined8 *)(param_1 + 0x158);
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x28))();
    *(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x158) = uVar2;
  }
  return;
}

