// Function: FUN_1401dc3f0
// Addr: 1401dc3f0
// Size: 100 bytes


void FUN_1401dc3f0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_140016fc0(param_2,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_2 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(param_2 + 0x58) = uVar1;
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_3 + 0x60);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_3 + 100);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_3 + 0x68);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_3 + 0x6c);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70);
  return;
}

