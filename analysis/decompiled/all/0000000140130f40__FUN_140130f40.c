// Function: FUN_140130f40
// Addr: 140130f40
// Size: 127 bytes


void FUN_140130f40(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_140017240(puVar1 + 10);
    FUN_140017240(puVar1 + 6);
    FUN_140017240(puVar1 + 2);
    thunk_FUN_14028af80(puVar1,0x70);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0x70);
  return;
}

