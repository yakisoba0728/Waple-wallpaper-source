// Function: FUN_140030d50
// Addr: 140030d50
// Size: 127 bytes


void FUN_140030d50(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_140017240(puVar1 + 0xb);
    FUN_140017240(puVar1 + 7);
    FUN_140017240(puVar1 + 3);
    thunk_FUN_14028af80(puVar1,0x78);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0x78);
  return;
}

