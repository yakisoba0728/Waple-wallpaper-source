// Function: FUN_140121680
// Addr: 140121680
// Size: 110 bytes


undefined8 FUN_140121680(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (7 < *(ulonglong *)(param_1 + 0x58)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined2 *)puVar2 = 0;
  if (1 < *(int *)(param_1 + 0xb0) - 3U) {
    return 0xc00d36b2;
  }
  if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
    return 0x8000ffff;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x58))();
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_1 + 0xb0) = 5;
  }
  return uVar1;
}

