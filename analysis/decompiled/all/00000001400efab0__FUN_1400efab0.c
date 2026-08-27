// Function: FUN_1400efab0
// Addr: 1400efab0
// Size: 228 bytes


void FUN_1400efab0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *(undefined8 *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_2 + 0x140) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(param_2 + 0x148) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
    *(undefined8 *)(param_2 + 0x150) = uVar2;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_2 + 0x158) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_2 + 0x160) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_2 + 0xd0) = uVar1;
  FUN_14015f8d0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_2 + 0x170) = uVar2;
  return;
}

