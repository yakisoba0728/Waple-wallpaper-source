// Function: FUN_14025c610
// Addr: 14025c610
// Size: 80 bytes


void FUN_14025c610(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x378);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x378) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x378) = 0;
  return;
}

