// Function: FUN_1401d91d0
// Addr: 1401d91d0
// Size: 118 bytes


void FUN_1401d91d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_14000d9e0(puVar1 + 6);
    FUN_1400d2120(puVar1 + 4);
    thunk_FUN_14028af80(puVar1,0x58);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0x58);
  return;
}

