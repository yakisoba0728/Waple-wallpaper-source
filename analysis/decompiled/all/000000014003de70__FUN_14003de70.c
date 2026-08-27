// Function: FUN_14003de70
// Addr: 14003de70
// Size: 92 bytes


void FUN_14003de70(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    thunk_FUN_14028af80(puVar1,0x20);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0x20);
  return;
}

