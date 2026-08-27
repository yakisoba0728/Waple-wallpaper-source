// Function: FUN_14000da50
// Addr: 14000da50
// Size: 118 bytes


void FUN_14000da50(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    FUN_140017240(puVar1 + 6);
    FUN_140017240(puVar1 + 2);
    thunk_FUN_14028af80(puVar1,0x50);
    puVar1 = puVar2;
  }
  thunk_FUN_14028af80(*param_1,0x50);
  return;
}

