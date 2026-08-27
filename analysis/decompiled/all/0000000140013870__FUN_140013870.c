// Function: FUN_140013870
// Addr: 140013870
// Size: 95 bytes


void FUN_140013870(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0x201;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 6;
  lVar1 = FUN_14028af20(0x10);
  uVar2 = FUN_140291700(1);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  *(longlong *)(param_1 + 0x40) = lVar1;
  return;
}

