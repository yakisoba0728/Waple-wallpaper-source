// Function: FUN_140031a20
// Addr: 140031a20
// Size: 47 bytes


longlong FUN_140031a20(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,param_1);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
  }
  return param_1;
}

