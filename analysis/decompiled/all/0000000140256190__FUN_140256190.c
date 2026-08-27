// Function: FUN_140256190
// Addr: 140256190
// Size: 111 bytes


longlong FUN_140256190(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)(param_3 + 0x38) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = (**(code **)*puVar1)(puVar1,param_3);
      *(undefined8 *)(param_3 + 0x38) = uVar2;
    }
    param_3 = param_3 + 0x40;
    param_1 = param_1 + 0x40;
  }
  return param_3;
}

